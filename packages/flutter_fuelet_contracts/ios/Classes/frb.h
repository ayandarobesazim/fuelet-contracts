#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
typedef struct _Dart_Handle* Dart_Handle;

typedef struct DartCObject DartCObject;

typedef int64_t DartPort;

typedef bool (*DartPostCObjectFnType)(DartPort port_id, void *message);

typedef struct wire_uint_8_list {
  uint8_t *ptr;
  int32_t len;
} wire_uint_8_list;

typedef struct wire_TokenContract {
  struct wire_uint_8_list *node_url;
} wire_TokenContract;

typedef struct wire_SendCoinsPredicate {
  struct wire_uint_8_list *node_url;
  struct wire_uint_8_list *code;
} wire_SendCoinsPredicate;

typedef struct DartCObject *WireSyncReturn;

void store_dart_post_cobject(DartPostCObjectFnType ptr);

Dart_Handle get_dart_object(uintptr_t ptr);

void drop_dart_object(uintptr_t ptr);

uintptr_t new_dart_opaque(Dart_Handle handle);

intptr_t init_frb_dart_api_dl(void *obj);

void wire_new__static_method__TokenContract(int64_t port_, struct wire_uint_8_list *node_url);

void wire_config__method__TokenContract(int64_t port_,
                                        struct wire_TokenContract *that,
                                        struct wire_uint_8_list *contract_id);

void wire_new__static_method__SendCoinsPredicate(int64_t port_,
                                                 struct wire_uint_8_list *node_url,
                                                 struct wire_uint_8_list *code_hex);

void wire_address__method__SendCoinsPredicate(int64_t port_, struct wire_SendCoinsPredicate *that);

void wire_transfer_to__method__SendCoinsPredicate(int64_t port_,
                                                  struct wire_SendCoinsPredicate *that,
                                                  struct wire_uint_8_list *to,
                                                  struct wire_uint_8_list *secret,
                                                  uint64_t amount);

struct wire_SendCoinsPredicate *new_box_autoadd_send_coins_predicate_0(void);

struct wire_TokenContract *new_box_autoadd_token_contract_0(void);

struct wire_uint_8_list *new_uint_8_list_0(int32_t len);

void free_WireSyncReturn(WireSyncReturn ptr);

static int64_t dummy_method_to_enforce_bundling(void) {
    int64_t dummy_var = 0;
    dummy_var ^= ((int64_t) (void*) wire_new__static_method__TokenContract);
    dummy_var ^= ((int64_t) (void*) wire_config__method__TokenContract);
    dummy_var ^= ((int64_t) (void*) wire_new__static_method__SendCoinsPredicate);
    dummy_var ^= ((int64_t) (void*) wire_address__method__SendCoinsPredicate);
    dummy_var ^= ((int64_t) (void*) wire_transfer_to__method__SendCoinsPredicate);
    dummy_var ^= ((int64_t) (void*) new_box_autoadd_send_coins_predicate_0);
    dummy_var ^= ((int64_t) (void*) new_box_autoadd_token_contract_0);
    dummy_var ^= ((int64_t) (void*) new_uint_8_list_0);
    dummy_var ^= ((int64_t) (void*) free_WireSyncReturn);
    dummy_var ^= ((int64_t) (void*) store_dart_post_cobject);
    dummy_var ^= ((int64_t) (void*) get_dart_object);
    dummy_var ^= ((int64_t) (void*) drop_dart_object);
    dummy_var ^= ((int64_t) (void*) new_dart_opaque);
    return dummy_var;
}
