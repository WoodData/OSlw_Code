/*(Ver.=0.93)
 * OSLW_communication.c
 *
 *  Created on: 2017-7-26
 *      Author: slw
 */

#include "OSLW_include.h"


#if OSLW_TASK_COMMUN_ENABLE

OSlwTaskSTU OSlwInlineTaskCommun,*pta_Commun=&OSlwInlineTaskCommun;


OSlwGiftUnitSTU *qgu_Commun;
OSlwGiftReceiveSTU *pgr_Commun;
//OSlwModBusSTU *qc_Commun;
//OSlwParaCmdSTU *pcmd_Commun;
lw_u8 *arr_Commun;
lw_8 id_Commun,n_Commun;


void OSlwInlineTaskCommunExe(OSlwTaskSTU *pta_)
{

//	pgr_Commun=&(pta_Commun->Concierge.giftR);
//	qc_Commun=& (pta_Commun->pOS->Comm[0]);
//
//	OSLW_TASK_LOOP(pta_Commun)//循环开始
//	{
//		OSlwGiftReceiveWait(pta_Commun);
//		do
//		{
//			qgu_Commun=pgr_Commun->pHead->pGU;
//			qc_Commun->pTxHead=qc_Commun->pTxTail;
//			arr_Commun=qgu_Commun->PrivateUnit.ComCmd.RxD;
//			if(arr_Commun[0]==qc_Commun->Address && ((id_Commun=OSlwGiftTransmitIdleIndex(&pta_Commun->Concierge.giftT))!=(lw_8)-1))
//			{
//				qc_Commun=&(pta_Commun->pOS->Comm[qgu_Commun->PrivateUnit.ComCmd.ComID]);
//				*(qc_Commun->pTxTail)++=qc_Commun->Address;
//				switch(arr_Commun[1])
//				{

//				case 3:
//					*(qc_Commun->pTxTail)++=3;
//					*(qc_Commun->pTxTail)++=(MODBUS_CONNECT_UINT8_TO_UINT16(arr_Commun[4],arr_Commun[5]))*OSLW_PARA_NORMAL_LENGTH;

//					pcmd_Commun=&(pta_Commun->Concierge.GiftList[id_Commun].PrivateUnit.ParaCmd);

//					pcmd_Commun->ListID=1;
//					pcmd_Commun->ID=(MODBUS_CONNECT_UINT8_TO_UINT16(arr_Commun[2],arr_Commun[3]));
//					pcmd_Commun->aim=0;
//					pcmd_Commun->cmd=ParaCmd_GetDataMore;

//					pta_Commun->Concierge.GiftList[id_Commun].ExternUnit.Data=(MODBUS_CONNECT_UINT8_TO_UINT16(arr_Commun[4],arr_Commun[5]));
//					pta_Commun->Concierge.GiftList[id_Commun].ExternUnit.pData=(void *)(qc_Commun->pTxTail);

//					break;

//				case 4:
//					*(qc_Commun->pTxTail)++=4;
//					*(qc_Commun->pTxTail)++=(MODBUS_CONNECT_UINT8_TO_UINT16(arr_Commun[4],arr_Commun[5]))*OSLW_PARA_NORMAL_LENGTH;

//					pcmd_Commun=&(pta_Commun->Concierge.GiftList[id_Commun].PrivateUnit.ParaCmd);

//					pcmd_Commun->ListID=0;
//					pcmd_Commun->ID=(MODBUS_CONNECT_UINT8_TO_UINT16(arr_Commun[2],arr_Commun[3]));
//					pcmd_Commun->aim=0;
//					pcmd_Commun->cmd=ParaCmd_GetDataMore;

//					pta_Commun->Concierge.GiftList[id_Commun].ExternUnit.Data=(MODBUS_CONNECT_UINT8_TO_UINT16(arr_Commun[4],arr_Commun[5]));
//					pta_Commun->Concierge.GiftList[id_Commun].ExternUnit.pData=(void *)(qc_Commun->pTxTail);

//					break;

//				case 6:

//					pcmd_Commun=&(pta_Commun->Concierge.GiftList[id_Commun].PrivateUnit.ParaCmd);

//					pcmd_Commun->ListID=1;
//					pcmd_Commun->ID=(MODBUS_CONNECT_UINT8_TO_UINT16(arr_Commun[2],arr_Commun[3]));
//					pcmd_Commun->aim=0;
//					pcmd_Commun->cmd=ParaCmd_SetNormal;


//					arr_Commun+=1;
//					n_Commun=5;
//					OSLW_TOOL_MEMCPY(qc_Commun->pTxTail,arr_Commun,n_Commun);

//					arr_Commun=pta_Commun->Concierge.GiftList[id_Commun].PrivateUnit.ParaCmd.data.para_arr;
//#if OSLW_PARA_NORMAL_LENGTH >= 4
//					*arr_Commun++ = *(qc_Commun->pTxTail-4);
//#endif
//#if OSLW_PARA_NORMAL_LENGTH >= 3
//					*arr_Commun++ = *(qc_Commun->pTxTail-3);
//#endif
//#if OSLW_PARA_NORMAL_LENGTH >= 2
//					*arr_Commun++ = *(qc_Commun->pTxTail-2);
//#endif
//#if OSLW_PARA_NORMAL_LENGTH >= 1
//					*arr_Commun++ = *(qc_Commun->pTxTail-1);
//#endif
//					break;
//
//				default:
//					break;
//				}
//
//				OSlwTaskGiftTransmit(pta_Commun,pta_Commun->pOS->pTaskList[1],id_Commun,&(pta_Commun->Concierge.GiftList[id_Commun]),GiftPostmanStatus_Return);
//		//		qc_Commun->pTxTail+=*(qc_Commun->pTxTail - 1);
//
//		//		pta_Commun->pOS->pta_CommunskList[1]->TaskStatus=pta_Commun->pOS->pta_CommunskList[1]->TaskStatus==
//		//		OSlwTaskStatus_Wait_ForGiftReceive?OSlwTaskStatus_Ready:OSlwTaskStatus_Wait_ForGiftReceive;
//
//				OSlwGiftTransmitWait(pta_Commun);
//			}
//			else;
//

//			qc_Commun->pTxTail+=qc_Commun->pTxHead[2];
//			qc_Commun->TxReadyFun(qc_Commun);
//			qc_Commun->TxLength+=qc_Commun->pTxHead[2]+3+2;
//			OSlwCommunTransmit(qc_Commun);
//
//			pgr_Commun->pHead->Status=pgr_Commun->pHead->Method;
//
//		}while(pgr_Commun->MoveNextFun(pgr_Commun));

//		//qc_Commun->pTxTail=qc_Commun->TxList;
//	}

}


