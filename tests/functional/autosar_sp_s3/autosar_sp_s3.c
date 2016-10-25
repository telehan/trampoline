/**
 * @file autosar_sp_s3/autosar_sp_s3.c
 *
 * @section desc File description
 *
 * @section copyright Copyright
 *
 * Trampoline Test Suite
 *
 * Trampoline Test Suite is copyright (c) IRCCyN 2005-2007
 * Trampoline Test Suite is protected by the French intellectual property law.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; version 2
 * of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * @section infos File informations
 *
 * $Date$
 * $Rev$
 * $Author$
 * $URL$
 */

#include "Os.h"

TestRef AutosarSPTest_seq3_t1_instance1(void);
TestRef AutosarSPTest_seq3_t1_instance2(void);
TestRef AutosarSPTest_seq3_t2_instance(void);
TestRef AutosarSPTest_seq3_t3_instance(void);
TestRef AutosarSPTest_seq3_error_instance1(void);
TestRef AutosarSPTest_seq3_error_instance2(void);
TestRef AutosarSPTest_seq3_error_instance3(void);
TestRef AutosarSPTest_seq3_error_instance4(void);
TestRef AutosarSPTest_seq3_error_instance5(void);
TestRef AutosarSPTest_seq3_posttask_instance2(void);

StatusType error_status;
StatusType instance_error = 0;
StatusType instance_t1 = 0;
StatusType instance_post = 0;

int main(void)
{
	StartOS(OSDEFAULTAPPMODE);
	return 0;
}

void ErrorHook(StatusType error)
{
	error_status = error;
	
	instance_error++;
	switch (instance_error)
	{
		case 1 :
		{
			TestRunner_runTest(AutosarSPTest_seq3_error_instance1());
			break;
		}
		case 2 :
		{
			TestRunner_runTest(AutosarSPTest_seq3_error_instance2());
			break;
		}
		case 3 :
		{
			TestRunner_runTest(AutosarSPTest_seq3_error_instance3());
			break;
		}
		case 4 :
		{
			TestRunner_runTest(AutosarSPTest_seq3_error_instance4());
			break;
		}
		case 5 :
		{
			TestRunner_runTest(AutosarSPTest_seq3_error_instance5());
			break;
		}
		default:
		{
			stdimpl_print("Instance error");
			break;
		}
	}
}
void PostTaskHook(void)
{ 
	instance_post++;
	switch (instance_post)
	{
		case 2:
		{
			TestRunner_runTest(AutosarSPTest_seq3_posttask_instance2());
			break;
		}
		default:
		{
			
			break;
		}
	}
}

void ShutdownHook(StatusType error)
{ 
	TestRunner_end();
}

TASK(t1)
{
	instance_t1++;
	switch (instance_t1)
	{
		case 1 :
		{
			TestRunner_start();
			TestRunner_runTest(AutosarSPTest_seq3_t1_instance1());
			break;
		}
		case 2 :
		{
			TestRunner_runTest(AutosarSPTest_seq3_t1_instance2());
			ShutdownOS(E_OK);
			break;
		}
		default:
		{
			stdimpl_print("Instance error");
			break;
		}
	}
}

TASK(t2)
{
	TestRunner_runTest(AutosarSPTest_seq3_t2_instance());
}

TASK(t3)
{
	TestRunner_runTest(AutosarSPTest_seq3_t3_instance());
}

/* End of file autosar_sp_s3/autosar_sp_s3.c */
