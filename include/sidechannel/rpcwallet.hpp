// Copyright (C) 2019-2022 The SpaceXpanse developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef GAMECHANNEL_RPCWALLET_HPP
#define GAMECHANNEL_RPCWALLET_HPP

#include "movesender.hpp"
#include "signatures.hpp"

#include <spacexpansegame/rpc-stubs/spacexpanserpcclient.h>
#include <spacexpansegame/rpc-stubs/spacexpansewalletrpcclient.h>

#include <string>

namespace spacexpanse
{

/**
 * An implementation of the verifier based on a SpaceXpanse RPC connection.
 *
 * This uses SpaceXpanse Core's signmessage/verifymessage scheme, but signatures
 * returned and passed in for verification are assumed to be already base64
 * decoded to raw bytes.
 */
class RpcSignatureVerifier : public SignatureVerifier
{

private:

  /** The underlying RPC client for verification.  */
  SpaceXpanseRpcClient& rpc;

public:

  explicit RpcSignatureVerifier (SpaceXpanseRpcClient& r)
    : rpc(r)
  {}

  std::string RecoverSigner (const std::string& msg,
                             const std::string& sgn) const override;

};

/**
 * An implementation of the signer based on a SpaceXpanse RPC connection.
 */
class RpcSignatureSigner : public SignatureSigner
{

private:

  /** The underlying RPC wallet for signing.  */
  SpaceXpanseWalletRpcClient& wallet;

  /** The address used for signing (must be in the wallet).  */
  const std::string address;

public:

  explicit RpcSignatureSigner (SpaceXpanseWalletRpcClient& w, const std::string& addr);

  std::string GetAddress () const override;
  std::string SignMessage (const std::string& msg) override;

};

/**
 * A concrete implementation of TransactionSender that uses a SpaceXpanse Core RPC
 * connection with name_update.
 */
class RpcTransactionSender : public TransactionSender
{

private:

  /** SpaceXpanse RPC connection to use.  */
  SpaceXpanseRpcClient& rpc;

  /** SpaceXpanse wallet RPC that we use.  */
  SpaceXpanseWalletRpcClient& wallet;

public:

  explicit RpcTransactionSender (SpaceXpanseRpcClient& r, SpaceXpanseWalletRpcClient& w)
    : rpc(r), wallet(w)
  {}

  uint256 SendRawMove (const std::string& name,
                       const std::string& value) override;
  bool IsPending (const uint256& txid) const override;

};

} // namespace spacexpanse

#endif // GAMECHANNEL_RPCWALLET_HPP
