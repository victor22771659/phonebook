#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "phonebook.h"

/* optimal version 1 */
lastNameEntry *findNameOptimal(char lastName[], lastNameEntry *pHead)
{
    while (pHead != NULL) {
        if (strcasecmp(lastName, pHead->lastName) == 0){
            printf(" %12s  is found!\n", lastName);
            return pHead;
        }
        pHead = pHead->pNext;
    }
    printf(" %12s  is found!\n", lastName);
    return NULL;
}

lastNameEntry *appendOptimal(char lastName[], lastNameEntry *lne)
{
    /* allocate memory for the new entry and put lastName in it.*/
    lne->pNext = (lastNameEntry *) malloc(sizeof(lastNameEntry));
    lne = lne->pNext;
    strcpy(lne->lastName, lastName);
    lne->pNext = NULL;

    return lne;
}
