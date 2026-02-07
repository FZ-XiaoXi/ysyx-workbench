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
  char c;
  char ds[20]={0};
  while(*fmt){
    if(*fmt=='%'){
      int width=0,ifZero=0;
      fmt++;
      if(*fmt=='0'&&*(fmt+1)>='0'&&*(fmt+1)<='9'){
        ifZero=1;
        fmt++;
      	width=atoi(fmt);
        int count=0;
        for(int i=width;i>0;i/=10,count++);
        fmt+=count;
      }else if(*fmt=='0'){
        width=0;
				fmt++;
      }
      switch(*fmt){
        case 'd':
        case 'x':
          itoa(va_arg(ap, int),ds,(*fmt=='x')?16:10);
					int len=strlen(ds);
					if(width<=len){
						int i=0;
						while(ds[i]!='\0') *(out++)=ds[i++];
            if(len==0) *(out++)='0';
					}else{
						for(int i=0;i<width-len;i++)
							if(ifZero) 	*(out++)='0';
							else 				*(out++)=' ';
						int i=0;
						while(ds[i]!='\0') *(out++)=ds[i++];
					}
          break;
        case 's':
          s=va_arg(ap,char *);
          while(*s!='\0') *(out++)=*(s++);
          break;
        case 'c':
          c=va_arg(ap,int);
          *(out++)=(char)c;
          break;
        default:
          putch(*((char*)fmt-1));putch('/');putch(*fmt);putch('/');putch(*((char*)fmt+1));
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
