#include "config.h"
#include <common/amount.h>
#include <common/json_param.c>
#include <common/json_parse_simple.c>
#include <common/setup.h>
#include <stdio.h>
#include <wire/wire.h>

/* AUTOGENERATED MOCKS START */
/* Generated stub for amount_asset_is_main */
bool amount_asset_is_main(struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_is_main called!\n"); abort(); }
/* Generated stub for amount_asset_to_sat */
struct amount_sat amount_asset_to_sat(struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_to_sat called!\n"); abort(); }
/* Generated stub for amount_sat */
struct amount_sat amount_sat(u64 satoshis UNNEEDED)
{ fprintf(stderr, "amount_sat called!\n"); abort(); }
/* Generated stub for amount_sat_add */
 bool amount_sat_add(struct amount_sat *val UNNEEDED,
				       struct amount_sat a UNNEEDED,
				       struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_add called!\n"); abort(); }
/* Generated stub for amount_sat_div */
struct amount_sat amount_sat_div(struct amount_sat sat UNNEEDED, u64 div UNNEEDED)
{ fprintf(stderr, "amount_sat_div called!\n"); abort(); }
/* Generated stub for amount_sat_eq */
bool amount_sat_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_eq called!\n"); abort(); }
/* Generated stub for amount_sat_greater_eq */
bool amount_sat_greater_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_greater_eq called!\n"); abort(); }
/* Generated stub for amount_sat_mul */
bool amount_sat_mul(struct amount_sat *res UNNEEDED, struct amount_sat sat UNNEEDED, u64 mul UNNEEDED)
{ fprintf(stderr, "amount_sat_mul called!\n"); abort(); }
/* Generated stub for amount_sat_sub */
 bool amount_sat_sub(struct amount_sat *val UNNEEDED,
				       struct amount_sat a UNNEEDED,
				       struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_sub called!\n"); abort(); }
/* Generated stub for amount_sat_to_asset */
struct amount_asset amount_sat_to_asset(struct amount_sat *sat UNNEEDED, const u8 *asset UNNEEDED)
{ fprintf(stderr, "amount_sat_to_asset called!\n"); abort(); }
/* Generated stub for amount_tx_fee */
struct amount_sat amount_tx_fee(u32 fee_per_kw UNNEEDED, size_t weight UNNEEDED)
{ fprintf(stderr, "amount_tx_fee called!\n"); abort(); }
/* Generated stub for command_check_only */
bool command_check_only(const struct command *cmd UNNEEDED)
{ fprintf(stderr, "command_check_only called!\n"); abort(); }
/* Generated stub for command_deprecated_apis */
bool command_deprecated_apis(const struct command *cmd UNNEEDED)
{ fprintf(stderr, "command_deprecated_apis called!\n"); abort(); }
/* Generated stub for command_fail */
struct command_result *command_fail(struct command *cmd UNNEEDED, enum jsonrpc_errcode code UNNEEDED,
				    const char *fmt UNNEEDED, ...)

{ fprintf(stderr, "command_fail called!\n"); abort(); }
/* Generated stub for command_set_usage */
void command_set_usage(struct command *cmd UNNEEDED, const char *usage UNNEEDED)
{ fprintf(stderr, "command_set_usage called!\n"); abort(); }
/* Generated stub for command_usage_only */
bool command_usage_only(const struct command *cmd UNNEEDED)
{ fprintf(stderr, "command_usage_only called!\n"); abort(); }
/* Generated stub for fromwire */
const u8 *fromwire(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, void *copy UNNEEDED, size_t n UNNEEDED)
{ fprintf(stderr, "fromwire called!\n"); abort(); }
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
/* Generated stub for fromwire_u32 */
u32 fromwire_u32(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u32 called!\n"); abort(); }
/* Generated stub for fromwire_u64 */
u64 fromwire_u64(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u64 called!\n"); abort(); }
/* Generated stub for fromwire_u8 */
u8 fromwire_u8(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u8 called!\n"); abort(); }
/* Generated stub for fromwire_u8_array */
void fromwire_u8_array(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, u8 *arr UNNEEDED, size_t num UNNEEDED)
{ fprintf(stderr, "fromwire_u8_array called!\n"); abort(); }
/* Generated stub for json_scan */
const char *json_scan(const tal_t *ctx UNNEEDED,
		      const char *buffer UNNEEDED,
		      const jsmntok_t *tok UNNEEDED,
		      const char *guide UNNEEDED,
		      ...)
{ fprintf(stderr, "json_scan called!\n"); abort(); }
/* Generated stub for json_to_channel_id */
bool json_to_channel_id(const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
			struct channel_id *cid UNNEEDED)
{ fprintf(stderr, "json_to_channel_id called!\n"); abort(); }
/* Generated stub for json_to_millionths */
bool json_to_millionths(const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
			u64 *millionths UNNEEDED)
{ fprintf(stderr, "json_to_millionths called!\n"); abort(); }
/* Generated stub for json_to_msat */
bool json_to_msat(const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
		  struct amount_msat *msat UNNEEDED)
{ fprintf(stderr, "json_to_msat called!\n"); abort(); }
/* Generated stub for json_to_node_id */
bool json_to_node_id(const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
			       struct node_id *id UNNEEDED)
{ fprintf(stderr, "json_to_node_id called!\n"); abort(); }
/* Generated stub for json_to_number */
bool json_to_number(const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
		    unsigned int *num UNNEEDED)
{ fprintf(stderr, "json_to_number called!\n"); abort(); }
/* Generated stub for json_to_outpoint */
bool json_to_outpoint(const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
		      struct bitcoin_outpoint *op UNNEEDED)
{ fprintf(stderr, "json_to_outpoint called!\n"); abort(); }
/* Generated stub for json_to_pubkey */
bool json_to_pubkey(const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
		    struct pubkey *pubkey UNNEEDED)
{ fprintf(stderr, "json_to_pubkey called!\n"); abort(); }
/* Generated stub for json_to_short_channel_id */
bool json_to_short_channel_id(const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
			      struct short_channel_id *scid UNNEEDED)
{ fprintf(stderr, "json_to_short_channel_id called!\n"); abort(); }
/* Generated stub for json_to_txid */
bool json_to_txid(const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
		  struct bitcoin_txid *txid UNNEEDED)
{ fprintf(stderr, "json_to_txid called!\n"); abort(); }
/* Generated stub for json_to_u16 */
bool json_to_u16(const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
                 uint16_t *num UNNEEDED)
{ fprintf(stderr, "json_to_u16 called!\n"); abort(); }
/* Generated stub for json_tok_bin_from_hex */
u8 *json_tok_bin_from_hex(const tal_t *ctx UNNEEDED, const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED)
{ fprintf(stderr, "json_tok_bin_from_hex called!\n"); abort(); }
/* Generated stub for lease_rates_fromhex */
struct lease_rates *lease_rates_fromhex(const tal_t *ctx UNNEEDED,
					const char *hexdata UNNEEDED, size_t len UNNEEDED)
{ fprintf(stderr, "lease_rates_fromhex called!\n"); abort(); }
/* Generated stub for parse_amount_msat */
bool parse_amount_msat(struct amount_msat *msat UNNEEDED, const char *s UNNEEDED, size_t slen UNNEEDED)
{ fprintf(stderr, "parse_amount_msat called!\n"); abort(); }
/* Generated stub for parse_amount_sat */
bool parse_amount_sat(struct amount_sat *sat UNNEEDED, const char *s UNNEEDED, size_t slen UNNEEDED)
{ fprintf(stderr, "parse_amount_sat called!\n"); abort(); }
/* Generated stub for segwit_addr_decode */
int segwit_addr_decode(
    int* ver UNNEEDED,
    uint8_t* prog UNNEEDED,
    size_t* prog_len UNNEEDED,
    const char* hrp UNNEEDED,
    const char* addr
)
{ fprintf(stderr, "segwit_addr_decode called!\n"); abort(); }
/* Generated stub for towire */
void towire(u8 **pptr UNNEEDED, const void *data UNNEEDED, size_t len UNNEEDED)
{ fprintf(stderr, "towire called!\n"); abort(); }
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
/* Generated stub for strip_lightning_prefix */
const char *to_canonical_invstr(const tal_t *ctx, const char *invstring UNNEEDED)
{ fprintf(stderr, "strip_lightning_prefix called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

struct json {
	jsmntok_t *toks;
	char *buffer;
};

static void convert_quotes(char *first)
{
	while (*first != '\0') {
		if (*first == '\'')
			*first = '"';
		first++;
	}
}

static struct json *json_parse(const tal_t * ctx, const char *str)
{
	struct json *j = tal(ctx, struct json);
	j->buffer = tal_strdup(j, str);
	convert_quotes(j->buffer);
	j->toks = json_parse_simple(j, j->buffer, strlen(j->buffer));
	assert(j->toks);
	j->toks = json_tok_copy(j, j->toks);
	return j;
}

static void test_toks(const struct json *j, ...)
{
	const jsmntok_t * tok = j->toks + 1;
	const char *value;
	va_list(ap);
	va_start(ap, j);
	while ((value = va_arg(ap, char *)) != NULL) {
		if (tok->type == JSMN_OBJECT)
			assert(streq(value, "{"));
		else if (tok->type == JSMN_ARRAY)
			assert(streq(value, "["));
		else
			assert(json_tok_streq(j->buffer, tok, value));
		tok++;
	}
}

static void sanity(void)
{
	struct json *j = json_parse(tmpctx, "[]");
	json_tok_remove(&j->toks, j->toks, j->toks, 0);
	assert(j);
}

static void remove_one(void)
{
	struct json *j = json_parse(tmpctx, "['invoice']");
	json_tok_remove(&j->toks, j->toks, j->toks + 1, 1);
	assert(j);
}

static void remove_first(void)
{
	struct json *j = json_parse(tmpctx, "['one', 'two', 'three']");
	assert(j);
	json_tok_remove(&j->toks, j->toks, j->toks + 1, 1);
	assert(j->toks);

	test_toks(j, "two", "three", NULL);
	assert(tal_count(j->toks) == 3);

	j = json_parse(tmpctx, "{'1':'one', '2':'two', '3':'three'}");
	assert(j);

	json_tok_remove(&j->toks, j->toks, j->toks + 1, 1);
	assert(j);
	test_toks(j, "2", "two", "3", "three", NULL);
	assert(tal_count(j->toks) == 5);

	j = json_parse(tmpctx, "{'1':'one', '2':'two', '3':'three'}");
	json_tok_remove(&j->toks, j->toks, j->toks + 1, 1);
	assert(j);
	test_toks(j, "2", "two", "3", "three",  NULL);
	assert(tal_count(j->toks) == 5);

}

static void remove_last(void)
{
	struct json *j = json_parse(tmpctx, "['one', 'two', 'three']");
	json_tok_remove(&j->toks, j->toks, j->toks + 3, 1);
	test_toks(j, "one", "two", NULL);
	assert(tal_count(j->toks) == 3);

	j = json_parse(tmpctx, "{'1':'one', '2':'two', '3':'three'}");
	json_tok_remove(&j->toks, j->toks, j->toks + 5, 1);
	assert(j);
	test_toks(j, "1", "one", "2", "two", NULL);
	assert(tal_count(j->toks) == 5);
}

static void remove_multiple(void)
{
	struct json *j = json_parse(tmpctx, "['a', 'b', 'c', 'd', 'e']");
	json_tok_remove(&j->toks, j->toks, j->toks + 1, 2);
	test_toks(j, "c", "d", "e", NULL);

	j = json_parse(tmpctx, "['a', 'b', 'c', 'd', 'e']");
	json_tok_remove(&j->toks, j->toks, j->toks + 2, 2);
	test_toks(j, "a", "d", "e", NULL);

	j = json_parse(tmpctx, "{'1':'one', '2':'two', '3':'three', '4':'four'}");
	json_tok_remove(&j->toks, j->toks, j->toks + 3, 2);
	assert(j);
	test_toks(j, "1", "one", "4", "four", NULL);
	assert(tal_count(j->toks) == 5);
}

static void remove_all(void)
{
	struct json *j = json_parse(tmpctx, "['a', 'b', 'c', 'd', 'e']");
	json_tok_remove(&j->toks, j->toks, j->toks + 1, 5);
	assert(tal_count(j->toks) == 1);

	j = json_parse(tmpctx, "{'1':'one', '2':'two', '3':'three', '4':'four'}");
	json_tok_remove(&j->toks, j->toks, j->toks + 1, 4);
	assert(tal_count(j->toks) == 1);
}

static void remove_complex(void)
{
	struct json *j = json_parse(tmpctx,
	"{'1':'one', '2':'two',"
		"'3': { '3.1': 'a', '3.2':'b', '3.3':'c' }, "
		"'4': { '4.1': 'a', '4.2':'b', '4.3':'c' }, "
	"'5':'five'}");

	json_tok_remove(&j->toks, j->toks, j->toks + 5, 2);
	test_toks(j, "1", "one", "2", "two", "5", "five", NULL);
}

static void remove_inside_obj(void)
{
	jsmntok_t *tok;
	struct json *j = json_parse(tmpctx,
	"{'1':'one', '2':'two',"
		"'3': { '3.1': 'a', '3.2':'b', '3.3':'c' }, "
	"'4':'four'}");

	tok = (jsmntok_t *)json_get_member(j->buffer, j->toks, "3");
	json_tok_remove(&j->toks, tok, tok+1, 1);
	test_toks(j, "1", "one", "2", "two", "3", "{", "3.2", "b", "3.3", "c",
		  "4", "four", NULL);
}

int main(int argc, char *argv[])
{
	common_setup(argv[0]);

	sanity();
	remove_one();
	remove_first();
	remove_last();
	remove_multiple();
	remove_all();
	remove_complex();
	remove_inside_obj();

	printf("run-json_remove ok\n");
	common_shutdown();
}
