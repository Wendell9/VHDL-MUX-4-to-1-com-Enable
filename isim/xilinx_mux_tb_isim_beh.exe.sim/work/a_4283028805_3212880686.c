/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/MUX_2_Bits/mux_test.vhd";
extern char *IEEE_P_3620187407;



static void work_a_4283028805_3212880686_p_0(char *t0)
{
    char t10[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    int t11;
    unsigned int t12;
    unsigned char t13;

LAB0:    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 5757);
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 5759);
    t4 = (t0 + 3592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5761);
    t4 = (t0 + 3656);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5763);
    t4 = (t0 + 3720);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 5765);
    t4 = (t0 + 3848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(51, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2952);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 5720U);
    t4 = (t0 + 5767);
    t6 = (t10 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t11 = (1 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t12;
    t13 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t10);
    if (t13 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5799);
    t4 = (t0 + 3848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(56, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2952);
    xsi_process_wait(t2, t9);

LAB12:    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t7 = (t0 + 5769);
    xsi_report(t7, 30U, (unsigned char)2);
    goto LAB9;

LAB10:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 5720U);
    t4 = (t0 + 5801);
    t6 = (t10 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t11 = (1 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t12;
    t13 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t10);
    if (t13 == 0)
        goto LAB14;

LAB15:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5833);
    t4 = (t0 + 3848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(61, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2952);
    xsi_process_wait(t2, t9);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB11:    goto LAB10;

LAB13:    goto LAB11;

LAB14:    t7 = (t0 + 5803);
    xsi_report(t7, 30U, (unsigned char)2);
    goto LAB15;

LAB16:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 5720U);
    t4 = (t0 + 5835);
    t6 = (t10 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t11 = (1 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t12;
    t13 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t10);
    if (t13 == 0)
        goto LAB20;

LAB21:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5867);
    t4 = (t0 + 3848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(66, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2952);
    xsi_process_wait(t2, t9);

LAB24:    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    t7 = (t0 + 5837);
    xsi_report(t7, 30U, (unsigned char)2);
    goto LAB21;

LAB22:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 5720U);
    t4 = (t0 + 5869);
    t6 = (t10 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t11 = (1 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t12;
    t13 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t10);
    if (t13 == 0)
        goto LAB26;

LAB27:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(71, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2952);
    xsi_process_wait(t2, t9);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB23:    goto LAB22;

LAB25:    goto LAB23;

LAB26:    t7 = (t0 + 5871);
    xsi_report(t7, 30U, (unsigned char)2);
    goto LAB27;

LAB28:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 5720U);
    t4 = (t0 + 5901);
    t6 = (t10 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t11 = (1 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t12;
    t13 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t10);
    if (t13 == 0)
        goto LAB32;

LAB33:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 5935);
    xsi_report(t2, 33U, (unsigned char)0);
    xsi_set_current_line(76, ng0);

LAB36:    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    t7 = (t0 + 5903);
    xsi_report(t7, 32U, (unsigned char)2);
    goto LAB33;

LAB34:    goto LAB2;

LAB35:    goto LAB34;

LAB37:    goto LAB35;

}


extern void work_a_4283028805_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4283028805_3212880686_p_0};
	xsi_register_didat("work_a_4283028805_3212880686", "isim/xilinx_mux_tb_isim_beh.exe.sim/work/a_4283028805_3212880686.didat");
	xsi_register_executes(pe);
}
