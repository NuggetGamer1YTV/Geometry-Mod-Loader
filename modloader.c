#include <jni.h>
#include <android/log.h>

#define LOG_TAG "ModLoader"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

JNIEXPORT void JNICALL
Java_com_nugget_gdmodloader_ModLoader_loadMod(JNIEnv *env, jobject obj, jstring modPath) {
    const char *path = (*env)->GetStringUTFChars(env, modPath, 0);
    LOGI("Loading mod from: %s", path);
    // Logic to load and apply the mod goes here
    (*env)->ReleaseStringUTFChars(env, modPath, path);
}
