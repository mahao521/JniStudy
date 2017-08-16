/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jni.h"
/* Header for class com_mahao_jnidemo2_bean_MyNative */

#ifndef _Included_com_mahao_jnidemo2_bean_MyNative
#define _Included_com_mahao_jnidemo2_bean_MyNative
#ifdef __cplusplus
extern "C" {
#endif
	/*
	* Class:     com_mahao_jnidemo2_bean_MyNative
	* Method:    accessCachString
	* Signature: ()Ljava/lang/String;
	*/
	JNIEXPORT jstring JNICALL Java_com_mahao_jnidemo2_bean_MyNative_accessCachString
	(JNIEnv *, jobject);

	/*
	* Class:     com_mahao_jnidemo2_bean_MyNative
	* Method:    getInArray
	* Signature: ([I)V
	*/
	JNIEXPORT void JNICALL Java_com_mahao_jnidemo2_bean_MyNative_getInArray
	(JNIEnv *, jobject, jintArray);

	/*
	* Class:     com_mahao_jnidemo2_bean_MyNative
	* Method:    initInt2DArray
	* Signature: (I)[[I
	*/
	JNIEXPORT jobjectArray JNICALL Java_com_mahao_jnidemo2_bean_MyNative_initInt2DArray
	(JNIEnv *, jobject, jint);

	/*
	* Class:     com_mahao_jnidemo2_bean_MyNative
	* Method:    initStringArray
	* Signature: (I)[Ljava/lang/String;
	*/
	JNIEXPORT jobjectArray JNICALL Java_com_mahao_jnidemo2_bean_MyNative_initStringArray
	(JNIEnv *, jobject, jint);

	/*
	* Class:     com_mahao_jnidemo2_bean_MyNative
	* Method:    localRef
	* Signature: ()V
	*/
	JNIEXPORT void JNICALL Java_com_mahao_jnidemo2_bean_MyNative_localRef
	(JNIEnv *, jobject);

	/*
	* Class:     com_mahao_jnidemo2_bean_MyNative
	* Method:    createGlobalRef
	* Signature: ()V
	*/
	JNIEXPORT void JNICALL Java_com_mahao_jnidemo2_bean_MyNative_createGlobalRef
	(JNIEnv *, jobject);

	/*
	* Class:     com_mahao_jnidemo2_bean_MyNative
	* Method:    getglobalRef
	* Signature: ()Ljava/lang/String;
	*/
	JNIEXPORT jstring JNICALL Java_com_mahao_jnidemo2_bean_MyNative_getglobalRef
	(JNIEnv *, jobject);

	/*
	* Class:     com_mahao_jnidemo2_bean_MyNative
	* Method:    delGlobalRef
	* Signature: ()V
	*/
	JNIEXPORT void JNICALL Java_com_mahao_jnidemo2_bean_MyNative_delGlobalRef
	(JNIEnv *, jobject);

	/*
	* Class:     com_mahao_jnidemo2_bean_MyNative
	* Method:    exception
	* Signature: ()V
	*/
	JNIEXPORT void JNICALL Java_com_mahao_jnidemo2_bean_MyNative_exception
	(JNIEnv *, jobject);

	/*
	* Class:     com_mahao_jnidemo2_bean_MyNative
	* Method:    cached
	* Signature: ()V
	*/
	JNIEXPORT void JNICALL Java_com_mahao_jnidemo2_bean_MyNative_cached
	(JNIEnv *, jobject);

	/*
	* Class:     com_mahao_jnidemo2_bean_MyNative
	* Method:    initIDs
	* Signature: ()V
	*/
	JNIEXPORT void JNICALL Java_com_mahao_jnidemo2_bean_MyNative_initIDs
	(JNIEnv *, jclass);


	JNIEXPORT jint JNICALL Java_com_mahao_jnidemo2_bean_deal2Arr
	(JNIEnv *, jobject, jobjectArray);

#ifdef __cplusplus
}
#endif
#endif
