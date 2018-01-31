void* memmove(void *dest, const void *src, size_t count)
{
  char *d_ptr, *s_ptr;
  int delta;
  if(dest < src)
  {
      d_ptr = (char*)dest;
      s_ptr = (char*)src;
      delta = 1;
  }
  else if(dest > src)
  {
      d_ptr = (char*)dest + count - 1;
      s_ptr = (char*)src + count - 1;
      delta = -1;
  }
  else
  {
      return dest;
  }

  for(int i=0;i<count;++i)
  {
      *d_ptr = *sptr;
      d_ptr+=delta;
      s_ptr+=delta;
  }
  return dest;
}