void OSlwModBusCallBack(OSlwCoreSTU *pOS,lw_u8 ComID,lw_u8 *pdata,lw_u16 len)
{
//
//	OSlwGiftPostmanSTU *p;
//	OSlwCommunSTU *q=& (pOS->Comm[ComID]);
//	lw_8 inID;
//
//	OSLW_assert(!pOS);
//	OSLW_assert(!pdata);
//
//	q->ComRX.AppendFun( & (q->ComRX),pdata,sizeof(lw_u8)*len);
//
//	if(q->isReadyFun(q))
//	{
//		q->ComRX.MDataLockFlag=1;
//		inID=OSlwGiftTransmitIdleIndex(&q->giftT);
//		if(inID!=(lw_8)-1)
//		{
//			p=&(q->giftT.PostmanList[inID]);//取得快递员
//
//			q->GiftList[inID].PrivateUnit.ComCmd.ComID=ComID;
//
//			memcpy(q->GiftList[inID].PrivateUnit.ComCmd.RxD,q->RxList,sizeof(lw_u8)*OSLW_COMMUN_RX_LENGTH);
//
//			p->pGU=&(q->GiftList[inID]);//带上礼物
//
//			p->Method=GiftPostmanStatus_Received;//告诉他模式
//
//			OSlwGiftReceiveAppend(& (pOS->pTaskList[2]->Concierge.giftR) ,p);
//		}
//		q->ComRX.MDataLockFlag=0;
//
//	}
}


/*(Ver.=0.93)
lw_8 OSlwModBusIsReady(void *pcom)
{


	lw_u32 crcnum=MODBUS_CONNECT_UINT8_TO_UINT16(pcom->RxList[OSLW_COMMUN_RX_LENGTH-2],pcom->RxList[OSLW_COMMUN_RX_LENGTH-1]);

	OSLW_assert(!pcom);
	if(CRC16(pcom->RxList,OSLW_COMMUN_RX_LENGTH-2)==crcnum)
	{
		return 1;
	}

	return 0;

}

void OSlwModBusTxReady(void *pcom)
{

	lw_u16 crcnum=CRC16(pcom->pTxHead,pcom->pTxHead[2]+3);
	*(pcom->pTxTail)++=(crcnum>>8)&0x00ff;
	*(pcom->pTxTail)++=(crcnum>>0)&0x00ff;

}

*/
const lw_u8 auchCRCHi[] = {
    0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0,
    0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
    0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0,
    0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40,
    0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1,
    0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41,
    0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1,
    0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
    0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0,
    0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40,
    0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1,
    0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40,
    0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0,
    0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40,
    0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0,
    0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40,
    0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0,
    0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
    0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0,
    0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
    0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0,
    0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40,
    0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1,
    0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
    0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0,
    0x80, 0x41, 0x00, 0xC1, 0x81, 0x40
} ;

