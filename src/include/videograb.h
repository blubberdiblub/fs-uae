
bool initvideograb(const TCHAR *filename);
void uninitvideograb(void);
bool getvideograb(long **buffer, int *width, int *height);
void pausevideograb(bool pause);