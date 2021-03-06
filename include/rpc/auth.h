#ifndef _RPC_AUTH_H
#include <sunrpc/rpc/auth.h>

libc_hidden_proto (getnetname)
libc_hidden_proto (netname2user)
libc_hidden_proto (host2netname)
libc_hidden_proto (user2netname)
libc_hidden_proto (key_gendes)

/* Now define the internal interfaces.  */
struct key_netstarg;
extern int key_setnet (struct key_netstarg *arg);

#define DECLARE_NSS_PROTOTYPES(service)					\
extern enum nss_status _nss_ ##service ## _netname2user			\
		       (char netname[MAXNETNAMELEN + 1], uid_t *uidp,	\
			gid_t *gidp, int *gidlenp, gid_t *gidlist,	\
			int *errnop);

DECLARE_NSS_PROTOTYPES (nis)
DECLARE_NSS_PROTOTYPES (nisplus)

#undef DECLARE_NSS_PROTOTYPES

libc_hidden_proto (key_encryptsession_pk)
libc_hidden_proto (key_decryptsession_pk)

libc_hidden_proto (_null_auth)
libc_hidden_proto (authnone_create)
libc_hidden_proto (authunix_create)
libc_hidden_proto (authunix_create_default)
libc_hidden_proto (xdr_des_block)
libc_hidden_proto (xdr_opaque_auth)
libc_hidden_proto (authdes_create)
libc_hidden_proto (authdes_pk_create)
libc_hidden_proto (key_decryptsession)
libc_hidden_proto (key_encryptsession)
libc_hidden_proto (key_get_conv)
libc_hidden_proto (key_secretkey_is_set)
libc_hidden_proto (key_setnet)
libc_hidden_proto (key_setsecret)
libc_hidden_proto (netname2host)

#endif
