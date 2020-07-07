#include "../derive_basepoints.c"
#include <ccan/err/err.h>
#include <ccan/mem/mem.h>
#include <ccan/str/hex/hex.h>
#include <ccan/structeq/structeq.h>
#include <common/amount.h>
#include <common/utils.h>
#include <stdio.h>
#include <wally_core.h>

/* AUTOGENERATED MOCKS START */
/* Generated stub for amount_asset_is_main */
bool amount_asset_is_main(struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_is_main called!\n"); abort(); }
/* Generated stub for amount_asset_to_sat */
struct amount_sat amount_asset_to_sat(struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_to_sat called!\n"); abort(); }
/* Generated stub for amount_sat_add */
 bool amount_sat_add(struct amount_sat *val UNNEEDED,
				       struct amount_sat a UNNEEDED,
				       struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_add called!\n"); abort(); }
/* Generated stub for amount_sat_eq */
bool amount_sat_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_eq called!\n"); abort(); }
/* Generated stub for amount_sat_greater_eq */
bool amount_sat_greater_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_greater_eq called!\n"); abort(); }
/* Generated stub for amount_sat_sub */
 bool amount_sat_sub(struct amount_sat *val UNNEEDED,
				       struct amount_sat a UNNEEDED,
				       struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_sub called!\n"); abort(); }
/* Generated stub for amount_tx_fee */
struct amount_sat amount_tx_fee(u32 fee_per_kw UNNEEDED, size_t weight UNNEEDED)
{ fprintf(stderr, "amount_tx_fee called!\n"); abort(); }
/* Generated stub for fromwire */
const u8 *fromwire(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, void *copy UNNEEDED, size_t n UNNEEDED)
{ fprintf(stderr, "fromwire called!\n"); abort(); }
/* Generated stub for fromwire_amount_sat */
struct amount_sat fromwire_amount_sat(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_amount_sat called!\n"); abort(); }
/* Generated stub for fromwire_bool */
bool fromwire_bool(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_bool called!\n"); abort(); }
/* Generated stub for fromwire_fail */
void *fromwire_fail(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_fail called!\n"); abort(); }
/* Generated stub for fromwire_secp256k1_ecdsa_signature */
void fromwire_secp256k1_ecdsa_signature(const u8 **cursor UNNEEDED, size_t *max UNNEEDED,
					secp256k1_ecdsa_signature *signature UNNEEDED)
{ fprintf(stderr, "fromwire_secp256k1_ecdsa_signature called!\n"); abort(); }
/* Generated stub for fromwire_sha256 */
void fromwire_sha256(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, struct sha256 *sha256 UNNEEDED)
{ fprintf(stderr, "fromwire_sha256 called!\n"); abort(); }
/* Generated stub for fromwire_tal_arrn */
u8 *fromwire_tal_arrn(const tal_t *ctx UNNEEDED,
		       const u8 **cursor UNNEEDED, size_t *max UNNEEDED, size_t num UNNEEDED)
{ fprintf(stderr, "fromwire_tal_arrn called!\n"); abort(); }
/* Generated stub for fromwire_u16 */
u16 fromwire_u16(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u16 called!\n"); abort(); }
/* Generated stub for fromwire_u32 */
u32 fromwire_u32(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u32 called!\n"); abort(); }
/* Generated stub for fromwire_u64 */
u64 fromwire_u64(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u64 called!\n"); abort(); }
/* Generated stub for fromwire_u8 */
u8 fromwire_u8(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u8 called!\n"); abort(); }
/* Generated stub for towire */
void towire(u8 **pptr UNNEEDED, const void *data UNNEEDED, size_t len UNNEEDED)
{ fprintf(stderr, "towire called!\n"); abort(); }
/* Generated stub for towire_amount_sat */
void towire_amount_sat(u8 **pptr UNNEEDED, const struct amount_sat sat UNNEEDED)
{ fprintf(stderr, "towire_amount_sat called!\n"); abort(); }
/* Generated stub for towire_bool */
void towire_bool(u8 **pptr UNNEEDED, bool v UNNEEDED)
{ fprintf(stderr, "towire_bool called!\n"); abort(); }
/* Generated stub for towire_secp256k1_ecdsa_signature */
void towire_secp256k1_ecdsa_signature(u8 **pptr UNNEEDED,
			      const secp256k1_ecdsa_signature *signature UNNEEDED)
{ fprintf(stderr, "towire_secp256k1_ecdsa_signature called!\n"); abort(); }
/* Generated stub for towire_sha256 */
void towire_sha256(u8 **pptr UNNEEDED, const struct sha256 *sha256 UNNEEDED)
{ fprintf(stderr, "towire_sha256 called!\n"); abort(); }
/* Generated stub for towire_u16 */
void towire_u16(u8 **pptr UNNEEDED, u16 v UNNEEDED)
{ fprintf(stderr, "towire_u16 called!\n"); abort(); }
/* Generated stub for towire_u32 */
void towire_u32(u8 **pptr UNNEEDED, u32 v UNNEEDED)
{ fprintf(stderr, "towire_u32 called!\n"); abort(); }
/* Generated stub for towire_u64 */
void towire_u64(u8 **pptr UNNEEDED, u64 v UNNEEDED)
{ fprintf(stderr, "towire_u64 called!\n"); abort(); }
/* Generated stub for towire_u8 */
void towire_u8(u8 **pptr UNNEEDED, u8 v UNNEEDED)
{ fprintf(stderr, "towire_u8 called!\n"); abort(); }
/* Generated stub for towire_u8_array */
void towire_u8_array(u8 **pptr UNNEEDED, const u8 *arr UNNEEDED, size_t num UNNEEDED)
{ fprintf(stderr, "towire_u8_array called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

STRUCTEQ_DEF(basepoints, 0,
	     revocation.pubkey,
	     payment.pubkey,
	     htlc.pubkey,
	     delayed_payment.pubkey);
STRUCTEQ_DEF(secrets, 0,
	     funding_privkey.secret.data,
	     revocation_basepoint_secret.data,
	     payment_basepoint_secret.data,
	     htlc_basepoint_secret.data,
	     delayed_payment_basepoint_secret.data);
STRUCTEQ_DEF(privkey, 0,
	     secret.data);

struct info {
	struct secret seed;
	struct pubkey funding_pubkey;
	struct basepoints basepoints;
	struct secrets secrets;
	struct sha256 shaseed;
};

/* We get a fresh one each time, to catch uninitialized fields */
static struct info *new_info(const tal_t *ctx)
{
	struct info *info = tal(ctx, struct info);
	memset(&info->seed, 7, sizeof(info->seed));

	return info;
}

int main(void)
{
	setup_locale();

	const tal_t *ctx = tal(NULL, char);
	struct info *baseline, *info;

	wally_init(0);
	secp256k1_ctx = wally_get_secp_context();
	baseline = new_info(ctx);
	assert(derive_basepoints(&baseline->seed, &baseline->funding_pubkey,
				 &baseline->basepoints,
				 &baseline->secrets,
				 &baseline->shaseed));

	/* Same seed, same result. */
	info = new_info(ctx);
	assert(derive_basepoints(&info->seed, &info->funding_pubkey,
				 &info->basepoints,
				 &info->secrets,
				 &info->shaseed));
	assert(pubkey_eq(&baseline->funding_pubkey, &info->funding_pubkey));
	assert(basepoints_eq(&baseline->basepoints, &info->basepoints));
	assert(secrets_eq(&baseline->secrets, &info->secrets));
	assert(sha256_eq(&baseline->shaseed, &info->shaseed));

	/* Different seed, different result. */
	for (size_t i = 0; i < sizeof(info->seed); i++) {
		for (size_t b = 0; b < CHAR_BIT; b++) {
			info = new_info(ctx);
			info->seed.data[i] ^= (1 << b);

			assert(derive_basepoints(&info->seed,
						 &info->funding_pubkey,
						 &info->basepoints,
						 &info->secrets,
						 &info->shaseed));
			assert(!pubkey_eq(&baseline->funding_pubkey,
					  &info->funding_pubkey));
			assert(!basepoints_eq(&baseline->basepoints,
					      &info->basepoints));
			assert(!secrets_eq(&baseline->secrets, &info->secrets));
			assert(!sha256_eq(&baseline->shaseed, &info->shaseed));
		}
	}

	/* Any field can be NULL (except seed). */
	info = new_info(ctx);
	assert(derive_basepoints(&info->seed, NULL,
				 &info->basepoints,
				 &info->secrets,
				 &info->shaseed));
	assert(basepoints_eq(&baseline->basepoints, &info->basepoints));
	assert(secrets_eq(&baseline->secrets, &info->secrets));
	assert(sha256_eq(&baseline->shaseed, &info->shaseed));

	info = new_info(ctx);
	assert(derive_basepoints(&info->seed, &info->funding_pubkey,
				 NULL,
				 &info->secrets,
				 &info->shaseed));
	assert(pubkey_eq(&baseline->funding_pubkey, &info->funding_pubkey));
	assert(secrets_eq(&baseline->secrets, &info->secrets));
	assert(sha256_eq(&baseline->shaseed, &info->shaseed));

	info = new_info(ctx);
	assert(derive_basepoints(&info->seed, &info->funding_pubkey,
				 &info->basepoints,
				 NULL,
				 &info->shaseed));
	assert(pubkey_eq(&baseline->funding_pubkey, &info->funding_pubkey));
	assert(basepoints_eq(&baseline->basepoints, &info->basepoints));
	assert(sha256_eq(&baseline->shaseed, &info->shaseed));

	info = new_info(ctx);
	assert(derive_basepoints(&info->seed, &info->funding_pubkey,
				 &info->basepoints,
				 &info->secrets,
				 NULL));
	assert(pubkey_eq(&baseline->funding_pubkey, &info->funding_pubkey));
	assert(basepoints_eq(&baseline->basepoints, &info->basepoints));
	assert(secrets_eq(&baseline->secrets, &info->secrets));

	/* derive_payment_basepoint should give same results. */
	info = new_info(ctx);
	assert(derive_payment_basepoint(&info->seed, &info->basepoints.payment,
					&info->secrets.payment_basepoint_secret));
	assert(pubkey_eq(&baseline->basepoints.payment,
			 &info->basepoints.payment));
	assert(secret_eq_consttime(&baseline->secrets.payment_basepoint_secret,
				   &info->secrets.payment_basepoint_secret));

	/* derive_funding_key should give same results. */
	info = new_info(ctx);
	assert(derive_funding_key(&info->seed, &info->funding_pubkey,
				  &info->secrets.funding_privkey));
	assert(pubkey_eq(&baseline->funding_pubkey, &info->funding_pubkey));
	assert(privkey_eq(&baseline->secrets.funding_privkey,
			  &info->secrets.funding_privkey));

	/* derive_shaseed should give same results. */
	info = new_info(ctx);
	assert(derive_shaseed(&info->seed, &info->shaseed));
	assert(sha256_eq(&baseline->shaseed, &info->shaseed));

	/* derive_revocation_basepoint should give same results. */
	info = new_info(ctx);
	assert(derive_revocation_basepoint(&info->seed, &info->basepoints.revocation,
					&info->secrets.revocation_basepoint_secret));
	assert(pubkey_eq(&baseline->basepoints.revocation,
			 &info->basepoints.revocation));
	assert(secret_eq_consttime(&baseline->secrets.revocation_basepoint_secret,
				   &info->secrets.revocation_basepoint_secret));

	/* derive_htlc_basepoint should give same results. */
	info = new_info(ctx);
	assert(derive_htlc_basepoint(&info->seed, &info->basepoints.htlc,
					&info->secrets.htlc_basepoint_secret));
	assert(pubkey_eq(&baseline->basepoints.htlc,
			 &info->basepoints.htlc));
	assert(secret_eq_consttime(&baseline->secrets.htlc_basepoint_secret,
				   &info->secrets.htlc_basepoint_secret));

	tal_free(ctx);
	wally_cleanup(0);
	return 0;
}
