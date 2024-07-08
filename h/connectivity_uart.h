#ifndef CONNECTIVITY_UART_H
#define CONNECTIVITY_UART_H

#include <stdint.h>

#include "system_gpio.h"

static void UART_Init();
static void UART_Send(uint8_t word);
static void UART_SendWords(uint8_t* words);
static uint32_t UART_WordsLength(uint8_t* words);


#define ULCON0    *(uint32_t*)0xE2900000
#define UCON0     *(uint32_t*)0xE2900004
#define UFCON0    *(uint32_t*)0xE2900008
#define UMCON0    *(uint32_t*)0xE290000C
#define UTRSTAT0  *(uint32_t*)0xE2900010
#define UERSTAT0  *(uint32_t*)0xE2900014
#define UFSTAT0   *(uint32_t*)0xE2900018
#define UMSTAT0   *(uint32_t*)0xE290001C
#define UTXH0     *(uint32_t*)0xE2900020
#define URXH0     *(uint32_t*)0xE2900024
#define UBRDIV0   *(uint32_t*)0xE2900028
#define UDIVSLOT0 *(uint32_t*)0xE290002C
#define UINTP0    *(uint32_t*)0xE2900030
#define UINTSP0   *(uint32_t*)0xE2900034
#define UINTM0    *(uint32_t*)0xE2900038

#define ULCON1    *(uint32_t*)0xE2900400
#define UCON1     *(uint32_t*)0xE2900404
#define UFCON1    *(uint32_t*)0xE2900408
#define UMCON1    *(uint32_t*)0xE290040C
#define UTRSTAT1  *(uint32_t*)0xE2900410
#define UERSTAT1  *(uint32_t*)0xE2900414
#define UFSTAT1   *(uint32_t*)0xE2900418
#define UMSTAT1   *(uint32_t*)0xE290041C
#define UTXH1     *(uint32_t*)0xE2900420
#define URXH1     *(uint32_t*)0xE2900424
#define UBRDIV1   *(uint32_t*)0xE2900428
#define UDIVSLOT1 *(uint32_t*)0xE290042C
#define UINTP1    *(uint32_t*)0xE2900430
#define UINTSP1   *(uint32_t*)0xE2900434
#define UINTM1    *(uint32_t*)0xE2900438

#define ULCON2    *(uint32_t*)0xE2900800
#define UCON2     *(uint32_t*)0xE2900804
#define UFCON2    *(uint32_t*)0xE2900808
#define UMCON2    *(uint32_t*)0xE290080C
#define UTRSTAT2  *(uint32_t*)0xE2900810
#define UERSTAT2  *(uint32_t*)0xE2900814
#define UFSTAT2   *(uint32_t*)0xE2900818
#define UMSTAT2   *(uint32_t*)0xE290081C
#define UTXH2     *(uint32_t*)0xE2900820
#define URXH2     *(uint32_t*)0xE2900824
#define UBRDIV2   *(uint32_t*)0xE2900828
#define UDIVSLOT2 *(uint32_t*)0xE290082C
#define INTP2     *(uint32_t*)0xE2900830
#define UINTSP2   *(uint32_t*)0xE2900834
#define UINTM2    *(uint32_t*)0xE2900838

#define ULCON3    *(uint32_t*)0xE2900C00
#define UCON3     *(uint32_t*)0xE2900C04
#define UFCON3    *(uint32_t*)0xE2900C08
#define UMCON3    *(uint32_t*)0xE2900C0C
#define UTRSTAT3  *(uint32_t*)0xE2900C10
#define UERSTAT3  *(uint32_t*)0xE2900C14
#define UFSTAT3   *(uint32_t*)0xE2900C18
#define UMSTAT3   *(uint32_t*)0xE2900C1C
#define UTXH3     *(uint32_t*)0xE2900C20
#define URXH3     *(uint32_t*)0xE2900C24
#define UBRDIV3   *(uint32_t*)0xE2900C28
#define UDIVSLOT3 *(uint32_t*)0xE2900C2C
#define INTP3     *(uint32_t*)0xE2900C30
#define UINTSP3   *(uint32_t*)0xE2900C34
#define UINTM3    *(uint32_t*)0xE2900C38


#endif
