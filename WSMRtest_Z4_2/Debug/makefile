################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include Project_Settings/Startup_Code/subdir.mk
-include Project_Settings/Linker_Files/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_SIZE += \
WSMRtest_Z4_2.siz \


# All Target
all: WSMRtest_Z4_2.elf secondary-outputs

dependents:
	-cd C:/Users/pmkru/workspaceS32DS.Power.2.1/WSMRtest/WSMRtest_Z7_0/Debug && $(MAKE) all
	-cd C:/Users/pmkru/workspaceS32DS.Power.2.1/WSMRtest/WSMRtest_Z7_1/Debug && $(MAKE) all

# Tool invocations
WSMRtest_Z4_2.elf: $(OBJS) C:/Users/pmkru/workspaceS32DS.Power.2.1/WSMRtest/WSMRtest_Z4_2/Project_Settings/Linker_Files/57xx_flash.ld $(OSPT) $(USER_OBJS) C:/Users/pmkru/workspaceS32DS.Power.2.1/WSMRtest/WSMRtest_Z7_0/Debug/WSMRtest_Z7_0.elf C:/Users/pmkru/workspaceS32DS.Power.2.1/WSMRtest/WSMRtest_Z7_1/Debug/WSMRtest_Z7_1.elf
	@echo 'Building target: $@'
	@echo 'Invoking: Standard S32DS C Linker'
	powerpc-eabivle-gcc -o "WSMRtest_Z4_2.elf" "@WSMRtest_Z4_2.args"  $(USER_OBJS) $(LIBS) $(OSPT)
	@echo 'Finished building target: $@'
	@echo ' '

WSMRtest_Z4_2.siz: WSMRtest_Z4_2.elf
	@echo 'Invoking: Standard S32DS Print Size'
	powerpc-eabivle-size --format=berkeley WSMRtest_Z4_2.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) ./*
	-@echo ' '

secondary-outputs: $(SECONDARY_SIZE)

.PHONY: all clean dependents
C:/Users/pmkru/workspaceS32DS.Power.2.1/WSMRtest/WSMRtest_Z7_0/Debug/WSMRtest_Z7_0.elf:
C:/Users/pmkru/workspaceS32DS.Power.2.1/WSMRtest/WSMRtest_Z7_1/Debug/WSMRtest_Z7_1.elf:

-include ../makefile.targets
