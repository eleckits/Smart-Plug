/*****************************************************************************/
/*  Copyright (c) 2010 NXP B.V.  All rights are reserved.                    */
/*  Reproduction in whole or in part is prohibited without the prior         */
/*  written consent of the copyright owner.                                  */
/*                                                                           */
/*  This software and any compilation or derivative thereof is, and          */
/*  shall remain the proprietary information of NXP and is                   */
/*  highly confidential in nature. Any and all use hereof is restricted      */
/*  and is subject to the terms and conditions set forth in the              */
/*  software license agreement concluded with NXP B.V.                       */
/*                                                                           */
/*  Under no circumstances is this software or any derivative thereof        */
/*  to be combined with any Open Source Software, exposed to, or in any      */
/*  way licensed under any Open License Terms without the express prior      */
/*  written permission of the copyright owner.                               */
/*                                                                           */
/*  For the purpose of the above, the term Open Source Software means        */
/*  any software that is licensed under Open License Terms. Open             */
/*  License Terms means terms in any license that require as a               */
/*  condition of use, modification and/or distribution of a work             */
/*                                                                           */
/*  1. the making available of source code or other materials                */
/*     preferred for modification, or                                        */
/*                                                                           */
/*  2. the granting of permission for creating derivative                    */
/*     works, or                                                             */
/*                                                                           */
/*  3. the reproduction of certain notices or license terms                  */
/*     in derivative works or accompanying documentation, or                 */
/*                                                                           */
/*  4. the granting of a royalty-free license to any party                   */
/*     under Intellectual Property Rights                                    */
/*                                                                           */
/*  regarding the work and/or any work that contains, is combined with,      */
/*  requires or otherwise is based on the work.                              */
/*                                                                           */
/*  This software is provided for ease of recompilation only.                */
/*  Modification and reverse engineering of this software are strictly       */
/*  prohibited.                                                              */
/*                                                                           */
/*****************************************************************************/

#ifndef _MBUS_CRC_H
#define _MBUS_CRC_H

#define MBUS_DEV_OTHER         0
#define MBUS_DEV_ELECTRICITY   2
#define MBUS_DEV_RESERVED_PV   0x22

short calc_crc(unsigned char * ptr_data, int len);
void  create_mbus_header(char *buf, char data_len, char c_field, int own_id, char dev_ver, char dev_type);

#endif