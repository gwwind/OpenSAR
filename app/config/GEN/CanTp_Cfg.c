/*
* Configuration of module: CanTp
*
* Created by:   parai          
* Copyright:    (C)parai@foxmail.com  
*
* Configured for (MCU):    MinGW ...
*
* Module vendor:           ArcCore
* Generator version:       2.0.34
*
* Generated by easySAR Studio (https://github.com/parai/OpenSAR)
*/
#include "CanTp.h"
#if defined(USE_CANIF)
#include "CanIf.h"
#endif
#if defined(USE_PDUR)
#include "PduR.h"
#endif

const CanTp_GeneralType CanTpGeneralConfig =
{
    .main_function_period =  10,
};
//NSa TODO:
const CanTp_NSaType CanTpNSaConfig =
{
    .CanTpNSa =  0,
};

const CanTp_NTaType CanTpNTaConfig =
{
    .CanTpNTa =  0,
};

const CanTp_NSduType CanTpNSduConfigList[] =
{

    {
        .direction =  ISO15765_RECEIVE,
        .listItemType =  CANTP_NOT_LAST_ENTRY,
        .configData.CanTpRxNSdu.CanTp_FcPduId =  CANTP_ID_RxDiagP2P,
        .configData.CanTpRxNSdu.CanIf_FcPduId =  CANIF_ID_TxDiagP2P,
        .configData.CanTpRxNSdu.PduR_PduId =  PDUR_ID_RxDiagP2P,
        .configData.CanTpRxNSdu.CanTpAddressingFormant =  CANTP_STANDARD,
        .configData.CanTpRxNSdu.CanTpBs =   8,
        .configData.CanTpRxNSdu.CanTpNar =  1,
        .configData.CanTpRxNSdu.CanTpNbr =  100,
        .configData.CanTpRxNSdu.CanTpNcr =  1,
        .configData.CanTpRxNSdu.CanTpRxChannel =  CANTP_ID_RxDiagP2P,
        .configData.CanTpRxNSdu.CanTpRxDI =  8,
        .configData.CanTpRxNSdu.CanTpRxPaddingActivation =  CANTP_ON,
        .configData.CanTpRxNSdu.CanTpRxTaType =  CANTP_PHYSICAL,
        .configData.CanTpRxNSdu.CanTpWftMax =  10,
        .configData.CanTpRxNSdu.CanTpSTmin  =  1,
        .configData.CanTpRxNSdu.CanTpNSa =  &CanTpNSaConfig,
        .configData.CanTpRxNSdu.CanTpNTa =  &CanTpNTaConfig,
    },

    {
        .direction =  ISO15765_RECEIVE,
        .listItemType =  CANTP_NOT_LAST_ENTRY,
        .configData.CanTpRxNSdu.CanTp_FcPduId =  CANTP_ID_RxDiagP2A,
        .configData.CanTpRxNSdu.CanIf_FcPduId =  CANIF_ID_TxDiagP2A,
        .configData.CanTpRxNSdu.PduR_PduId =  PDUR_ID_RxDiagP2A,
        .configData.CanTpRxNSdu.CanTpAddressingFormant =  CANTP_STANDARD,
        .configData.CanTpRxNSdu.CanTpBs =   8,
        .configData.CanTpRxNSdu.CanTpNar =  1,
        .configData.CanTpRxNSdu.CanTpNbr =  100,
        .configData.CanTpRxNSdu.CanTpNcr =  1,
        .configData.CanTpRxNSdu.CanTpRxChannel =  CANTP_ID_RxDiagP2A,
        .configData.CanTpRxNSdu.CanTpRxDI =  8,
        .configData.CanTpRxNSdu.CanTpRxPaddingActivation =  CANTP_ON,
        .configData.CanTpRxNSdu.CanTpRxTaType =  CANTP_PHYSICAL,
        .configData.CanTpRxNSdu.CanTpWftMax =  10,
        .configData.CanTpRxNSdu.CanTpSTmin  =  1,
        .configData.CanTpRxNSdu.CanTpNSa =  &CanTpNSaConfig,
        .configData.CanTpRxNSdu.CanTpNTa =  &CanTpNTaConfig,
    },

    {
        .direction =  IS015765_TRANSMIT,
        .listItemType =  CANTP_NOT_LAST_ENTRY,
        .configData.CanTpTxNSdu.CanTp_FcPduId =  CANTP_ID_RxDiagP2P,
        .configData.CanTpTxNSdu.CanIf_PduId   =  CANIF_ID_TxDiagP2P,
        .configData.CanTpTxNSdu.PduR_PduId =  PDUR_ID2_TxDiagP2P,
        .configData.CanTpTxNSdu.CanTpAddressingMode =  CANTP_STANDARD,
        .configData.CanTpTxNSdu.CanTpNas =  1,
        .configData.CanTpTxNSdu.CanTpNbs =  100,
        .configData.CanTpTxNSdu.CanTpNcs =  1,
        .configData.CanTpTxNSdu.CanTpTxChannel =  CANTP_ID_TxDiagP2P,
        .configData.CanTpTxNSdu.CanTpTxDI =  8,
        .configData.CanTpTxNSdu.CanTpTxPaddingActivation =  CANTP_ON,
        .configData.CanTpTxNSdu.CanTpTxTaType =  CANTP_PHYSICAL,
        .configData.CanTpTxNSdu.CanTpNSa =  &CanTpNSaConfig,
        .configData.CanTpTxNSdu.CanTpNTa =  &CanTpNTaConfig,
    },

    {
        .direction =  IS015765_TRANSMIT,
        .listItemType =  CANTP_NOT_LAST_ENTRY,
        .configData.CanTpTxNSdu.CanTp_FcPduId =  CANTP_ID_RxDiagP2A,
        .configData.CanTpTxNSdu.CanIf_PduId   =  CANIF_ID_TxDiagP2A,
        .configData.CanTpTxNSdu.PduR_PduId =  PDUR_ID2_TxDiagP2A,
        .configData.CanTpTxNSdu.CanTpAddressingMode =  CANTP_STANDARD,
        .configData.CanTpTxNSdu.CanTpNas =  1,
        .configData.CanTpTxNSdu.CanTpNbs =  100,
        .configData.CanTpTxNSdu.CanTpNcs =  1,
        .configData.CanTpTxNSdu.CanTpTxChannel =  CANTP_ID_TxDiagP2A,
        .configData.CanTpTxNSdu.CanTpTxDI =  8,
        .configData.CanTpTxNSdu.CanTpTxPaddingActivation =  CANTP_ON,
        .configData.CanTpTxNSdu.CanTpTxTaType =  CANTP_PHYSICAL,
        .configData.CanTpTxNSdu.CanTpNSa =  &CanTpNSaConfig,
        .configData.CanTpTxNSdu.CanTpNTa =  &CanTpNTaConfig,
    },
};