// CRC 低位字节值表
const lw_u8 auchCRCLo[] = {
    0x00, 0xC0, 0xC1, 0x01, 0xC3, 0x03, 0x02, 0xC2, 0xC6, 0x06,
    0x07, 0xC7, 0x05, 0xC5, 0xC4, 0x04, 0xCC, 0x0C, 0x0D, 0xCD,
    0x0F, 0xCF, 0xCE, 0x0E, 0x0A, 0xCA, 0xCB, 0x0B, 0xC9, 0x09,
    0x08, 0xC8, 0xD8, 0x18, 0x19, 0xD9, 0x1B, 0xDB, 0xDA, 0x1A,
    0x1E, 0xDE, 0xDF, 0x1F, 0xDD, 0x1D, 0x1C, 0xDC, 0x14, 0xD4,
    0xD5, 0x15, 0xD7, 0x17, 0x16, 0xD6, 0xD2, 0x12, 0x13, 0xD3,
    0x11, 0xD1, 0xD0, 0x10, 0xF0, 0x30, 0x31, 0xF1, 0x33, 0xF3,
    0xF2, 0x32, 0x36, 0xF6, 0xF7, 0x37, 0xF5, 0x35, 0x34, 0xF4,
    0x3C, 0xFC, 0xFD, 0x3D, 0xFF, 0x3F, 0x3E, 0xFE, 0xFA, 0x3A,
    0x3B, 0xFB, 0x39, 0xF9, 0xF8, 0x38, 0x28, 0xE8, 0xE9, 0x29,
    0xEB, 0x2B, 0x2A, 0xEA, 0xEE, 0x2E, 0x2F, 0xEF, 0x2D, 0xED,
    0xEC, 0x2C, 0xE4, 0x24, 0x25, 0xE5, 0x27, 0xE7, 0xE6, 0x26,
    0x22, 0xE2, 0xE3, 0x23, 0xE1, 0x21, 0x20, 0xE0, 0xA0, 0x60,
    0x61, 0xA1, 0x63, 0xA3, 0xA2, 0x62, 0x66, 0xA6, 0xA7, 0x67,
    0xA5, 0x65, 0x64, 0xA4, 0x6C, 0xAC, 0xAD, 0x6D, 0xAF, 0x6F,
    0x6E, 0xAE, 0xAA, 0x6A, 0x6B, 0xAB, 0x69, 0xA9, 0xA8, 0x68,
    0x78, 0xB8, 0xB9, 0x79, 0xBB, 0x7B, 0x7A, 0xBA, 0xBE, 0x7E,
    0x7F, 0xBF, 0x7D, 0xBD, 0xBC, 0x7C, 0xB4, 0x74, 0x75, 0xB5,
    0x77, 0xB7, 0xB6, 0x76, 0x72, 0xB2, 0xB3, 0x73, 0xB1, 0x71,
    0x70, 0xB0, 0x50, 0x90, 0x91, 0x51, 0x93, 0x53, 0x52, 0x92,
    0x96, 0x56, 0x57, 0x97, 0x55, 0x95, 0x94, 0x54, 0x9C, 0x5C,
    0x5D, 0x9D, 0x5F, 0x9F, 0x9E, 0x5E, 0x5A, 0x9A, 0x9B, 0x5B,
    0x99, 0x59, 0x58, 0x98, 0x88, 0x48, 0x49, 0x89, 0x4B, 0x8B,
    0x8A, 0x4A, 0x4E, 0x8E, 0x8F, 0x4F, 0x8D, 0x4D, 0x4C, 0x8C,
    0x44, 0x84, 0x85, 0x45, 0x87, 0x47, 0x46, 0x86, 0x82, 0x42,
    0x43, 0x83, 0x41, 0x81, 0x80, 0x40
};


lw_u16 CRC16(lw_u8 *puchMsg, lw_u16 usDataLen) 	           // CRC 生成函数
{
    lw_u8 uchCRCHi = 0xFF ;                                // 高 CRC 字节初始化
    lw_u8 uchCRCLo = 0xFF ;                                // 低 CRC 字节初始化
    lw_u32 uIndex ;                                        // CRC 循环中的索引
    while (usDataLen--)                                    // 传输消息缓冲区
    {
        uIndex = uchCRCHi ^ *puchMsg++ ;                   // 计算CRC
        uchCRCHi = uchCRCLo ^ auchCRCHi[uIndex] ;
        uchCRCLo = auchCRCLo[uIndex] ;
    }

    return (uchCRCHi << 8 | uchCRCLo) ;                    // 返回 CRC 校验数值
}

#endif

