//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         File 'option-goil_options-cocoa.m'                                          *
//                                             Generated by version 3.0.0                                              *
//                                          october 8th, 2014, at 16h30'22"                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//---------------------------------------------------------------------------------------------------------------------*

#import "option-goil_options-cocoa.h"
#import "OC_GGS_CommandLineOption.h"

//---------------------------------------------------------------------------------------------------------------------*

void enterOptionsFor_goil_5F_options (NSMutableArray * ioBoolOptionArray,
                                                       NSMutableArray * ioUIntOptionArray,
                                                       NSMutableArray * ioStringOptionArray) {
  OC_GGS_CommandLineOption * option ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"goil_options"
    identifier:@"generate_log"
    commandChar:108
    commandString:@"logfile"
    comment:@"generate a goil.log file containing the a log of the compilation"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"goil_options"
    identifier:@"warnMultiple"
    commandChar:0
    commandString:@"warn-multiple"
    comment:@"Emit a warning if an object not defined for the first time in the implementation does not have the same multiple attribute as in the first definition"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"goil_options"
    identifier:@"config"
    commandChar:99
    commandString:@"config"
    comment:@"Specifies the OIL config file used by goil"
    defaultValue:@""
  ] ;
  [ioStringOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"goil_options"
    identifier:@"project_dir"
    commandChar:112
    commandString:@"project"
    comment:@"Specifies project directory (by default, the project directory is the name of the oil file, without the .oil extension)"
    defaultValue:@""
  ] ;
  [ioStringOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"goil_options"
    identifier:@"target_platform"
    commandChar:116
    commandString:@"target"
    comment:@"Specifies target platform (avr, h8300h, libpcl, posix, posix_vp2, v850e, arm, c166, hcs12, ppc or cortex-m3)"
    defaultValue:@""
  ] ;
  [ioStringOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"goil_options"
    identifier:@"template_dir"
    commandChar:0
    commandString:@"templates"
    comment:@"Specifies template directory (used by goil for code generation)"
    defaultValue:@""
  ] ;
  [ioStringOptionArray addObject:option] ;
}

//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


