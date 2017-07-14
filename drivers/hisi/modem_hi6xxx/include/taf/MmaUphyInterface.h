/******************************************************************************

                  版权所有 (C), 2001-2013, 华为技术有限公司

 ******************************************************************************
  文 件 名   : MmaUphyInterface.h
  版 本 号   : 初稿
  作    者   : h00246512
  生成日期   : 2014年2月14日
  最近修改   :
  功能描述   : MMA与物理层UPHY模块之间的接口头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2014年2月14日
    作    者   : h00246512
    修改内容   : 创建文件

******************************************************************************/

#ifndef __MMAUPHYINTERFACE_H__
#define __MMAUPHYINTERFACE_H__

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"

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
枚举名    : MMA_UPHY_MSG_ID_ENUM
结构说明  : MMA与UPHY间消息名枚举

  1.日    期   : 2014年02月14日
    作    者   : h00246512
    修改内容   : DSDS项目新增接口
*****************************************************************************/
enum MMA_UPHY_MSG_ID_ENUM
{
    ID_UPHY_MMA_INIT_STATUS_IND                             = 0x1001,           /* _H2ASN_MsgChoice UPHY_MMA_INIT_STATUS_IND_STRU */

    ID_MMA_UPHY_MSG_ID_BUTT
};
typedef VOS_UINT32  MMA_UPHY_MSG_ID_ENUM_UINT16;

/*****************************************************************************
枚举名    : MMA_UPHY_INIT_STATUS_ENUM
结构说明  : MMA收到UPHY初始化状态枚举

  1.日    期   : 2014年02月14日
    作    者   : h00246512
    修改内容   : DSDS项目新增接口
*****************************************************************************/
enum MMA_UPHY_INIT_STATUS_ENUM
{
    MMA_UPHY_INIT_STATUS_SUCCESS,
    MMA_UPHY_INIT_STATUS_FAIL,
    MMA_UPHY_INIT_STATUS_BUTT
};
typedef VOS_UINT16  MMA_UPHY_INIT_STATUS_ENUM_UINT16;


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/

/*****************************************************************************
  5 消息头定义
*****************************************************************************/
#define MMA_UPHY_MSG_HEADER      VOS_MSG_HEADER \
                                    VOS_UINT16  usMsgID; \
                                    VOS_UINT16  ausReserved[1];

/*****************************************************************************
  6 消息定义
*****************************************************************************/

/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/
/*******************************************************************************
结构名    : MMA_UPHY_INIT_STATUS_IND_STRU
结构说明  : ID_UPHY_MMA_INIT_STATUS_IND的消息结构
1.日    期   : 2014年1月5日
  作    者   : z00161729
  修改内容   : 新建
*******************************************************************************/
typedef struct
{
    MMA_UPHY_MSG_HEADER                                                         /*_H2ASN_Skip*/
    MMA_UPHY_INIT_STATUS_ENUM_UINT16    enInitStatus;                           /* 物理层初始化状态 */
    VOS_UINT16                          ausReserved1[1];                        /*保留位*/
} UPHY_MMA_INIT_STATUS_IND_STRU;

/*****************************************************************************
  8 UNION定义
*****************************************************************************/

/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/
/*****************************************************************************
  H2ASN顶级消息结构定义
*****************************************************************************/
typedef struct
{
    MMA_UPHY_MSG_ID_ENUM_UINT16         enMsgId;                    /*_H2ASN_MsgChoice_Export MTA_PHY_MSG_TYPE_ENUM_UINT16*/
    VOS_UINT16                          usRsv;                      /* ??? */
    VOS_UINT16                          ausMsgBlock[2];
    /***************************************************************************
        _H2ASN_MsgChoice_When_Comment          MTA_PHY_MSG_TYPE_ENUM_UINT16
    ****************************************************************************/
}MMA_PHY_MSG_DATA;
/*_H2ASN_Length UINT32*/

typedef struct
{
    VOS_MSG_HEADER
    MMA_PHY_MSG_DATA                    stMsgData;
}MmaPhyInterface_MSG;


/*****************************************************************************
  10 函数声明
*****************************************************************************/



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

#endif /* end of MtcComm.h */