const CanTp_RxIdType CanTp_RxIdList[] = 
{

    {
        .CanTpAddressingMode =  CANTP_STANDARD,
        .CanTpNSduIndex =  CANTP_ID_RxDiagP2P,
        .CanTpReferringTxIndex =  CANTP_ID_TxDiagP2P,
    },

    {
        .CanTpAddressingMode =  CANTP_STANDARD,
        .CanTpNSduIndex =  CANTP_ID_RxDiagP2A,
        .CanTpReferringTxIndex =  CANTP_ID_TxDiagP2A,
    },

    {
        .CanTpAddressingMode =  CANTP_STANDARD,
        .CanTpNSduIndex =  CANTP_ID_TxDiagP2P,
        .CanTpReferringTxIndex =  CANTP_ID_RxDiagP2P,
    },

    {
        .CanTpAddressingMode =  CANTP_STANDARD,
        .CanTpNSduIndex =  CANTP_ID_TxDiagP2A,
        .CanTpReferringTxIndex =  CANTP_ID_RxDiagP2A,
    },
};

const CanTp_ConfigType CanTpConfig =
{
    .CanTpGeneral     =      &CanTpGeneralConfig,
    .CanTpNSduList =     CanTpNSduConfigList,
    .CanTpRxIdList =    CanTp_RxIdList
};

