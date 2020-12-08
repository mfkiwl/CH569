

#ifndef USER_USB30_DESC_H_
#define USER_USB30_DESC_H_
#include "CH56xUSB30_LIB.H"
#include <stdio.h>
#include <string.h>
#define SIZE_DEVICE_DESC      		 18
#define SIZE_CONFIG_DESC       		 200
#define SIZE_STRING_LANGID     		 4
#define SIZE_STRING_VENDOR     	     8
#define SIZE_STRING_PRODUCT    	     38
#define SIZE_STRING_SERIAL      	 22

#define SIZE_BOS_DESC      			 22
#define SIZE_STRING_OS      		 18

#define SIZE_PropertyHeader			 0x8E
#define SIZE_CompactId				 0x28
#define SIZE_MSOS20DescriptorSet     72
#define SIZE_GetStatus				 2

/************************Various Descriptions*******************************/
extern const UINT8 DeviceDescriptor[SIZE_DEVICE_DESC];
extern const UINT8 ConfigDescriptor[SIZE_CONFIG_DESC];
extern const UINT8 OSStringDescriptor[SIZE_STRING_OS];
extern const UINT8 BOSDescriptor[SIZE_BOS_DESC];
extern const UINT8 StringLangID [SIZE_STRING_LANGID];
extern const UINT8 StringVendor [SIZE_STRING_VENDOR];
extern const UINT8 StringProduct[SIZE_STRING_PRODUCT];
extern UINT8 StringSerial [SIZE_STRING_SERIAL];
extern UINT8 GetStatus[SIZE_GetStatus];
extern const UINT8 PropertyHeader[SIZE_PropertyHeader];
extern const UINT8 CompactId[SIZE_CompactId];
extern const UINT8 MSOS20DescriptorSet[SIZE_MSOS20DescriptorSet];

#endif /* USER_USB30_DESC_H_ */


