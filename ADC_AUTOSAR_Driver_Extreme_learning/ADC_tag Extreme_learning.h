//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : ADC_tag.h
//  @ Date : 11/17/2013
//  @ Author : 
//
//


#if !defined(_ADC_TAG_H)
#define _ADC_TAG_H

#include "vuint32_t.h"
#include "int32_t.h"

struct ADC_tag {
public:
	union  {
	public:
		struct  {
		public:
			vuint32_t OWREN : 1;
			vuint32_t WLSIDE : 1;
			vuint32_t MODE : 1;
			vuint32_t EDGLEV : 1;
			vuint32_t TRGEN : 1;
			vuint32_t EDGE : 1;
			vuint32_t  : 1;
			vuint32_t NSTART : 1;
			vuint32_t  : 1;
			vuint32_t JTRGEN : 1;
			vuint32_t JEDGE : 1;
			vuint32_t JSTART : 1;
			vuint32_t  : 11;
			vuint32_t ADCLKSEL : 1;
			vuint32_t ABORTCHAIN : 1;
			vuint32_t ABORT : 1;
			vuint32_t ACK0 : 1;
			vuint32_t  : 4;
			vuint32_t PWDN : 1;
		};
		vuint32_t R;
		int B;
	};
	union _1 {
	public:
		struct  {
		public:
			vuint32_t  : 7;
			vuint32_t NSTART : 1;
			vuint32_t JABORT : 1;
			vuint32_t  : 2;
			vuint32_t JSTART : 1;
			vuint32_t  : 4;
			vuint32_t CHADDR : 7;
			vuint32_t  : 3;
			vuint32_t ACK0 : 1;
			vuint32_t  : 2;
			vuint32_t ADCSTATUS : 3;
		};
		vuint32_t R;
		int B;
	};
	union _2 {
	public:
		struct  {
		public:
			vuint32_t  : 28;
			vuint32_t JEOC : 1;
			vuint32_t JECH : 1;
			vuint32_t EOC : 1;
			vuint32_t ECH : 1;
		};
		vuint32_t R;
		int B;
	};
	union _3 {
	public:
		struct  {
		public:
			vuint32_t EOC31 : 1;
			vuint32_t EOC30 : 1;
			vuint32_t EOC29 : 1;
			vuint32_t EOC28 : 1;
			vuint32_t EOC27 : 1;
			vuint32_t EOC26 : 1;
			vuint32_t EOC25 : 1;
			vuint32_t EOC24 : 1;
			vuint32_t EOC23 : 1;
			vuint32_t EOC22 : 1;
			vuint32_t EOC21 : 1;
			vuint32_t EOC20 : 1;
			vuint32_t EOC19 : 1;
			vuint32_t EOC18 : 1;
			vuint32_t EOC17 : 1;
			vuint32_t EOC16 : 1;
			vuint32_t EOC15 : 1;
			vuint32_t EOC14 : 1;
			vuint32_t EOC13 : 1;
			vuint32_t EOC12 : 1;
			vuint32_t EOC11 : 1;
			vuint32_t EOC10 : 1;
			vuint32_t EOC9 : 1;
			vuint32_t EOC8 : 1;
			vuint32_t EOC7 : 1;
			vuint32_t EOC6 : 1;
			vuint32_t EOC5 : 1;
			vuint32_t EOC4 : 1;
			vuint32_t EOC3 : 1;
			vuint32_t EOC2 : 1;
			vuint32_t EOC1 : 1;
			vuint32_t EOC0 : 1;
		};
		vuint32_t R;
		int B;
	};
	union _4 {
	public:
		struct  {
		public:
			vuint32_t  : 28;
			vuint32_t MSKJEOC : 1;
			vuint32_t MSKJECH : 1;
			vuint32_t MSKEOC : 1;
			vuint32_t MSKECH : 1;
		};
		vuint32_t R;
		int B;
	};
	union _5 {
	public:
		struct  {
		public:
			vuint32_t CIM31 : 1;
			vuint32_t CIM30 : 1;
			vuint32_t CIM29 : 1;
			vuint32_t CIM28 : 1;
			vuint32_t CIM27 : 1;
			vuint32_t CIM26 : 1;
			vuint32_t CIM25 : 1;
			vuint32_t CIM24 : 1;
			vuint32_t CIM23 : 1;
			vuint32_t CIM22 : 1;
			vuint32_t CIM21 : 1;
			vuint32_t CIM20 : 1;
			vuint32_t CIM19 : 1;
			vuint32_t CIM18 : 1;
			vuint32_t CIM17 : 1;
			vuint32_t CIM16 : 1;
			vuint32_t CIM15 : 1;
			vuint32_t CIM14 : 1;
			vuint32_t CIM13 : 1;
			vuint32_t CIM12 : 1;
			vuint32_t CIM11 : 1;
			vuint32_t CIM10 : 1;
			vuint32_t CIM9 : 1;
			vuint32_t CIM8 : 1;
			vuint32_t CIM7 : 1;
			vuint32_t CIM6 : 1;
			vuint32_t CIM5 : 1;
			vuint32_t CIM4 : 1;
			vuint32_t CIM3 : 1;
			vuint32_t CIM2 : 1;
			vuint32_t CIM1 : 1;
			vuint32_t CIM0 : 1;
		};
		vuint32_t R;
		int B;
	};
	union _6 {
	public:
		struct  {
		public:
			vuint32_t  : 24;
			vuint32_t WDG3H : 1;
			vuint32_t WDG2H : 1;
			vuint32_t WDG1H : 1;
			vuint32_t WDG0H : 1;
			vuint32_t WDG3L : 1;
			vuint32_t WDG2L : 1;
			vuint32_t WDG1L : 1;
			vuint32_t WDG0L : 1;
		};
		vuint32_t R;
		int B;
	};
	union _7 {
	public:
		struct  {
		public:
			vuint32_t  : 24;
			vuint32_t MSKWDG3H : 1;
			vuint32_t MSKWDG2H : 1;
			vuint32_t MSKWDG1H : 1;
			vuint32_t MSKWDG0H : 1;
			vuint32_t MSKWDG3L : 1;
			vuint32_t MSKWDG2L : 1;
			vuint32_t MSKWDG1L : 1;
			vuint32_t MSKWDG0L : 1;
		};
		vuint32_t R;
		int B;
	};
	union _8 {
	public:
		struct  {
		public:
			vuint32_t  : 30;
			vuint32_t DCLR : 1;
			vuint32_t DMAEN : 1;
		};
		vuint32_t R;
		int B;
	};
	union _9 {
	public:
		struct  {
		public:
			vuint32_t DMA31 : 1;
			vuint32_t DMA30 : 1;
			vuint32_t DMA29 : 1;
			vuint32_t DMA28 : 1;
			vuint32_t DMA27 : 1;
			vuint32_t DMA26 : 1;
			vuint32_t DMA25 : 1;
			vuint32_t DMA24 : 1;
			vuint32_t DMA23 : 1;
			vuint32_t DMA22 : 1;
			vuint32_t DMA21 : 1;
			vuint32_t DMA20 : 1;
			vuint32_t DMA19 : 1;
			vuint32_t DMA18 : 1;
			vuint32_t DMA17 : 1;
			vuint32_t DMA16 : 1;
			vuint32_t DMA15 : 1;
			vuint32_t DMA14 : 1;
			vuint32_t DMA13 : 1;
			vuint32_t DMA12 : 1;
			vuint32_t DMA11 : 1;
			vuint32_t DMA10 : 1;
			vuint32_t DMA9 : 1;
			vuint32_t DMA8 : 1;
			vuint32_t DMA7 : 1;
			vuint32_t DMA6 : 1;
			vuint32_t DMA5 : 1;
			vuint32_t DMA4 : 1;
			vuint32_t DMA3 : 1;
			vuint32_t DMA2 : 1;
			vuint32_t DMA1 : 1;
			vuint32_t DMA0 : 1;
		};
		vuint32_t R;
		int B;
	};
	union _10 {
	public:
		struct  {
		public:
			vuint32_t  : 16;
			vuint32_t THREN : 1;
			vuint32_t THRINV : 1;
			vuint32_t  : 7;
			vuint32_t THRCH : 7;
		};
		vuint32_t R;
		int B;
	};
	union _11 {
	public:
		struct  {
		public:
			vuint32_t  : 6;
			vuint32_t THRH : 10;
			vuint32_t  : 6;
			vuint32_t THRL : 10;
		};
		vuint32_t R;
		int B;
	};
	union _12 {
	public:
		struct  {
		public:
			vuint32_t  : 16;
			vuint32_t INPLATCH : 1;
			vuint32_t  : 1;
			vuint32_t OFFSHIFT : 2;
			vuint32_t  : 1;
			vuint32_t INPCMP : 2;
			vuint32_t  : 1;
			vuint32_t INPSAMP : 8;
		};
		vuint32_t R;
		int B;
	};
	union _13 {
	public:
		struct  {
		public:
			vuint32_t CH31 : 1;
			vuint32_t CH30 : 1;
			vuint32_t CH29 : 1;
			vuint32_t CH28 : 1;
			vuint32_t CH27 : 1;
			vuint32_t CH26 : 1;
			vuint32_t CH25 : 1;
			vuint32_t CH24 : 1;
			vuint32_t CH23 : 1;
			vuint32_t CH22 : 1;
			vuint32_t CH21 : 1;
			vuint32_t CH20 : 1;
			vuint32_t CH19 : 1;
			vuint32_t CH18 : 1;
			vuint32_t CH17 : 1;
			vuint32_t CH16 : 1;
			vuint32_t CH15 : 1;
			vuint32_t CH14 : 1;
			vuint32_t CH13 : 1;
			vuint32_t CH12 : 1;
			vuint32_t CH11 : 1;
			vuint32_t CH10 : 1;
			vuint32_t CH9 : 1;
			vuint32_t CH8 : 1;
			vuint32_t CH7 : 1;
			vuint32_t CH6 : 1;
			vuint32_t CH5 : 1;
			vuint32_t CH4 : 1;
			vuint32_t CH3 : 1;
			vuint32_t CH2 : 1;
			vuint32_t CH1 : 1;
			vuint32_t CH0 : 1;
		};
		vuint32_t R;
		int B;
	};
	union _14 {
	public:
		struct  {
		public:
			vuint32_t CH31 : 1;
			vuint32_t CH30 : 1;
			vuint32_t CH29 : 1;
			vuint32_t CH28 : 1;
			vuint32_t CH27 : 1;
			vuint32_t CH26 : 1;
			vuint32_t CH25 : 1;
			vuint32_t CH24 : 1;
			vuint32_t CH23 : 1;
			vuint32_t CH22 : 1;
			vuint32_t CH21 : 1;
			vuint32_t CH20 : 1;
			vuint32_t CH19 : 1;
			vuint32_t CH18 : 1;
			vuint32_t CH17 : 1;
			vuint32_t CH16 : 1;
			vuint32_t CH15 : 1;
			vuint32_t CH14 : 1;
			vuint32_t CH13 : 1;
			vuint32_t CH12 : 1;
			vuint32_t CH11 : 1;
			vuint32_t CH10 : 1;
			vuint32_t CH9 : 1;
			vuint32_t CH8 : 1;
			vuint32_t CH7 : 1;
			vuint32_t CH6 : 1;
			vuint32_t CH5 : 1;
			vuint32_t CH4 : 1;
			vuint32_t CH3 : 1;
			vuint32_t CH2 : 1;
			vuint32_t CH1 : 1;
			vuint32_t CH0 : 1;
		};
		vuint32_t R;
		int B;
	};
	union _15 {
	public:
		struct  {
		public:
			vuint32_t  : 24;
			vuint32_t DSD : 8;
		};
		vuint32_t R;
		int B;
	};
	union _16 {
	public:
		struct  {
		public:
			vuint32_t  : 24;
			vuint32_t PDED : 8;
		};
		vuint32_t R;
		int B;
	};
	union _17 {
	public:
		struct  {
		public:
			vuint32_t  : 12;
			vuint32_t VALID : 1;
			vuint32_t OVERW : 1;
			vuint32_t RESULT : 2;
			vuint32_t  : 4;
			vuint32_t CDATA : 12;
		};
		vuint32_t R;
		int B;
	};
	int MCR;
	int MSR;
	int32_t ADC_reserved1;
	int ISR;
	int CEOCFR;
	int IMR;
	int CIMR;
	int WTISR;
	int WTIMR;
	int32_t ADC_reserved2;
	int DMAE;
	int DMAR;
	int TRC;
	int THRHLR;
	int32_t ADC_reserved3;
	int CTR;
	int32_t ADC_reserved4;
	int NCMR;
	int32_t ADC_reserved5;
	int JCMR;
	int32_t ADC_reserved6;
	int DSDR;
	int PDEDR;
	int32_t ADC_reserved7;
	int CDR;
};

#endif  //_ADC_TAG_H
