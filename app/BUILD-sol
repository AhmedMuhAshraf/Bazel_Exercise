#the main rule to generate a binary executable for our app
cc_binary(
    name = "myapp",
    srcs = ["src/myapp.c"],
	deps = [
		":uart",
		"@stringLib//:string",
	]
)

cc_library(
	name = "uart",
	srcs = ["src/uart.c"],
	hdrs = ["inc/uart.h"],
	deps = ["//lib:console"],
	includes = ["inc/"],
)






#######################################################################################################################
# ## The below code is commented as platform usage requires additional configuraiton to point to c++ toolchain.
# ##constraint_setting(name = "job")
# ##constraint_value(name = "actor" , constraint_setting = "job")
# ##constraint_value(name = "hero" , constraint_setting = "job")
# ##
# ##
# ##constraint_setting(name = "movie")
# ##constraint_value(name = "piratesofcarrebian" , constraint_setting = "movie")
# ##constraint_value(name = "avengers" , constraint_setting = "movie")
# ##
# ##
# ##platform(
# ##	name = "actor-platform",
# ##	constraint_values = [ 
# ##		":actor", 
# ##		":piratesofcarrebian",
# ##		],
# ##)
# ##
# ##platform(
# ##	name = "hero-platform",
# ##	constraint_values = [ 
# ##		":hero",
# ##		":avengers",
# ##		],
# ##)