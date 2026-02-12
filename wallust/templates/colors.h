static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "{{ foreground }}", "{{ background }}" },
	[SchemeSel] = { "{{ background }}", "{{ color3 }}" },
	[SchemeOut] = { "{{ background }}", "{{ color3 }}" },
};
