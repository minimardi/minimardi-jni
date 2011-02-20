/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class minimardi_HistoryHeuristic */

#ifndef _Included_minimardi_HistoryHeuristic
#define _Included_minimardi_HistoryHeuristic
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     minimardi_HistoryHeuristic
 * Method:    nativeCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_minimardi_HistoryHeuristic_nativeCreate
  (JNIEnv *, jobject);

/*
 * Class:     minimardi_HistoryHeuristic
 * Method:    nativeFree
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_minimardi_HistoryHeuristic_nativeFree
  (JNIEnv *, jobject, jlong);

/*
 * Class:     minimardi_HistoryHeuristic
 * Method:    histIncNative
 * Signature: (IIJ)V
 */
JNIEXPORT void JNICALL Java_minimardi_HistoryHeuristic_histIncNative
  (JNIEnv *, jclass, jint, jint, jlong);

/*
 * Class:     minimardi_HistoryHeuristic
 * Method:    histScoreNative
 * Signature: (IJ)I
 */
JNIEXPORT jint JNICALL Java_minimardi_HistoryHeuristic_histScoreNative
  (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     minimardi_HistoryHeuristic
 * Method:    histScore2Native
 * Signature: (IIJ)I
 */
JNIEXPORT jint JNICALL Java_minimardi_HistoryHeuristic_histScore2Native
  (JNIEnv *, jclass, jint, jint, jlong);

/*
 * Class:     minimardi_HistoryHeuristic
 * Method:    clearHistoryNative
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_minimardi_HistoryHeuristic_clearHistoryNative
  (JNIEnv *, jclass, jlong);

/*
 * Class:     minimardi_HistoryHeuristic
 * Method:    initHistoryNative
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_minimardi_HistoryHeuristic_initHistoryNative
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif