
//
// public/tier0/tier0_stdlib.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 53
//

// <00380BD1> ../public/tier0/tier0_stdlib.h:15
uint32 V_tier0_crc32(uint32, const void *, size_t)
{
} /* size: 0 */

// <056BBF84> ../public/tier0/tier0_stdlib.h:42
int V_GetErrno(void)
{
} /* size: 0 */

// <056BBFB1> ../public/tier0/tier0_stdlib.h:43
void V_SetErrno(int)
{
} /* size: 0 */

// <00024300> ../public/tier0/tier0_stdlib.h:50
FILE* V_Get_stderr(void)
{
} /* size: 0 */

// <0204401A> ../public/tier0/tier0_stdlib.h:55
int V_fclose(FILE *)
{
} /* size: 0 */

// <0013F057> ../public/tier0/tier0_stdlib.h:57
int V_ferror(FILE *)
{
} /* size: 0 */

// <005A324B> ../public/tier0/tier0_stdlib.h:58
int V_fflush(FILE *)
{
} /* size: 0 */

// <02044089> ../public/tier0/tier0_stdlib.h:65
FILE* V_fopen(const char *, const char *)
{
} /* size: 0 */

// <000245E4> ../public/tier0/tier0_stdlib.h:66
FILE* V_fopenUTF8(const char *, const char *)
{
} /* size: 0 */

// <00157B2F> ../public/tier0/tier0_stdlib.h:67
FILE* V_fdopen(int, const char *)
{
} /* size: 0 */

// <009A5A57> ../public/tier0/tier0_stdlib.h:68
int V_fprintf(FILE *, const char *, ...)
{
} /* size: 0 */

// <02043FF3> ../public/tier0/tier0_stdlib.h:71
size_t V_fread(void *, size_t, size_t, FILE *)
{
} /* size: 0 */

// <005A3229> ../public/tier0/tier0_stdlib.h:72
FILE* V_freopen(const char *, const char *, FILE *)
{
} /* size: 0 */

// <02044067> ../public/tier0/tier0_stdlib.h:74
int V_fseek(FILE *, long int, int)
{
} /* size: 0 */

// <0211B304> ../public/tier0/tier0_stdlib.h:75
int V_fseeki64(FILE *, int64, int)
{
} /* size: 0 */

// <0204404F> ../public/tier0/tier0_stdlib.h:76
long int V_ftell(FILE *)
{
} /* size: 0 */

// <0212B0B9> ../public/tier0/tier0_stdlib.h:77
int64 V_ftelli64(FILE *)
{
} /* size: 0 */

// <0211B2DD> ../public/tier0/tier0_stdlib.h:78
size_t V_fwrite(const void *, size_t, size_t, FILE *)
{
} /* size: 0 */

// <0009C9C8> ../public/tier0/tier0_stdlib.h:79
void V_rewind(FILE *)
{
} /* size: 0 */

// <0013F10F> ../public/tier0/tier0_stdlib.h:80
int V_setvbuf(FILE *, char *, int, size_t)
{
} /* size: 0 */

// <005263B7> ../public/tier0/tier0_stdlib.h:100
lconv* V_localeconv(void)
{
} /* size: 0 */

// <00228C09> ../public/tier0/tier0_stdlib.h:101
void V_qsort(void *, size_t, size_t, int (*)(const void *, const void *))
{
} /* size: 0 */

// <0444B586> ../public/tier0/tier0_stdlib.h:102
void V_qsort_s(void *, size_t, size_t, int (*)(void *, const void *, const void *), void *)
{
} /* size: 0 */

// <031F70AF> ../public/tier0/tier0_stdlib.h:103
char* V_strtok(char *, const char *)
{
} /* size: 0 */

// <00157B4C> ../public/tier0/tier0_stdlib.h:108
int V_mkstemps(char *, int)
{
} /* size: 0 */

// <053E7F76> ../public/tier0/tier0_stdlib.h:177
float V_acosf(float)
{
} /* size: 0 */

// <05998BC2> ../public/tier0/tier0_stdlib.h:179
float V_asinf(float)
{
} /* size: 0 */

// <05998A3F> ../public/tier0/tier0_stdlib.h:181
float V_atanf(float)
{
} /* size: 0 */

// <026B3D7C> ../public/tier0/tier0_stdlib.h:183
float V_atan2f(float, float)
{
} /* size: 0 */

// <009DC048> ../public/tier0/tier0_stdlib.h:185
float V_cosf(float)
{
} /* size: 0 */

// <03E744A6> ../public/tier0/tier0_stdlib.h:189
float V_expf(float)
{
} /* size: 0 */

// <03A49E89> ../public/tier0/tier0_stdlib.h:191
float V_exp2f(float)
{
} /* size: 0 */

// <02492FC0> ../public/tier0/tier0_stdlib.h:193
float V_fmodf(float, float)
{
} /* size: 0 */

// <0554460F> ../public/tier0/tier0_stdlib.h:194
int V_fpclassifyd(double)
{
} /* size: 0 */

// <00B99874> ../public/tier0/tier0_stdlib.h:196
float V_frexpf(float, int *)
{
} /* size: 0 */

// <01FA7D50> ../public/tier0/tier0_stdlib.h:199
int V_isnand(double)
{
} /* size: 0 */

// <03E744BE> ../public/tier0/tier0_stdlib.h:205
float V_logf(float)
{
} /* size: 0 */

// <0278EA9E> ../public/tier0/tier0_stdlib.h:207
float V_log2f(float)
{
} /* size: 0 */

// <007CD72F> ../public/tier0/tier0_stdlib.h:208
uint32 V_log2_uint(unsigned int)
{
} /* size: 0 */

// <06A599AE> ../public/tier0/tier0_stdlib.h:210
float V_log10f(float)
{
} /* size: 0 */

// <046C23A9> ../public/tier0/tier0_stdlib.h:213
double V_powd(double, double)
{
} /* size: 0 */

// <02493054> ../public/tier0/tier0_stdlib.h:214
float V_powf(float, float)
{
} /* size: 0 */

// <008BF68A> ../public/tier0/tier0_stdlib.h:218
float V_roundf(float)
{
} /* size: 0 */

// <0278EA48> ../public/tier0/tier0_stdlib.h:219
double V_sind(double)
{
} /* size: 0 */

// <0311A6C0> ../public/tier0/tier0_stdlib.h:221
void V_sincosf(float, float *, float *)
{
} /* size: 0 */

// <009DC062> ../public/tier0/tier0_stdlib.h:222
float V_sinf(float)
{
} /* size: 0 */

// <06D99FB6> ../../public/tier0/tier0_stdlib.h:224
float V_sinhf(float)
{
} /* size: 0 */

// <0249308A> ../public/tier0/tier0_stdlib.h:225
double V_tand(double)
{
} /* size: 0 */

// <02C2340B> ../public/tier0/tier0_stdlib.h:226
float V_tanf(float)
{
} /* size: 0 */

// <00128A88> ../public/tier0/tier0_stdlib.h:232
int V_atoi(const char *)
{
} /* size: 0 */

// <004A710E> ../public/tier0/tier0_stdlib.h:236
int V_snprintf(char *, int, const char *, ...)
{
} /* size: 0 */

// <007E9B43> ../public/tier0/tier0_stdlib.h:238
int V_sscanf(const char *, const char *, ...)
{
} /* size: 0 */

// <002015BA> ../public/tier0/tier0_stdlib.h:239
int V_swscanf(const wchar_t *, const wchar_t *, ...)
{
} /* size: 0 */

