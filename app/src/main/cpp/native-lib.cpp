#include <jni.h>
#include <string>
extern "C" JNIEXPORT jstring JNICALL
Java_com_iranvr_streamer_MainActivity_stringFromJNI(JNIEnv* env, jobject /* this */) {
    return env->NewStringUTF("IranianVRStreamer Core Loaded");
}
