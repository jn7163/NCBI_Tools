/*===========================================================================
*
*                            PUBLIC DOMAIN NOTICE
*               National Center for Biotechnology Information
*
*  This software/database is a "United States Government Work" under the
*  terms of the United States Copyright Act.  It was written as part of
*  the author's official duties as a United States Government employee and
*  thus cannot be copyrighted.  This software/database is freely available
*  to the public for use. The National Library of Medicine and the U.S.
*  Government have not placed any restriction on its use or reproduction.
*
*  Although all reasonable efforts have been taken to ensure the accuracy
*  and reliability of the software and data, the NLM and the U.S.
*  Government do not and cannot warrant the performance or results that
*  may be obtained by using this software or data. The NLM and the U.S.
*  Government disclaim all warranties, express or implied, including
*  warranties of performance, merchantability or fitness for any particular
*  purpose.
*
*  Please cite the author in any work or product based on this material.
*
* ===========================================================================
*
*/

#ifndef _h_definitions_
#define _h_definitions_

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _h_klib_defs_
#include <klib/defs.h>
#endif

#ifndef _h_klib_out_
#include <klib/out.h>
#endif

#ifndef _h_klib_rc_
#include <klib/rc.h>
#endif

#define DISP_RC(rc,err) (void)((rc == 0) ? 0 : LogErr( klogInt, rc, err ))

#define DISP_RC2(rc,err,succ) \
    (void)((rc != 0)? 0 : (succ) ? LOGMSG( klogInfo, succ ) : LogErr( klogInt, rc, err ))

#define KC_GZIP 1
#define KC_BZIP 2
#define KC_SZIP 3

#define KC_COMPRESS 1
#define KC_DECOMPRESS 2

#ifdef __cplusplus
}
#endif

#endif
