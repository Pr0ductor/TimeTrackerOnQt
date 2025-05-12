# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TimeTracker_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TimeTracker_autogen.dir\\ParseCache.txt"
  "Kanban\\CMakeFiles\\Kanban_autogen.dir\\AutogenUsed.txt"
  "Kanban\\CMakeFiles\\Kanban_autogen.dir\\ParseCache.txt"
  "Kanban\\Kanban_autogen"
  "Reminder\\CMakeFiles\\Reminder_autogen.dir\\AutogenUsed.txt"
  "Reminder\\CMakeFiles\\Reminder_autogen.dir\\ParseCache.txt"
  "Reminder\\Reminder_autogen"
  "StopWatch\\CMakeFiles\\StopWatch_autogen.dir\\AutogenUsed.txt"
  "StopWatch\\CMakeFiles\\StopWatch_autogen.dir\\ParseCache.txt"
  "StopWatch\\StopWatch_autogen"
  "TimeTracker_autogen"
  "Timer\\CMakeFiles\\Timer_autogen.dir\\AutogenUsed.txt"
  "Timer\\CMakeFiles\\Timer_autogen.dir\\ParseCache.txt"
  "Timer\\Timer_autogen"
  )
endif()
