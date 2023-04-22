#include<C:\Users\S3504075\Documents\Project12Part2Files\pkg\pkg_Cls\main.h>
#include<C:\Users\S3504075\Documents\Project12Part2Files\pkg\pkg_Cls\pkg_Cls.h>

jdouble Java_pkg_Cls_f__DLjava_lang_String_2 (
             JNIEnv *env,        /* interface pointer */
             jobject obj,        /* "this" pointer */
             jdouble d,          /* argument #1 */
             jstring s)          /* argument #2 */
{
         const char *str = env->GetStringUTFChars(s, 0);
         printf("Hello %s\n", str);
         env->ReleaseStringUTFChars(s, str);
         return d;
}

jint Java_pkg_Cls_f__ILjava_lang_String_2 (
             JNIEnv *env,        /* interface pointer */
             jobject obj,        /* "this" pointer */
             jint i,             /* argument #1 */
             jstring s)          /* argument #2 */
{
         const char *str = env->GetStringUTFChars(s, 0);
         printf("Hello %s\n", str);
         env->ReleaseStringUTFChars(s, str);
         return i;
}

extern "C" DLL_EXPORT BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            // attach to process
            // return FALSE to fail DLL load
            break;

        case DLL_PROCESS_DETACH:
            // detach from process
            break;

        case DLL_THREAD_ATTACH:
            // attach to thread
            break;

        case DLL_THREAD_DETACH:
            // detach from thread
            break;
    }
    return TRUE; // succesful
}
