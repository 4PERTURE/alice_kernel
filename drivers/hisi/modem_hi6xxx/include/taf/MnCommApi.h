/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : MnCommApi.h
  版 本 号   : 初稿
  作    者   : o00132663
  生成日期   : 2011年10月5日
  最近修改   :
  功能描述   : MnCommApi.c 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2011年10月5日
    作    者   : o00132663
    修改内容   : 创建文件

******************************************************************************/

#ifndef __MNCOMMAPI_H__
#define __MNCOMMAPI_H__

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/

#include "vos.h"
#include "pslog.h"
#include "TafTypeDef.h"

#include "AtMnInterface.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/


/*****************************************************************************
  3 枚举定义
*****************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/



/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/

/*获取APP REQ消息头长度*/
VOS_UINT32  MN_GetAppReqMsgLen(
    VOS_UINT32 ulParaLen,
    VOS_UINT32 *pulMsgLen
);

/*填充APP REQ消息头*/
VOS_UINT32  MN_FillAppReqMsgHeader(
    MN_APP_REQ_MSG_STRU                 *pMsg,
    MN_CLIENT_ID_T                      ClientId,
    MN_OPERATION_ID_T                   OpId,
    VOS_UINT16                          usMsgType,
    VOS_UINT32                          ulReceiverPid
 );

/*填充APP REQ消息参数部分*/
VOS_UINT32  MN_FillAppReqMsgPara(
    VOS_VOID                            *pSndMsgPara,
    VOS_VOID                            *pPara,
    VOS_UINT32                          ulLen
);

/*填充APP REQ消息并发送*/
VOS_UINT32  MN_FillAndSndAppReqMsg(
    MN_CLIENT_ID_T                      ClientId,
    MN_OPERATION_ID_T                   OpId,
    VOS_UINT16                          usMsgType,
    VOS_VOID                            *pPara,
    VOS_UINT32                          ulParaLen,
    VOS_UINT32                          ulReceiverPid
);








#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of MnCommApi.h */
