
#include<stdio.h>
#include<string.h>

#define isspace(c) (c == ' ')
int main()
{

char group[100] ;
strcpy(group, "groupname = Administrator,Network,test,admin,");
function_test(group);
}
int function_test(char * pGroupName)
{
	char *pTemp = NULL;
	char u1GroupName[100];
 //trim ending comma
        pTemp =  pGroupName + strlen(pGroupName)-1;
        while(*pTemp == ','){
            *pTemp = '\0';
            pTemp--;
        }
		printf("\n pTemp = %s", pTemp);
        pGroupName += sizeof("groupname");
        printf("\n pgroupName = %s", pGroupName);
        while(isspace(*pGroupName)) pGroupName++;
		printf("\n pgroupName = %s", pGroupName);
        while (strstr(pGroupName, ",")>0)
        {
            memset(&u1GroupName, 0, sizeof(u1GroupName));
            sscanf(pGroupName, "%[^','],%s", u1GroupName, pGroupName);
            printf("\n pgroupName = %s", pGroupName);
        }
        if (strlen
		(pGroupName)>0)
        {
            memset(&u1GroupName, 0, sizeof(u1GroupName));
            sscanf(u1GroupName, pGroupName);
            printf("\n pgroupName 2 = %s", pGroupName);
          
        }
        
        
}
