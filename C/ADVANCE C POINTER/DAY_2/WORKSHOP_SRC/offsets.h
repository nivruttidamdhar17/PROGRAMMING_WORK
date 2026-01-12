#ifndef _OFFSET_H 
#define _OFFSET_H 

#ifndef OFFSET_OF
#define OFFSET_OF(type, mem)   ((unsigned long long int)(&((type*)0)->mem))
#endif 

#endif /* _OFFSET_H */