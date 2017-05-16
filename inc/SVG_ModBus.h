//###########################################################################
//--------------------------------------------------------------------------
// FILE:Constant.h
// DESCRIPTION:
//         including those constants used in the 1140V SVG system
//--------------------------------------------------------------------------
// Author: Chao  Zhang
// Date: Dec  15, 2015
// Target System: DSP F28335 +��FPGA
// Version: V1.1	LI Shuzhen
//--------------------------------------------------------------------------
//###########################################################################
#ifndef SVG_MODBUS_H
#define SVG_MODBUS_H

#include "SVG_Variable.h"
#include "SVG_Constant.h"
#include "SVG_EEPROM.h"

//--------------------CRC ��λ�ֽ�ֵ��------------------------//
const Uint16 auchCRCHi[] = {
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
};
//--------------------CRC ��λ�ֽ�ֵ��------------------------//
const Uint16 auchCRCLo[] = {
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

//-------------------------------for SCI FIFO-----------------------------//
Uint16 Rxd_Stop_Cnt = 0;  //��ʱModbusͨ�ŵ�ֹͣʱ�����,������5s��ͨ��ʱ, ����
Uint16 Index = 0;
//int Sci_Cnt = 0;
int Sci_VarRx[10];  //���ô������·���ָ��ȹ̶�Ϊ8
int Sci_VarRx_Buf[10];
int Sci_VarTx[72] = {0x01,0x02,0x04,0x08,0x10,0x11,0x12,0x014,0x18,0x20,0,0,0,0};
int Sci_Rx_Value = 0;   //�������յ���
int Sci_Tx_Value = 0;   //����Ҫ���͵���
int Sci_Fifo_Depth = 0;  //FIFO���
//int Sci_Fifo_Depth1 = -1;  //FIFO���
//int Sci_Fifo_Depth2 = -1;  //FIFO���
int Var_2_Empty_FIFO = -1;
//int Sci_Flag = 0;

//---------------------------ModBus definition------------------------------//
#define  Local_Id				0x09	//װ�õ�ַ
#define  Func_RD_Switch	    	0x01	//������
#define  Func_RD_Reg			0x03 	//���Ĵ���
#define  Func_Test				0x04
#define  Func_WE_S_Switch		0x05	//д��·����
#define  Func_WE_S_Reg			0x06	//д�����Ĵ���
#define  Func_WE_M_Switch		0x0F	//д��·����
#define	 Func_WE_M_Reg			0x10	//д����Ĵ���
#define  Func_Wrong_Cmd			0x80	//��������

//ÿ��1.25s����һ֡����
#define  MB_STOP_COUNT			30000	//ֹͣʱ�� = 160us * MB_STOP_COUNT = 5s
//------------------ModBus communication error type-------------------------//
#define  SCI_FIFO_OVF			0x0001  //FIFO���
#define  MB_ID_ERR				0x0002
#define  MB_CRC_ERR				0x0004
#define  MB_STOP_ERR			0x0008  //����480msû��ͨ��


int Sci_OverFlow_Sign = 0;
int MB_ERR_FLAG = 0;
int MB_COMMU_FLAG = 0;   //1���ɹ�����һ֡����

int Rx_Id = 0;  //���յ���װ�õ�ַ
int Rx_Func_Code = 0;  //���յ��Ĺ�����
int Rx_Opt_Addr = 0;  //���յ��Ĳ�����ַ
int Rx_Opt_Data = 0;  //���յ��Ĳ������� �� д�������
Uint16 Temp_Crc_Code = 0;  //��ʱУ�����CRC��
Uint16 Rx_Crc_Code = 0;  //���յ���CRCУ����
//Uint16 Tx_Crc_Code = 0;  //���������CRCУ����
int Temp_Flag = 0;

Uint16 Crc_High = 0xFF ;	 /* ��CRC�ֽڳ�ʼ�� */
Uint16 Crc_Low = 0xFF ;	 /* ��CRC �ֽڳ�ʼ�� */


void Sci_Modbus_main(void);
Uint16 ModBusCRC16(int *s, int n);  //����16λ��CRC��
void ModBusCRC16_TBC(int *s, int n);  //�ó�CRC�ĸߵ��ֽ�,��ȫ�ֱ���
void RD_Switch01_ServFun(void);
void RD_Reg03_ServFun(void);
void WE_S_Switch05_ServFun(void);
void WE_S_Reg06_ServFun(void);
Uint16 Scan_Switch_Addr_RD(int addr);
int Scan_Reg_Addr_RD(int addr);
void Scan_S_Switch_Addr_WE(int addr);
void Scan_S_Reg_Addr_WE(int addr);

void Sci_Tx_Modbus(int n);  //SCI����TXD����


void Sci_Modbus_main()
{
	Uint16 i=0, j=0, k=0;
	Uint16 Equal_2_Id[8] = {0};

	Sci_Fifo_Depth = ScicRegs.SCIFFRX.bit.RXFFST;  //FIFO�����
	Sci_OverFlow_Sign = ScicRegs.SCIFFRX.bit.RXFFOVF;  //FIFO�Ƿ����

	if(Sci_OverFlow_Sign)
	{
		MB_ERR_FLAG |= SCI_FIFO_OVF;
	}
//	if((Sci_Fifo_Depth >= 8) && (!Sci_OverFlow_Sign))
	if(Sci_Fifo_Depth >= 8)
	{
		Index = 0;
		for(i=0; i<8; i++)
		{	//ֻȡǰ8�ֽ���ͨ��,���˴������FIFOȫ������,�������鳤������Ϊ16
			Sci_VarRx_Buf[i] = ScicRegs.SCIRXBUF.all;
			if(Sci_VarRx_Buf[i] == Local_Id)	Equal_2_Id[Index++] = i;
		}
		if(Index == 0)	MB_ERR_FLAG |= MB_ID_ERR;   //װ�õ�ַ����
		else
		{
			for(i=0; ((i<Index) && (!MB_COMMU_FLAG)); i++)
			{
				k = Equal_2_Id[i];
				for(j=0; j<8; j++)
				{
					Sci_VarRx[j] = Sci_VarRx_Buf[k%8];
					k++;
				}
//				ͨ��֡����
//				Rx_Id = Sci_VarRx[0];
				Rx_Func_Code = Sci_VarRx[1];
				Rx_Opt_Addr = (Sci_VarRx[2]<<8) | Sci_VarRx[3];  //��λ��ǰ
				Rx_Opt_Data = (Sci_VarRx[4]<<8) | Sci_VarRx[5];  //��ȡ����
				Rx_Crc_Code = (Uint16)((Sci_VarRx[6]<<8) | (Sci_VarRx[7]));  //��λ��ǰ

				Temp_Crc_Code = ModBusCRC16(Sci_VarRx, 6);
				if(Rx_Crc_Code == Temp_Crc_Code)  //ͨ��У��
				{
					MB_COMMU_FLAG = 1;
					Sci_VarTx[0] = Local_Id;  //���ر�װ�õ�ַ
					Sci_VarTx[1] = Rx_Func_Code;  //ԭ�����ع�����

					switch(Rx_Func_Code)
					{
//						case Func_RD_Switch: {RD_Switch01_ServFun(); break;}
						case Func_RD_Reg: {RD_Reg03_ServFun(); break;}
						case Func_Test: {RD_Reg03_ServFun(); break;}
//						case Func_WE_S_Switch: {WE_S_Switch05_ServFun(); break;}
						case Func_WE_S_Reg: {WE_S_Reg06_ServFun(); break;}
						default: {break;}
					}
					MB_ERR_FLAG = 0;	//������һ֡����,Modbus���ϱ�־λ����
					Rxd_Stop_Cnt = 0;  	//������һ֡����,ͨ����ֹ����������
				}
			}
			if(MB_COMMU_FLAG == 0)	MB_ERR_FLAG |= MB_CRC_ERR;  //����֡ͨ����CRCУ��
		}
//		while(ScicRegs.SCIFFRX.bit.RXFFST)
//		{
//			Var_2_Empty_FIFO = ScicRegs.SCIRXBUF.all;  //��FIFO���
//		}
		MB_COMMU_FLAG = 0;  //����ʹ������ѭ����λ
		ScicRegs.SCIFFRX.bit.RXFIFORESET = 0;  //д0: ��λFIFOָ��Ϊ0,����FIFO�ﻹ������,��ͨ��ʧ��
		ScicRegs.SCIFFRX.bit.RXFIFORESET = 1;  //д1: ����ʹ�ܽ���FIFO�Ĳ���
	}
	if(Rxd_Stop_Cnt >= MB_STOP_COUNT)  MB_ERR_FLAG |= MB_STOP_ERR;  //ͨ����ֹʱ�䳬��480ms
}

//------------------CRCУ�������ɺ���,����֤----------------------
Uint16 ModBusCRC16(int *s, int n)
{
	Uint16 c = 0xffff;
	int k=0;
	int i=0;
	for(k=0; k<n; k++)
	{
		c = s[k]^c;   //���k���ֽ����
		for(i=0; i<8; i++)
			c = (c&0x0001) ? ((c>>1)^0xA001) : (c>>1);
	}
	return (c<<8) | (c>>8);
}

void ModBusCRC16_TBC(int *s, int n)  //CRC Code is generated by checking Table
{   //�Ѿ�����֤
	Uint16 Index; 		/* CRCѭ���е����� */
	Crc_High = 0xFF;	/* ��CRC�ֽڳ�ʼ�� */
	Crc_Low = 0xFF;	 	/* ��CRC �ֽڳ�ʼ�� */
	while (n--) 		/* ������Ϣ������ */
	{
		Index = Crc_High ^ (*s++); /* ����CRC */
		Crc_High = Crc_Low ^ (auchCRCHi[Index]);
		Crc_Low = auchCRCLo[Index];
	}
}

void RD_Switch01_ServFun()
{
	Sci_VarTx[2] = (Rx_Opt_Data + 7)>>3;   //�����ֽڸ���,������8
	Sci_VarTx[3] = Scan_Switch_Addr_RD(Rx_Opt_Addr);
	ModBusCRC16_TBC(Sci_VarTx, 4);   //�����׵�ַ
	Sci_VarTx[4] = Crc_High;  //��8λ
	Sci_VarTx[5] = Crc_Low; //��8λ
	Sci_Tx_Modbus(6);  //ֻ����4bits������
}

void RD_Reg03_ServFun()  //��ͬʱ��ȡ����Ĵ�����ֵ
{
	unsigned int i=0;
	unsigned int k=3;
	Sci_VarTx[2] = Rx_Opt_Data<<1;  //�����ֽ��� = �Ĵ�������*2
	for(i=Rx_Opt_Addr; i<(Rx_Opt_Addr+Rx_Opt_Data); i++)
	{
		Sci_Tx_Value = Scan_Reg_Addr_RD(i);
		Sci_VarTx[k++] = (Sci_Tx_Value >> 8)&(0x00FF);  //��8λ
		Sci_VarTx[k++] = (Sci_Tx_Value % 256)&(0x00FF); //��8λ
	}
	ModBusCRC16_TBC(Sci_VarTx, k);   //�����׵�ַ
	Sci_VarTx[k++] = Crc_High;  //��8λ
	Sci_VarTx[k++] = Crc_Low; //��8λ
	Sci_Tx_Modbus(k);
}

void WE_S_Switch05_ServFun()   //ֻ��д��·����,װ�÷��ر������������͵���ȫ��ͬ
{
	Uint16 i=2;
	Scan_S_Switch_Addr_WE(Rx_Opt_Addr);
	for(i=2; i<8; i++)
		Sci_VarTx[i] = Sci_VarRx[i];
	Sci_Tx_Modbus(8);
}

void WE_S_Reg06_ServFun()  //ֻ��д�����Ĵ���,װ�÷��ر������������͵���ȫ��ͬ
{
	Uint16 i=2;
	Scan_S_Reg_Addr_WE(Rx_Opt_Addr);
	for(i=2; i<8; i++)
		Sci_VarTx[i] = Sci_VarRx[i];
	Sci_Tx_Modbus(8);
}

Uint16 Scan_Switch_Addr_RD(Addr)
{
	Uint16 Tx_Data=0x00;
	switch(Addr)
	{
		case 11:{
			Tx_Data = (Temp_Flag<<7)|(D_Check.Flag<<3)|(Reset_Flag<<2)|((Run_Stop_Flag)?0x00:0x02)|(Run_Stop_Flag); //��λ,ֹͣ,����,���λ����Ϊ����
			break;
		}
		default:{
			break;
		}
	}
	return Tx_Data;
}

int Scan_Reg_Addr_RD(Addr)
{
	int Tx_Data=0x00;
	switch(Addr)
	{
		case  15: {Tx_Data = Run_Stop_Flag; break;}

		case  50: {Tx_Data = ERROR_flag; break;}
		case  51: {Tx_Data = MB_ERR_FLAG; break;}

		case  99: {Tx_Data = (int)(UDC_aver); break;}
		case 100: {Tx_Data = (int)Ctrl_Para.UDCREF; break;}
		case 101: {Tx_Data = (int)(Ctrl_Para.UDC_Kp); break;}
		case 102: {Tx_Data = (int)(Ctrl_Para.UDC_Ki); break;}
		case 103: {Tx_Data = (int)(Ctrl_Para.Ud_Kp); break;}
		case 104: {Tx_Data = (int)(Ctrl_Para.Ud_Ki); break;}
		case 105: {Tx_Data = (int)(Ctrl_Para.Kp_P2P_Neg); break;}
		case 106: {Tx_Data = (int)(Ctrl_Para.Kp_in); break;}
		case 107: {Tx_Data = (int)U_FtoI; break;}
		case 108: {Tx_Data = (int)Ctrl_Para.Cloop; break;}
		case 109: {Tx_Data = (int)Q_REF; break;}
		case 110: {Tx_Data = (int)Ipcc_Amp; break;}
		case 111: {Tx_Data = (int)Ctrl_Para.Rpt_Kp; break;}
		case 113: {Tx_Data = (int)Ctrl_Para.UDCMAX; break;}
		case 114: {Tx_Data = (int)Ctrl_Para.UDCMIN; break;}
		case 115: {Tx_Data = (int)PLL_Switch; break;}
		case 116: {Tx_Data = (int)THETA_COM_Usq; break;}
		case 117: {Tx_Data = (int)DA_Switch; break;}

		case 201: {Tx_Data = (int)(I_q*100); break;}	//����100����ʾ
		case 202: {Tx_Data = (int)(I_d*100); break;}
		case 203: {Tx_Data = (int)(Idref*100); break;}	//����100����ʾ

		case 301: {Tx_Data = (int)US_Display; break;}	//������ѹ��ֵ
		case 302: {Tx_Data = (int)U_BDRF; break;}
		case 303: {Tx_Data = (int)U_CDRF; break;}
		case 304: {Tx_Data = (int)(IASVG*100); break;}
		case 305: {Tx_Data = (int)(IBSVG*100); break;}
		case 306: {Tx_Data = (int)(ICSVG*100); break;}
		case 307: {Tx_Data = (int)(IA_Load*100); break;}
		case 308: {Tx_Data = (int)(IB_Load*100); break;}
		case 309: {Tx_Data = (int)(IC_Load*100); break;}

		case 501: {Tx_Data = (int)UDC.DA1; break;}
		case 502: {Tx_Data = (int)UDC.DA2; break;}
		case 503: {Tx_Data = (int)UDC.DA3; break;}
		case 504: {Tx_Data = (int)UDC.DA4; break;}
		case 505: {Tx_Data = (int)UDC.DA5; break;}
		case 506: {Tx_Data = (int)UDC.DA6; break;}
		case 507: {Tx_Data = (int)UDC.DA7; break;}
		case 508: {Tx_Data = (int)UDC.DA8; break;}
		case 509: {Tx_Data = (int)UDC.DA9; break;}
		case 510: {Tx_Data = (int)UDC.DA10; break;}
		case 511: {Tx_Data = (int)UDC.DA11; break;}
		case 512: {Tx_Data = (int)UDC.DA12; break;}
		case 513: {Tx_Data = (int)UDC.DB1; break;}
		case 514: {Tx_Data = (int)UDC.DB2; break;}
		case 515: {Tx_Data = (int)UDC.DB3; break;}
		case 516: {Tx_Data = (int)UDC.DB4; break;}
		case 517: {Tx_Data = (int)UDC.DB5; break;}
		case 518: {Tx_Data = (int)UDC.DB6; break;}
		case 519: {Tx_Data = (int)UDC.DB7; break;}
		case 520: {Tx_Data = (int)UDC.DB8; break;}
		case 521: {Tx_Data = (int)UDC.DB9; break;}
		case 522: {Tx_Data = (int)UDC.DB10; break;}
		case 523: {Tx_Data = (int)UDC.DB11; break;}
		case 524: {Tx_Data = (int)UDC.DB12; break;}
		case 525: {Tx_Data = (int)UDC.DC1; break;}
		case 526: {Tx_Data = (int)UDC.DC2; break;}
		case 527: {Tx_Data = (int)UDC.DC3; break;}
		case 528: {Tx_Data = (int)UDC.DC4; break;}
		case 529: {Tx_Data = (int)UDC.DC5; break;}
		case 530: {Tx_Data = (int)UDC.DC6; break;}
		case 531: {Tx_Data = (int)UDC.DC7; break;}
		case 532: {Tx_Data = (int)UDC.DC8; break;}
		case 533: {Tx_Data = (int)UDC.DC9; break;}
		case 534: {Tx_Data = (int)UDC.DC10; break;}
		case 535: {Tx_Data = (int)UDC.DC11; break;}
		case 536: {Tx_Data = (int)UDC.DC12; break;}
		case 537: {Tx_Data = (int)ERROR_module; break;}
		case 538: {Tx_Data = (int)UDC_averA; break;}
		case 539: {Tx_Data = (int)UDC_averB; break;}
		case 540: {Tx_Data = (int)UDC_averC; break;}
		case 541: {Tx_Data = (int)(I_derror*100); break;}
		case 542: {Tx_Data = (int)(I_qerror*100); break;}
//		case 543: {Tx_Data = (int)F_State.A1; break;}
//		case 544: {Tx_Data = (int)F_State.A2; break;}
//		case 545: {Tx_Data = (int)F_State.A3; break;}
//		case 546: {Tx_Data = (int)F_State.A4; break;}
//		case 547: {Tx_Data = (int)F_State.A5; break;}
//		case 548: {Tx_Data = (int)F_State.A6; break;}
//		case 549: {Tx_Data = (int)F_State.A7; break;}
//		case 550: {Tx_Data = (int)F_State.A8; break;}
//		case 551: {Tx_Data = (int)F_State.A9; break;}
//		case 552: {Tx_Data = (int)F_State.A10; break;}
//		case 553: {Tx_Data = (int)F_State.A11; break;}
//		case 554: {Tx_Data = (int)F_State.A12; break;}
//		case 555: {Tx_Data = (int)F_State.B1; break;}
//		case 556: {Tx_Data = (int)F_State.B2; break;}
//		case 557: {Tx_Data = (int)F_State.B3; break;}
//		case 558: {Tx_Data = (int)F_State.B4; break;}
//		case 559: {Tx_Data = (int)F_State.B5; break;}
//		case 560: {Tx_Data = (int)F_State.B6; break;}
//		case 561: {Tx_Data = (int)F_State.B7; break;}
//		case 562: {Tx_Data = (int)F_State.B8; break;}
//		case 563: {Tx_Data = (int)F_State.B9; break;}
//		case 564: {Tx_Data = (int)F_State.B10; break;}
//		case 565: {Tx_Data = (int)F_State.B11; break;}
//		case 566: {Tx_Data = (int)F_State.B12; break;}
//		case 567: {Tx_Data = (int)F_State.C1; break;}
//		case 568: {Tx_Data = (int)F_State.C2; break;}
//		case 569: {Tx_Data = (int)F_State.C3; break;}
//		case 570: {Tx_Data = (int)F_State.C4; break;}
//		case 571: {Tx_Data = (int)F_State.C5; break;}
//		case 572: {Tx_Data = (int)F_State.C6; break;}
//		case 573: {Tx_Data = (int)F_State.C7; break;}
//		case 574: {Tx_Data = (int)F_State.C8; break;}
//		case 575: {Tx_Data = (int)F_State.C9; break;}
//		case 576: {Tx_Data = (int)F_State.C10; break;}
//		case 577: {Tx_Data = (int)F_State.C11; break;}
//		case 578: {Tx_Data = (int)F_State.C12; break;}
		default: {
			break;
		}
	}
	return Tx_Data;
}

void Scan_S_Switch_Addr_WE(Addr)
{
	switch(Addr)
	{
		case 11:{
			Temp_Flag = (Rx_Opt_Data&0x8000) ? 0x01 : 0x00;  //�ֺ�բ�����ڸ�8λ
			D_Check.Flag = (Rx_Opt_Data&0x0800) ? 0x01 : 0x00;
			Reset_Flag = (Rx_Opt_Data&0x0400) ? 0x01 : 0x00;
			Run_Stop_Flag = (Rx_Opt_Data&0x0100) ? 0x01 : 0x00;
			break;
		}
		default:{
			break;
		}
	}
}

void Scan_S_Reg_Addr_WE(Addr)
{
	switch(Addr)
	{
		case  11:{Run_Stop_Flag = 1;break;}
		case  12:{Run_Stop_Flag = 0;break;}
		case  13:{Reset_Flag = 1; break;}  //��λ
		case  14:{D_Check.Flag = 1; break;}  //����������·���
		case  16:{Restore_Factory_Flag = 1; break;}  //�ָ���������

		case 100:{
			if(Rx_Opt_Data != (int)Ctrl_Para.UDCREF) //�ж��Ƿ�����д��EEPROM
			{
				Ctrl_Para.UDCREF = Rx_Opt_Data;  //����ֵ
//				MsgBuffer_Send[0] = Rx_Opt_Data; //����EEPROM
//				WR_DATA_PROCESS(1);
//				WR_EEPROM(2,0x50,0x4);  //д���ֽ�
			}
			break;
		}
		case 101:{
			if(Rx_Opt_Data != (int)Ctrl_Para.UDC_Kp) //�ж��Ƿ�����д��EEPROM
			{
				Ctrl_Para.UDC_Kp = Rx_Opt_Data;  //����ֵ
//				MsgBuffer_Send[0] = Rx_Opt_Data; //����EEPROM
//				WR_DATA_PROCESS(1);
//				WR_EEPROM(2,0x52,0x4);
			}
			break;
		}
		case 102:{
			if(Rx_Opt_Data != (int)Ctrl_Para.UDC_Ki)
			{
				Ctrl_Para.UDC_Ki = Rx_Opt_Data;
//				MsgBuffer_Send[0] = Rx_Opt_Data;
//				WR_DATA_PROCESS(1);
//				WR_EEPROM(2,0x54,0x4);
			}
			break;
		}
		case 103:{
			if(Rx_Opt_Data != (int)Ctrl_Para.Ud_Kp)
			{
				Ctrl_Para.Ud_Kp = Rx_Opt_Data;
//				MsgBuffer_Send[0] = Rx_Opt_Data;
//				WR_DATA_PROCESS(1);
//				WR_EEPROM(2,0x56,0x4);
			}
			break;
		}
		case 104:{
			if(Rx_Opt_Data != (int)Ctrl_Para.Ud_Ki)
			{
				Ctrl_Para.Ud_Ki = Rx_Opt_Data;
//				MsgBuffer_Send[0] = Rx_Opt_Data;
//				WR_DATA_PROCESS(1);
//				WR_EEPROM(2,0x58,0x4);
			}
			break;
		}
		case 105:{
			if(Rx_Opt_Data != (int)Ctrl_Para.Kp_P2P_Neg)
			{
				Ctrl_Para.Kp_P2P_Neg = Rx_Opt_Data;
//				MsgBuffer_Send[0] = Rx_Opt_Data;
//				WR_DATA_PROCESS(1);
//				WR_EEPROM(2,0x5A,0x4);
			}
			break;
		}
		case 115:{
			if(Rx_Opt_Data != PLL_Switch)
			{
				PLL_Switch = Rx_Opt_Data;
//				MsgBuffer_Send[0] = Rx_Opt_Data;
//				WR_DATA_PROCESS(1);
//				WR_EEPROM(2,0x5C,0x4);
			}
			break;
		}
		case 106:{
			if(Rx_Opt_Data != (int)Ctrl_Para.Kp_in)
			{
				Ctrl_Para.Kp_in = Rx_Opt_Data;
//				MsgBuffer_Send[0] = Rx_Opt_Data;
//				WR_DATA_PROCESS(1);
//				WR_EEPROM(2,0x70,0x4);
			}
			break;
		}
		case 113:{
			if(Rx_Opt_Data != (int)Ctrl_Para.UDCMAX)
			{
				Ctrl_Para.UDCMAX = Rx_Opt_Data;
//				MsgBuffer_Send[0] = Rx_Opt_Data;
//				WR_DATA_PROCESS(1);
//				WR_EEPROM(2,0x72,0x4);
			}
			break;
		}
		case 114:{
			if(Rx_Opt_Data != (int)Ctrl_Para.UDCMIN)
			{
				Ctrl_Para.UDCMIN = Rx_Opt_Data;
//				MsgBuffer_Send[0] = Rx_Opt_Data;
//				WR_DATA_PROCESS(1);
//				WR_EEPROM(2,0x74,0x4);
			}
			break;
		}
		case 109:{
			if(Rx_Opt_Data != (int)Q_REF)
			{
				Q_REF = Rx_Opt_Data;
//				MsgBuffer_Send[0] = Rx_Opt_Data;
//				WR_DATA_PROCESS(1);
//				WR_EEPROM(2,0x76,0x4);
			}
			break;
		}
		case 110:{
			if(Rx_Opt_Data != Ipcc_Amp)
			{
				Ipcc_Amp = Rx_Opt_Data;
//				MsgBuffer_Send[0] = Rx_Opt_Data;
//				WR_DATA_PROCESS(1);
//				WR_EEPROM(2,0x78,0x4);
			}
			break;
		}
		case 111:{
			if(Rx_Opt_Data != Ctrl_Para.Rpt_Kp)
			{
				Ctrl_Para.Rpt_Kp = Rx_Opt_Data;
//				MsgBuffer_Send[0] = Rx_Opt_Data;
//				WR_DATA_PROCESS(1);
//				WR_EEPROM(2,0x7A,0x4);
			}
			break;
		}
		case 116:{
			if(Rx_Opt_Data != THETA_COM_Usq)
			{
				THETA_COM_Usq = Rx_Opt_Data;
//				MsgBuffer_Send[0] = Rx_Opt_Data;
//				WR_DATA_PROCESS(1);
//				WR_EEPROM(2,0x7C,0x4);
			}
			break;
		}
		case 117:{
			if(Rx_Opt_Data != DA_Switch)
			{
				DA_Switch = Rx_Opt_Data;
			}
			break;
		}
		default:{
			break;
		}
	}
}

void Sci_Tx_Modbus(n)
{
	Uint16 i=0;
	GpioDataRegs.GPBCLEAR.bit.GPIO60 = 1; //CON_C=0��DSP��������������
	for(i=0; i<n; i++)
	{
		ScicRegs.SCITXBUF = Sci_VarTx[i];
		while(ScicRegs.SCICTL2.bit.TXRDY==0){;} //0��SCITXBUF���� 1��SCITXBUF׼��������һ�ַ�
	}
	while(ScicRegs.SCICTL2.bit.TXEMPTY == 0){;} //0: Transmitter buffer or shift register or both are loaded with datal; 1: Transmitter buffer and shift registers are both empty
	GpioDataRegs.GPBSET.bit.GPIO60 = 1;	//CON_C=1��DSP�Ӵ�������������
}

#endif  	// end of SVG_MODBUS_H definition
