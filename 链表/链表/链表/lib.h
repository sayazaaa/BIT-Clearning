//
//  lib.h
//  链表
//
//  Created by saya on 2022/11/21.
//

#ifndef lib_h
#define lib_h

typedef struct list {
    int a;
    struct list *next;
}NODE;
typedef NODE *PNODE;
typedef struct head {
    int a;
    struct list *next;
}HEADNODE;
typedef HEADNODE *PHEADNODE;
#endif /* lib_h */
