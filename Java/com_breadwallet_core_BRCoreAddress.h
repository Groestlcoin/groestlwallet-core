/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_breadwallet_core_BRCoreAddress */

#ifndef _Included_com_breadwallet_core_BRCoreAddress
#define _Included_com_breadwallet_core_BRCoreAddress
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_breadwallet_core_BRCoreAddress
 * Method:    createCoreAddress
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreAddress_createCoreAddress
(JNIEnv *, jclass, jstring);

/*
 * Class:     com_breadwallet_core_BRCoreAddress
 * Method:    createCoreAddressFromScriptPubKey
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreAddress_createCoreAddressFromScriptPubKey
(JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_breadwallet_core_BRCoreAddress
 * Method:    createCoreAddressFromScriptSignature
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_core_BRCoreAddress_createCoreAddressFromScriptSignature
(JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_breadwallet_core_BRCoreAddress
 * Method:    stringify
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_breadwallet_core_BRCoreAddress_stringify
(JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreAddress
 * Method:    isValid
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_breadwallet_core_BRCoreAddress_isValid
(JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreAddress
 * Method:    getPubKeyScript
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_breadwallet_core_BRCoreAddress_getPubKeyScript
(JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_core_BRCoreAddress
 * Method:    bcashDecodeBitcoin
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_breadwallet_core_BRCoreAddress_bcashDecodeBitcoin
(JNIEnv *, jclass, jstring);

/*
 * Class:     com_breadwallet_core_BRCoreAddress
 * Method:    bcashEncodeBitcoin
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_breadwallet_core_BRCoreAddress_bcashEncodeBitcoin
(JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif
