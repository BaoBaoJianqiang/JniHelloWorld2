#include "com_jianqiang_jnihelloworld_AnotherJniUtils.h"
/**
 * 上边的引用标签一定是.h的文件名家后缀，方法名一定要和.h文件中的方法名称一样
 */
JNIEXPORT jstring JNICALL Java_com_jianqiang_jnihelloworld_AnotherJniUtils_sayGoodBye
        (JNIEnv *env, jobject obj) {
    return (*env)->NewStringUTF(env, "Goodbye baobao");
}