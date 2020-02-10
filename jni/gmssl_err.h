#ifndef HEADER_JNI_ERR_H
# define HEADER_JNI_ERR_H

# ifdef  __cplusplus
extern "C" {
# endif

/* BEGIN ERROR CODES */
/*
 * The following lines are auto generated by the script mkerr.pl. Any changes
 * made after this point may be overwritten when the script is next run.
 */

static int ERR_load_JNI_strings(void);
static void ERR_unload_JNI_strings(void);
static void ERR_JNI_error(int function, int reason, char *file, int line);
# define JNIerr(f,r) ERR_JNI_error((f),(r),OPENSSL_FILE,OPENSSL_LINE)

/* Error codes for the JNI functions. */

/* Function codes. */
# define JNI_F_JAVA_GMSSL_DERIVEKEY                       100
# define JNI_F_JAVA_GMSSL_DIGEST                          101
# define JNI_F_JAVA_GMSSL_GENERATERANDOM                  102
# define JNI_F_JAVA_GMSSL_GETCIPHERBLOCKSIZE              103
# define JNI_F_JAVA_GMSSL_GETCIPHERIVLENGTH               104
# define JNI_F_JAVA_GMSSL_GETCIPHERKEYLENGTH              105
# define JNI_F_JAVA_GMSSL_GETCIPHERS                      106
# define JNI_F_JAVA_GMSSL_GETDERIVEKEYALGORITHMS          107
# define JNI_F_JAVA_GMSSL_GETDIGESTBLOCKSIZE              108
# define JNI_F_JAVA_GMSSL_GETDIGESTLENGTH                 109
# define JNI_F_JAVA_GMSSL_GETDIGESTS                      110
# define JNI_F_JAVA_GMSSL_GETERRORSTRINGS                 111
# define JNI_F_JAVA_GMSSL_GETMACS                         112
# define JNI_F_JAVA_GMSSL_GETPUBLICKEYENCRYPTIONS         113
# define JNI_F_JAVA_GMSSL_GETSIGNALGORITHMS               114
# define JNI_F_JAVA_GMSSL_GETVERSIONS                     115
# define JNI_F_JAVA_GMSSL_MAC                             116
# define JNI_F_JAVA_GMSSL_PUBLICKEYDECRYPT                117
# define JNI_F_JAVA_GMSSL_PUBLICKEYENCRYPT                118
# define JNI_F_JAVA_GMSSL_SIGN                            119
# define JNI_F_JAVA_GMSSL_SYMMETRICDECRYPT                120
# define JNI_F_JAVA_GMSSL_SYMMETRICENCRYPT                121
# define JNI_F_JAVA_GMSSL_VERIFY                          122
# define JNI_F_PRINT_ERRORS_CB                            123
# define JNI_F_JAVA_GMSSL_GENERATEKEYPAIR                 124
# define JNI_F_JAVA_GMSSL_GETPUBLICKEY                    125

/* Reason codes. */
# define JNI_R_BAD_ARGUMENT                               100
# define JNI_R_CMAC_ERROR                                 114
# define JNI_R_ERRORS_STACK_ERROR                         101
# define JNI_R_GMSSL_RNG_ERROR                            102
# define JNI_R_HMAC_ERROR                                 115
# define JNI_R_INVALID_CIPHER                             103
# define JNI_R_INVALID_DERIVE_KEY_ALGOR                   118
# define JNI_R_INVALID_DIGEST                             104
# define JNI_R_INVALID_IV_LENGTH                          105
# define JNI_R_INVALID_KEY_LENGTH                         106
# define JNI_R_INVALID_LENGTH                             107
# define JNI_R_INVALID_PRIVATE_KEY                        108
# define JNI_R_INVALID_PUBLIC_KEY                         109
# define JNI_R_INVALID_PUBLIC_KEY_ENCRYPTION_ALGOR        117
# define JNI_R_INVALID_SIGN_ALGOR                         116
# define JNI_R_IV_LENGTH                                  110
# define JNI_R_JNI_MALLOC_FAILURE                         111
# define JNI_R_KEY_LENGTH                                 112
# define JNI_R_NONSUPPORTED_CIPHER                        113

# ifdef  __cplusplus
}
# endif
#endif
