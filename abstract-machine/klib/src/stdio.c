#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  char buf[1024];
  va_list ap;
  va_start(ap,fmt);
  int n=vsprintf(buf,fmt,ap);
  va_end(ap);
  for(int j=0;j<n;j++) putch(buf[j]);
  return n;
  //panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  //panic("Not implemented");
  char *nout = out;
  char *s;
  char ds[20]={0};
  while(*fmt){
    if(*fmt=='%'){
      fmt++;
      switch(*fmt){
        case 'd':
          itoa(va_arg(ap, int),ds,10);
          int i=0;
          while(ds[i]!='\0') *(out++)=ds[i++];
          break;
        case 's':
          s=va_arg(ap,char *);
          while(*s!='\0') *(out++)=*(s++);
          break;
        default:
          panic("Error ARGUMENT");
      }
      fmt++;
    }else if(*fmt=='\\'){
      fmt++;
      switch(*fmt){
        case '\\':
          *(out++)='\\';
          break;
        case 'n':
          *(out++)='\n';
          break;
        default:
          panic("Error ARGUMENT");
      }
      fmt++;
    }else{
      *(out++)=*(fmt++);
    }
  }
  *out='\0';
  return out-nout;
}

int sprintf(char *out, const char *fmt, ...) {
  //panic("Not implemented");
  va_list ap;
  va_start(ap,fmt);
  int s= vsprintf(out,fmt,ap);
  va_end(ap);
  return s;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
