JobProvider = provider(fields = ['type'])

def _impl(ctx):
    return JobProvider(type = ctx.build_setting_value)

string_build_setting = rule(
    implementation = _impl,
    build_setting = config.string(flag = True)
)