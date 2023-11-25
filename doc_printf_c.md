 conversion_specifiers c[] = {
                {"%c", c_printf, 0},   /* Character specifier, set uppercase to 0 */
                {"%s", s_printf, 0},   /* String specifier, set uppercase to 0 */
                {"%%", pct_printf, 0}, /* Percent specifier, set uppercase to 0 */
                {"%i", di_printf, 0},  /* Integer specifier, set uppercase to 0 */
                {"%d", di_printf, 0},  /* Decimal specifier, set uppercase to 0 */
                {"%u", u_printf, 0},   /* Unsigned Integer specifier, set uppercase to 0 */
                {"%o", o_printf, 0},   /* Octal specifier, set uppercase to 0 */
                {"%x", x_printf, 0},   /* Hexadecimal specifier(lower), set uppercase to 0 */
                {"%X", X_printf, 1},   /* Hexadecimal specifier(upper), set uppercase to 1 */
                {"%p", p_printf, 0},   /* Pointer specifier, set uppercase to 0 */
                {"%r", r_printf, 0}    /* Unknown specifier, set uppercase to 0 */
        };
