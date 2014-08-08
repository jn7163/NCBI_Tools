/* $Id: soap_11_module.cpp 341797 2011-10-24 13:50:24Z gouriano $
 * ===========================================================================
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
 * File Description:
 *   This code was generated by application DATATOOL
 *   using the following specifications:
 *   'soap_11.xsd'.
 *
 * ATTENTION:
 *   Don't edit or commit this file into CVS as this file will
 *   be overridden (by DATATOOL) without warning!
 * ===========================================================================
 */

#include <ncbi_pch.hpp>
#include <serial/soap/soap_11_module.hpp>
#include <serial/soap/soap_body.hpp>
#include <serial/soap/soap_envelope.hpp>
#include <serial/soap/soap_fault.hpp>
#include <serial/soap/soap_header.hpp>

BEGIN_NCBI_SCOPE

void soap_11_RegisterModuleClasses(void)
{
    CSoapBody::GetTypeInfo();
    CSoapEnvelope::GetTypeInfo();
    CSoapFault::GetTypeInfo();
    CSoapHeader::GetTypeInfo();
}

END_NCBI_SCOPE
