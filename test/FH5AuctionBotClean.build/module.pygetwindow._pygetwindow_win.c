/* Generated code for Python module 'pygetwindow._pygetwindow_win'
 * created by Nuitka version 1.8.4
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_pygetwindow$_pygetwindow_win" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pygetwindow$_pygetwindow_win;
PyDictObject *moduledict_pygetwindow$_pygetwindow_win;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[226];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[226];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pygetwindow._pygetwindow_win"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 226; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pygetwindow$_pygetwindow_win(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 226; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_73158b271121826e9add765d8456d6db;
static PyCodeObject *codeobj_14a5c96364be4db7686bb7acb2a99f1e;
static PyCodeObject *codeobj_2e4f0c20847868ac4a61116484fc1797;
static PyCodeObject *codeobj_d9d04815e355d1277b71e469b88bd865;
static PyCodeObject *codeobj_5ae4d55f4923bf961c1e48f9a0f5f367;
static PyCodeObject *codeobj_646b1896bd677fb2f8e27ea1f6605619;
static PyCodeObject *codeobj_d565645d236e8df912b90e70b4371c21;
static PyCodeObject *codeobj_bb9cb4934b1c9233cf8e20bff5bcac1d;
static PyCodeObject *codeobj_1a4d381996abac61846a43f5c9a83c44;
static PyCodeObject *codeobj_a14597c83452eb619b50db02b4a57823;
static PyCodeObject *codeobj_38d304e74a4e2d4e642f218211fd4abb;
static PyCodeObject *codeobj_a86759bedbd5f876599b615d3d54d449;
static PyCodeObject *codeobj_6782ae7e39410b798e7a6b1b4bc1ef68;
static PyCodeObject *codeobj_84b48ed9e0b282382f58990144aa9650;
static PyCodeObject *codeobj_e6313f7e0ea443afe7bec4970b36b631;
static PyCodeObject *codeobj_ab74c957b755adf98ea2e9fa72cdde1e;
static PyCodeObject *codeobj_be96ea8757769479d5fd6c4ceda18e6c;
static PyCodeObject *codeobj_ab6267bd7f14488140ff444f3bcdbd84;
static PyCodeObject *codeobj_34ae38e9d8b9c923298a64f5a520ff65;
static PyCodeObject *codeobj_303f01770203c768b4877c56a1579fb9;
static PyCodeObject *codeobj_e1fa28bf34e3af1624efb6aaefeb3a07;
static PyCodeObject *codeobj_1e6d8b40a3392aedf0f161c1c12f533f;
static PyCodeObject *codeobj_221be0a68337f2e3cb69b7c2d4a62a4a;
static PyCodeObject *codeobj_3375e4d6cdb7d42e2d960cb49c926dd9;
static PyCodeObject *codeobj_9f0f95e2e1c6cee7b3687ee98f1f67dc;
static PyCodeObject *codeobj_c9ee815fdcd2a848a8bb0ff3a4a60ec7;
static PyCodeObject *codeobj_a7fe7a18727e52c0ae21888b888def11;
static PyCodeObject *codeobj_d1de38648e07f9faa93522abfef66aa0;
static PyCodeObject *codeobj_90c772a326c21a2dcbee201f52ea792c;
static PyCodeObject *codeobj_52b87ee98b4b24d305d0621f76c916f2;
static PyCodeObject *codeobj_978bea761a85dc0cc8ba333d2d9e2094;
static PyCodeObject *codeobj_3cff3865863acfa74a5cb24df05472e9;
static PyCodeObject *codeobj_efbef175b67f011deca0f3de39290830;
static PyCodeObject *codeobj_2a41cefbad8dc02c2d907320869afe2c;
static PyCodeObject *codeobj_6833afd664be7d6b8b3c1b3f411b373d;
static PyCodeObject *codeobj_a5b0e8c7c6c0400290c37089aef9adab;
static PyCodeObject *codeobj_a6423d8be75eec1d40e094cd55a849e7;
static PyCodeObject *codeobj_27303f3df482591e524fcb187e685346;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[197]); CHECK_OBJECT(module_filename_obj);
    codeobj_73158b271121826e9add765d8456d6db = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[198], mod_consts[198], NULL, NULL, 0, 0, 0);
    codeobj_14a5c96364be4db7686bb7acb2a99f1e = MAKE_CODE_OBJECT(module_filename_obj, 32, 0, mod_consts[104], mod_consts[104], mod_consts[199], NULL, 0, 0, 0);
    codeobj_2e4f0c20847868ac4a61116484fc1797 = MAKE_CODE_OBJECT(module_filename_obj, 43, 0, mod_consts[63], mod_consts[63], mod_consts[199], NULL, 0, 0, 0);
    codeobj_d9d04815e355d1277b71e469b88bd865 = MAKE_CODE_OBJECT(module_filename_obj, 176, 0, mod_consts[35], mod_consts[35], mod_consts[199], NULL, 0, 0, 0);
    codeobj_5ae4d55f4923bf961c1e48f9a0f5f367 = MAKE_CODE_OBJECT(module_filename_obj, 206, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[159], mod_consts[159], mod_consts[200], NULL, 2, 0, 0);
    codeobj_646b1896bd677fb2f8e27ea1f6605619 = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[153], mod_consts[153], mod_consts[201], NULL, 2, 0, 0);
    codeobj_d565645d236e8df912b90e70b4371c21 = MAKE_CODE_OBJECT(module_filename_obj, 202, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[157], mod_consts[157], mod_consts[202], NULL, 1, 0, 0);
    codeobj_bb9cb4934b1c9233cf8e20bff5bcac1d = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[31], mod_consts[31], mod_consts[203], NULL, 1, 0, 0);
    codeobj_1a4d381996abac61846a43f5c9a83c44 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[51], mod_consts[51], mod_consts[204], NULL, 0, 0, 0);
    codeobj_a14597c83452eb619b50db02b4a57823 = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[155], mod_consts[155], mod_consts[205], NULL, 1, 0, 0);
    codeobj_38d304e74a4e2d4e642f218211fd4abb = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[68], mod_consts[68], mod_consts[206], NULL, 0, 0, 0);
    codeobj_a86759bedbd5f876599b615d3d54d449 = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[173], mod_consts[173], mod_consts[207], NULL, 1, 0, 0);
    codeobj_6782ae7e39410b798e7a6b1b4bc1ef68 = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[161], mod_consts[161], mod_consts[207], NULL, 1, 0, 0);
    codeobj_84b48ed9e0b282382f58990144aa9650 = MAKE_CODE_OBJECT(module_filename_obj, 308, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[195], mod_consts[195], mod_consts[208], NULL, 0, 0, 0);
    codeobj_e6313f7e0ea443afe7bec4970b36b631 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[0], mod_consts[0], mod_consts[209], mod_consts[210], 2, 0, 0);
    codeobj_ab74c957b755adf98ea2e9fa72cdde1e = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[0], mod_consts[0], mod_consts[211], mod_consts[212], 2, 0, 0);
    codeobj_be96ea8757769479d5fd6c4ceda18e6c = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[0], mod_consts[0], mod_consts[213], mod_consts[214], 2, 0, 0);
    codeobj_ab6267bd7f14488140ff444f3bcdbd84 = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[98], mod_consts[98], mod_consts[215], NULL, 0, 0, 0);
    codeobj_34ae38e9d8b9c923298a64f5a520ff65 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[149], mod_consts[149], mod_consts[216], NULL, 0, 0, 0);
    codeobj_303f01770203c768b4877c56a1579fb9 = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[152], mod_consts[152], NULL, NULL, 0, 0, 0);
    codeobj_e1fa28bf34e3af1624efb6aaefeb3a07 = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[41], mod_consts[41], mod_consts[217], NULL, 0, 0, 0);
    codeobj_1e6d8b40a3392aedf0f161c1c12f533f = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[150], mod_consts[150], mod_consts[218], NULL, 2, 0, 0);
    codeobj_221be0a68337f2e3cb69b7c2d4a62a4a = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[151], mod_consts[151], mod_consts[219], NULL, 1, 0, 0);
    codeobj_3375e4d6cdb7d42e2d960cb49c926dd9 = MAKE_CODE_OBJECT(module_filename_obj, 238, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[171], mod_consts[171], mod_consts[202], NULL, 1, 0, 0);
    codeobj_9f0f95e2e1c6cee7b3687ee98f1f67dc = MAKE_CODE_OBJECT(module_filename_obj, 288, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[190], mod_consts[190], mod_consts[202], NULL, 1, 0, 0);
    codeobj_c9ee815fdcd2a848a8bb0ff3a4a60ec7 = MAKE_CODE_OBJECT(module_filename_obj, 283, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[188], mod_consts[188], mod_consts[202], NULL, 1, 0, 0);
    codeobj_a7fe7a18727e52c0ae21888b888def11 = MAKE_CODE_OBJECT(module_filename_obj, 278, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[186], mod_consts[186], mod_consts[202], NULL, 1, 0, 0);
    codeobj_d1de38648e07f9faa93522abfef66aa0 = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[165], mod_consts[165], mod_consts[202], NULL, 1, 0, 0);
    codeobj_90c772a326c21a2dcbee201f52ea792c = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[163], mod_consts[163], mod_consts[202], NULL, 1, 0, 0);
    codeobj_52b87ee98b4b24d305d0621f76c916f2 = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[180], mod_consts[180], mod_consts[220], NULL, 3, 0, 0);
    codeobj_978bea761a85dc0cc8ba333d2d9e2094 = MAKE_CODE_OBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[183], mod_consts[183], mod_consts[221], NULL, 3, 0, 0);
    codeobj_3cff3865863acfa74a5cb24df05472e9 = MAKE_CODE_OBJECT(module_filename_obj, 249, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[175], mod_consts[175], mod_consts[222], NULL, 3, 0, 0);
    codeobj_efbef175b67f011deca0f3de39290830 = MAKE_CODE_OBJECT(module_filename_obj, 256, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[178], mod_consts[178], mod_consts[223], NULL, 3, 0, 0);
    codeobj_2a41cefbad8dc02c2d907320869afe2c = MAKE_CODE_OBJECT(module_filename_obj, 321, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[196], mod_consts[196], NULL, NULL, 0, 0, 0);
    codeobj_6833afd664be7d6b8b3c1b3f411b373d = MAKE_CODE_OBJECT(module_filename_obj, 230, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[167], mod_consts[167], mod_consts[202], NULL, 1, 0, 0);
    codeobj_a5b0e8c7c6c0400290c37089aef9adab = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[169], mod_consts[169], mod_consts[202], NULL, 1, 0, 0);
    codeobj_a6423d8be75eec1d40e094cd55a849e7 = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[53], mod_consts[53], mod_consts[224], NULL, 1, 0, 0);
    codeobj_27303f3df482591e524fcb187e685346 = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[193], mod_consts[193], mod_consts[202], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__10___init__();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__12___repr__();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__13___eq__();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__14_close();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__15_minimize();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__16_maximize();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__17_restore();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__18_show();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__19_hide();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__20_activate();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__21_resize();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__22_resizeTo();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__23_move();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__24_moveTo();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__25_isMinimized();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__26_isMaximized();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__27_isActive();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__28_title();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__29_visible();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__2__formatMessage();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__30_cursor();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__31_resolution();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows();


static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window(struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *var_titles = Nuitka_Cell_Empty();
    PyObject *var_foreach_window = NULL;
    struct Nuitka_FrameObject *frame_1a4d381996abac61846a43f5c9a83c44;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1a4d381996abac61846a43f5c9a83c44 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(Nuitka_Cell_GET(var_titles) == NULL);
        PyCell_SET(var_titles, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var_titles;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_2 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window(tmp_closure_1);

        assert(var_foreach_window == NULL);
        var_foreach_window = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_1a4d381996abac61846a43f5c9a83c44)) {
        Py_XDECREF(cache_frame_1a4d381996abac61846a43f5c9a83c44);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a4d381996abac61846a43f5c9a83c44 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a4d381996abac61846a43f5c9a83c44 = MAKE_FUNCTION_FRAME(tstate, codeobj_1a4d381996abac61846a43f5c9a83c44, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a4d381996abac61846a43f5c9a83c44->m_type_description == NULL);
    frame_1a4d381996abac61846a43f5c9a83c44 = cache_frame_1a4d381996abac61846a43f5c9a83c44;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1a4d381996abac61846a43f5c9a83c44);
    assert(Py_REFCNT(frame_1a4d381996abac61846a43f5c9a83c44) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_foreach_window);
        tmp_args_element_value_2 = var_foreach_window;
        frame_1a4d381996abac61846a43f5c9a83c44->m_frame.f_lineno = 66;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[4];
        frame_1a4d381996abac61846a43f5c9a83c44->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1a4d381996abac61846a43f5c9a83c44, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a4d381996abac61846a43f5c9a83c44->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a4d381996abac61846a43f5c9a83c44, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a4d381996abac61846a43f5c9a83c44,
        type_description_1,
        var_titles,
        var_foreach_window
    );


    // Release cached frame if used for exception.
    if (frame_1a4d381996abac61846a43f5c9a83c44 == cache_frame_1a4d381996abac61846a43f5c9a83c44) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a4d381996abac61846a43f5c9a83c44);
        cache_frame_1a4d381996abac61846a43f5c9a83c44 = NULL;
    }

    assertFrameObject(frame_1a4d381996abac61846a43f5c9a83c44);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(Nuitka_Cell_GET(var_titles));
    tmp_return_value = Nuitka_Cell_GET(var_titles);
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_titles);
    Py_DECREF(var_titles);
    var_titles = NULL;
    CHECK_OBJECT(var_foreach_window);
    Py_DECREF(var_foreach_window);
    var_foreach_window = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_titles);
    Py_DECREF(var_titles);
    var_titles = NULL;
    CHECK_OBJECT(var_foreach_window);
    Py_DECREF(var_foreach_window);
    var_foreach_window = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_hWnd = python_pars[0];
    PyObject *par_lParam = python_pars[1];
    PyObject *var_length = NULL;
    PyObject *var_buff = NULL;
    struct Nuitka_FrameObject *frame_ab74c957b755adf98ea2e9fa72cdde1e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ab74c957b755adf98ea2e9fa72cdde1e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ab74c957b755adf98ea2e9fa72cdde1e)) {
        Py_XDECREF(cache_frame_ab74c957b755adf98ea2e9fa72cdde1e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ab74c957b755adf98ea2e9fa72cdde1e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ab74c957b755adf98ea2e9fa72cdde1e = MAKE_FUNCTION_FRAME(tstate, codeobj_ab74c957b755adf98ea2e9fa72cdde1e, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ab74c957b755adf98ea2e9fa72cdde1e->m_type_description == NULL);
    frame_ab74c957b755adf98ea2e9fa72cdde1e = cache_frame_ab74c957b755adf98ea2e9fa72cdde1e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ab74c957b755adf98ea2e9fa72cdde1e);
    assert(Py_REFCNT(frame_ab74c957b755adf98ea2e9fa72cdde1e) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hWnd);
        tmp_args_element_value_1 = par_hWnd;
        frame_ab74c957b755adf98ea2e9fa72cdde1e->m_frame.f_lineno = 60;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 60;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hWnd);
        tmp_args_element_value_2 = par_hWnd;
        frame_ab74c957b755adf98ea2e9fa72cdde1e->m_frame.f_lineno = 61;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        assert(var_length == NULL);
        var_length = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_length);
        tmp_add_expr_left_1 = var_length;
        tmp_add_expr_right_1 = mod_consts[9];
        tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 62;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_ab74c957b755adf98ea2e9fa72cdde1e->m_frame.f_lineno = 62;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        assert(var_buff == NULL);
        var_buff = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hWnd);
        tmp_args_element_value_4 = par_hWnd;
        CHECK_OBJECT(var_buff);
        tmp_args_element_value_5 = var_buff;
        CHECK_OBJECT(var_length);
        tmp_add_expr_left_2 = var_length;
        tmp_add_expr_right_2 = mod_consts[9];
        tmp_args_element_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_ab74c957b755adf98ea2e9fa72cdde1e->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 64;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[12]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hWnd);
        tmp_tuple_element_1 = par_hWnd;
        tmp_args_element_value_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM0(tmp_args_element_value_7, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_buff);
            tmp_expression_value_3 = var_buff;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[13]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "ooooc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_7, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_ab74c957b755adf98ea2e9fa72cdde1e->m_frame.f_lineno = 64;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ab74c957b755adf98ea2e9fa72cdde1e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ab74c957b755adf98ea2e9fa72cdde1e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ab74c957b755adf98ea2e9fa72cdde1e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ab74c957b755adf98ea2e9fa72cdde1e,
        type_description_1,
        par_hWnd,
        par_lParam,
        var_length,
        var_buff,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_ab74c957b755adf98ea2e9fa72cdde1e == cache_frame_ab74c957b755adf98ea2e9fa72cdde1e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ab74c957b755adf98ea2e9fa72cdde1e);
        cache_frame_ab74c957b755adf98ea2e9fa72cdde1e = NULL;
    }

    assertFrameObject(frame_ab74c957b755adf98ea2e9fa72cdde1e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_length);
    var_length = NULL;
    Py_XDECREF(var_buff);
    var_buff = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_length);
    var_length = NULL;
    Py_XDECREF(var_buff);
    var_buff = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_hWnd);
    Py_DECREF(par_hWnd);
    CHECK_OBJECT(par_lParam);
    Py_DECREF(par_lParam);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hWnd);
    Py_DECREF(par_hWnd);
    CHECK_OBJECT(par_lParam);
    Py_DECREF(par_lParam);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__2__formatMessage(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_errorCode = python_pars[0];
    PyObject *var_lpBuffer = NULL;
    PyObject *var_msg = NULL;
    struct Nuitka_FrameObject *frame_bb9cb4934b1c9233cf8e20bff5bcac1d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_bb9cb4934b1c9233cf8e20bff5bcac1d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bb9cb4934b1c9233cf8e20bff5bcac1d)) {
        Py_XDECREF(cache_frame_bb9cb4934b1c9233cf8e20bff5bcac1d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bb9cb4934b1c9233cf8e20bff5bcac1d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bb9cb4934b1c9233cf8e20bff5bcac1d = MAKE_FUNCTION_FRAME(tstate, codeobj_bb9cb4934b1c9233cf8e20bff5bcac1d, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bb9cb4934b1c9233cf8e20bff5bcac1d->m_type_description == NULL);
    frame_bb9cb4934b1c9233cf8e20bff5bcac1d = cache_frame_bb9cb4934b1c9233cf8e20bff5bcac1d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bb9cb4934b1c9233cf8e20bff5bcac1d);
    assert(Py_REFCNT(frame_bb9cb4934b1c9233cf8e20bff5bcac1d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_bb9cb4934b1c9233cf8e20bff5bcac1d->m_frame.f_lineno = 81;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[15]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_lpBuffer == NULL);
        var_lpBuffer = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_bitor_expr_left_2;
        PyObject *tmp_bitor_expr_right_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[16]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[17]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[18]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_bitor_expr_left_2 == NULL)) {
            tmp_bitor_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_bitor_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_bitor_expr_right_2 == NULL)) {
            tmp_bitor_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_bitor_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
        if (tmp_bitor_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_bitor_expr_right_1 == NULL)) {
            tmp_bitor_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_bitor_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_left_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 84;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_errorCode);
        tmp_args_element_value_3 = par_errorCode;
        tmp_args_element_value_4 = mod_consts[4];
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 87;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[23]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 87;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 87;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lpBuffer);
        tmp_args_element_value_7 = var_lpBuffer;
        frame_bb9cb4934b1c9233cf8e20bff5bcac1d->m_frame.f_lineno = 87;
        tmp_args_element_value_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[24], tmp_args_element_value_7);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 87;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 87;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[15]);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 87;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_bb9cb4934b1c9233cf8e20bff5bcac1d->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_8};
            tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 87;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[4];
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 89;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_bb9cb4934b1c9233cf8e20bff5bcac1d->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_lpBuffer);
        tmp_expression_value_7 = var_lpBuffer;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[13]);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[25]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_bb9cb4934b1c9233cf8e20bff5bcac1d->m_frame.f_lineno = 90;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_msg == NULL);
        var_msg = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_11;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[16]);
        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[17]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lpBuffer);
        tmp_args_element_value_11 = var_lpBuffer;
        frame_bb9cb4934b1c9233cf8e20bff5bcac1d->m_frame.f_lineno = 91;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[26], tmp_args_element_value_11);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bb9cb4934b1c9233cf8e20bff5bcac1d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bb9cb4934b1c9233cf8e20bff5bcac1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bb9cb4934b1c9233cf8e20bff5bcac1d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bb9cb4934b1c9233cf8e20bff5bcac1d,
        type_description_1,
        par_errorCode,
        var_lpBuffer,
        var_msg
    );


    // Release cached frame if used for exception.
    if (frame_bb9cb4934b1c9233cf8e20bff5bcac1d == cache_frame_bb9cb4934b1c9233cf8e20bff5bcac1d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bb9cb4934b1c9233cf8e20bff5bcac1d);
        cache_frame_bb9cb4934b1c9233cf8e20bff5bcac1d = NULL;
    }

    assertFrameObject(frame_bb9cb4934b1c9233cf8e20bff5bcac1d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_msg);
    tmp_return_value = var_msg;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_lpBuffer);
    Py_DECREF(var_lpBuffer);
    var_lpBuffer = NULL;
    CHECK_OBJECT(var_msg);
    Py_DECREF(var_msg);
    var_msg = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_lpBuffer);
    var_lpBuffer = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_errorCode);
    Py_DECREF(par_errorCode);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_errorCode);
    Py_DECREF(par_errorCode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_errorCode = NULL;
    struct Nuitka_FrameObject *frame_38d304e74a4e2d4e642f218211fd4abb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_38d304e74a4e2d4e642f218211fd4abb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_38d304e74a4e2d4e642f218211fd4abb)) {
        Py_XDECREF(cache_frame_38d304e74a4e2d4e642f218211fd4abb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_38d304e74a4e2d4e642f218211fd4abb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_38d304e74a4e2d4e642f218211fd4abb = MAKE_FUNCTION_FRAME(tstate, codeobj_38d304e74a4e2d4e642f218211fd4abb, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_38d304e74a4e2d4e642f218211fd4abb->m_type_description == NULL);
    frame_38d304e74a4e2d4e642f218211fd4abb = cache_frame_38d304e74a4e2d4e642f218211fd4abb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_38d304e74a4e2d4e642f218211fd4abb);
    assert(Py_REFCNT(frame_38d304e74a4e2d4e642f218211fd4abb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[16]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[17]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_38d304e74a4e2d4e642f218211fd4abb->m_frame.f_lineno = 98;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[28]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_errorCode == NULL);
        var_errorCode = tmp_assign_source_1;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[30];
        CHECK_OBJECT(var_errorCode);
        tmp_tuple_element_1 = var_errorCode;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var_errorCode);
            tmp_args_element_value_2 = var_errorCode;
            frame_38d304e74a4e2d4e642f218211fd4abb->m_frame.f_lineno = 99;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_38d304e74a4e2d4e642f218211fd4abb->m_frame.f_lineno = 99;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 99;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_38d304e74a4e2d4e642f218211fd4abb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_38d304e74a4e2d4e642f218211fd4abb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_38d304e74a4e2d4e642f218211fd4abb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_38d304e74a4e2d4e642f218211fd4abb,
        type_description_1,
        var_errorCode
    );


    // Release cached frame if used for exception.
    if (frame_38d304e74a4e2d4e642f218211fd4abb == cache_frame_38d304e74a4e2d4e642f218211fd4abb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_38d304e74a4e2d4e642f218211fd4abb);
        cache_frame_38d304e74a4e2d4e642f218211fd4abb = NULL;
    }

    assertFrameObject(frame_38d304e74a4e2d4e642f218211fd4abb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_errorCode);
    var_errorCode = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_hWnd = NULL;
    struct Nuitka_FrameObject *frame_ab6267bd7f14488140ff444f3bcdbd84;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ab6267bd7f14488140ff444f3bcdbd84 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ab6267bd7f14488140ff444f3bcdbd84)) {
        Py_XDECREF(cache_frame_ab6267bd7f14488140ff444f3bcdbd84);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ab6267bd7f14488140ff444f3bcdbd84 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ab6267bd7f14488140ff444f3bcdbd84 = MAKE_FUNCTION_FRAME(tstate, codeobj_ab6267bd7f14488140ff444f3bcdbd84, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ab6267bd7f14488140ff444f3bcdbd84->m_type_description == NULL);
    frame_ab6267bd7f14488140ff444f3bcdbd84 = cache_frame_ab6267bd7f14488140ff444f3bcdbd84;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ab6267bd7f14488140ff444f3bcdbd84);
    assert(Py_REFCNT(frame_ab6267bd7f14488140ff444f3bcdbd84) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[16]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[33]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ab6267bd7f14488140ff444f3bcdbd84->m_frame.f_lineno = 104;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[34]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_hWnd == NULL);
        var_hWnd = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_hWnd);
        tmp_cmp_expr_left_1 = var_hWnd;
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hWnd);
        tmp_args_element_value_1 = var_hWnd;
        frame_ab6267bd7f14488140ff444f3bcdbd84->m_frame.f_lineno = 109;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ab6267bd7f14488140ff444f3bcdbd84, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ab6267bd7f14488140ff444f3bcdbd84->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ab6267bd7f14488140ff444f3bcdbd84, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ab6267bd7f14488140ff444f3bcdbd84,
        type_description_1,
        var_hWnd
    );


    // Release cached frame if used for exception.
    if (frame_ab6267bd7f14488140ff444f3bcdbd84 == cache_frame_ab6267bd7f14488140ff444f3bcdbd84) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ab6267bd7f14488140ff444f3bcdbd84);
        cache_frame_ab6267bd7f14488140ff444f3bcdbd84 = NULL;
    }

    assertFrameObject(frame_ab6267bd7f14488140ff444f3bcdbd84);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_hWnd);
    var_hWnd = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_hWnd);
    var_hWnd = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *var_activeWindowHwnd = Nuitka_Cell_Empty();
    PyObject *var_foreach_window = NULL;
    struct Nuitka_FrameObject *frame_34ae38e9d8b9c923298a64f5a520ff65;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_34ae38e9d8b9c923298a64f5a520ff65 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_34ae38e9d8b9c923298a64f5a520ff65)) {
        Py_XDECREF(cache_frame_34ae38e9d8b9c923298a64f5a520ff65);

#if _DEBUG_REFCOUNTS
        if (cache_frame_34ae38e9d8b9c923298a64f5a520ff65 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_34ae38e9d8b9c923298a64f5a520ff65 = MAKE_FUNCTION_FRAME(tstate, codeobj_34ae38e9d8b9c923298a64f5a520ff65, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_34ae38e9d8b9c923298a64f5a520ff65->m_type_description == NULL);
    frame_34ae38e9d8b9c923298a64f5a520ff65 = cache_frame_34ae38e9d8b9c923298a64f5a520ff65;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_34ae38e9d8b9c923298a64f5a520ff65);
    assert(Py_REFCNT(frame_34ae38e9d8b9c923298a64f5a520ff65) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[16]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[33]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        frame_34ae38e9d8b9c923298a64f5a520ff65->m_frame.f_lineno = 117;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[34]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_activeWindowHwnd) == NULL);
        PyCell_SET(var_activeWindowHwnd, tmp_assign_source_1);

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_activeWindowHwnd));
        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(var_activeWindowHwnd);
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var_activeWindowHwnd;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_2 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window(tmp_closure_1);

        assert(var_foreach_window == NULL);
        var_foreach_window = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_foreach_window);
        tmp_args_element_value_2 = var_foreach_window;
        frame_34ae38e9d8b9c923298a64f5a520ff65->m_frame.f_lineno = 130;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[4];
        frame_34ae38e9d8b9c923298a64f5a520ff65->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[38]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 132;
        type_description_1 = "co";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_34ae38e9d8b9c923298a64f5a520ff65, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_34ae38e9d8b9c923298a64f5a520ff65->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_34ae38e9d8b9c923298a64f5a520ff65, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_34ae38e9d8b9c923298a64f5a520ff65,
        type_description_1,
        var_activeWindowHwnd,
        var_foreach_window
    );


    // Release cached frame if used for exception.
    if (frame_34ae38e9d8b9c923298a64f5a520ff65 == cache_frame_34ae38e9d8b9c923298a64f5a520ff65) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_34ae38e9d8b9c923298a64f5a520ff65);
        cache_frame_34ae38e9d8b9c923298a64f5a520ff65 = NULL;
    }

    assertFrameObject(frame_34ae38e9d8b9c923298a64f5a520ff65);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_activeWindowHwnd);
    Py_DECREF(var_activeWindowHwnd);
    var_activeWindowHwnd = NULL;
    Py_XDECREF(var_foreach_window);
    var_foreach_window = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_activeWindowHwnd);
    Py_DECREF(var_activeWindowHwnd);
    var_activeWindowHwnd = NULL;
    Py_XDECREF(var_foreach_window);
    var_foreach_window = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_hWnd = python_pars[0];
    PyObject *par_lParam = python_pars[1];
    PyObject *var_length = NULL;
    PyObject *var_buff = NULL;
    struct Nuitka_FrameObject *frame_e6313f7e0ea443afe7bec4970b36b631;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e6313f7e0ea443afe7bec4970b36b631 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e6313f7e0ea443afe7bec4970b36b631)) {
        Py_XDECREF(cache_frame_e6313f7e0ea443afe7bec4970b36b631);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e6313f7e0ea443afe7bec4970b36b631 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e6313f7e0ea443afe7bec4970b36b631 = MAKE_FUNCTION_FRAME(tstate, codeobj_e6313f7e0ea443afe7bec4970b36b631, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e6313f7e0ea443afe7bec4970b36b631->m_type_description == NULL);
    frame_e6313f7e0ea443afe7bec4970b36b631 = cache_frame_e6313f7e0ea443afe7bec4970b36b631;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e6313f7e0ea443afe7bec4970b36b631);
    assert(Py_REFCNT(frame_e6313f7e0ea443afe7bec4970b36b631) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_hWnd);
        tmp_cmp_expr_left_1 = par_hWnd;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 124;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hWnd);
        tmp_args_element_value_1 = par_hWnd;
        frame_e6313f7e0ea443afe7bec4970b36b631->m_frame.f_lineno = 125;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        assert(var_length == NULL);
        var_length = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_length);
        tmp_add_expr_left_1 = var_length;
        tmp_add_expr_right_1 = mod_consts[9];
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 126;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_e6313f7e0ea443afe7bec4970b36b631->m_frame.f_lineno = 126;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        assert(var_buff == NULL);
        var_buff = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hWnd);
        tmp_args_element_value_3 = par_hWnd;
        CHECK_OBJECT(var_buff);
        tmp_args_element_value_4 = var_buff;
        CHECK_OBJECT(var_length);
        tmp_add_expr_left_2 = var_length;
        tmp_add_expr_right_2 = mod_consts[9];
        tmp_args_element_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_e6313f7e0ea443afe7bec4970b36b631->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_buff);
        tmp_expression_value_2 = var_buff;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[13]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_3);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e6313f7e0ea443afe7bec4970b36b631, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e6313f7e0ea443afe7bec4970b36b631->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e6313f7e0ea443afe7bec4970b36b631, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e6313f7e0ea443afe7bec4970b36b631,
        type_description_1,
        par_hWnd,
        par_lParam,
        var_length,
        var_buff,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_e6313f7e0ea443afe7bec4970b36b631 == cache_frame_e6313f7e0ea443afe7bec4970b36b631) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e6313f7e0ea443afe7bec4970b36b631);
        cache_frame_e6313f7e0ea443afe7bec4970b36b631 = NULL;
    }

    assertFrameObject(frame_e6313f7e0ea443afe7bec4970b36b631);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_length);
    var_length = NULL;
    Py_XDECREF(var_buff);
    var_buff = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_length);
    var_length = NULL;
    Py_XDECREF(var_buff);
    var_buff = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_hWnd);
    Py_DECREF(par_hWnd);
    CHECK_OBJECT(par_lParam);
    Py_DECREF(par_lParam);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hWnd);
    Py_DECREF(par_hWnd);
    CHECK_OBJECT(par_lParam);
    Py_DECREF(par_lParam);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    PyObject *var_windowsAtXY = NULL;
    PyObject *var_window = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_1e6d8b40a3392aedf0f161c1c12f533f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1e6d8b40a3392aedf0f161c1c12f533f = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_windowsAtXY == NULL);
        var_windowsAtXY = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_1e6d8b40a3392aedf0f161c1c12f533f)) {
        Py_XDECREF(cache_frame_1e6d8b40a3392aedf0f161c1c12f533f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e6d8b40a3392aedf0f161c1c12f533f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e6d8b40a3392aedf0f161c1c12f533f = MAKE_FUNCTION_FRAME(tstate, codeobj_1e6d8b40a3392aedf0f161c1c12f533f, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1e6d8b40a3392aedf0f161c1c12f533f->m_type_description == NULL);
    frame_1e6d8b40a3392aedf0f161c1c12f533f = cache_frame_1e6d8b40a3392aedf0f161c1c12f533f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1e6d8b40a3392aedf0f161c1c12f533f);
    assert(Py_REFCNT(frame_1e6d8b40a3392aedf0f161c1c12f533f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1e6d8b40a3392aedf0f161c1c12f533f->m_frame.f_lineno = 141;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 141;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_window;
            var_window = tmp_assign_source_4;
            Py_INCREF(var_window);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_4;
        int tmp_truth_name_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (par_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 142;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = par_x;
        if (par_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 142;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = par_y;
        CHECK_OBJECT(var_window);
        tmp_expression_value_1 = var_window;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[45]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_window);
        tmp_expression_value_2 = var_window;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[46]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 142;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_window);
        tmp_expression_value_3 = var_window;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[47]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 142;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_window);
        tmp_expression_value_4 = var_window;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[48]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 142;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_1e6d8b40a3392aedf0f161c1c12f533f->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 142;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_7;
        if (var_windowsAtXY == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 143;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = var_windowsAtXY;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[12]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_window);
        tmp_args_element_value_7 = var_window;
        frame_1e6d8b40a3392aedf0f161c1c12f533f->m_frame.f_lineno = 143;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 141;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_windowsAtXY == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 144;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_windowsAtXY;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1e6d8b40a3392aedf0f161c1c12f533f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e6d8b40a3392aedf0f161c1c12f533f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e6d8b40a3392aedf0f161c1c12f533f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e6d8b40a3392aedf0f161c1c12f533f,
        type_description_1,
        par_x,
        par_y,
        var_windowsAtXY,
        var_window
    );


    // Release cached frame if used for exception.
    if (frame_1e6d8b40a3392aedf0f161c1c12f533f == cache_frame_1e6d8b40a3392aedf0f161c1c12f533f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1e6d8b40a3392aedf0f161c1c12f533f);
        cache_frame_1e6d8b40a3392aedf0f161c1c12f533f = NULL;
    }

    assertFrameObject(frame_1e6d8b40a3392aedf0f161c1c12f533f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_windowsAtXY);
    var_windowsAtXY = NULL;
    Py_XDECREF(var_window);
    var_window = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_windowsAtXY);
    var_windowsAtXY = NULL;
    Py_XDECREF(var_window);
    var_window = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_title = python_pars[0];
    PyObject *var_hWndsAndTitles = NULL;
    PyObject *var_windowObjs = NULL;
    PyObject *var_hWnd = NULL;
    PyObject *var_winTitle = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_221be0a68337f2e3cb69b7c2d4a62a4a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_221be0a68337f2e3cb69b7c2d4a62a4a = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_221be0a68337f2e3cb69b7c2d4a62a4a)) {
        Py_XDECREF(cache_frame_221be0a68337f2e3cb69b7c2d4a62a4a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_221be0a68337f2e3cb69b7c2d4a62a4a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_221be0a68337f2e3cb69b7c2d4a62a4a = MAKE_FUNCTION_FRAME(tstate, codeobj_221be0a68337f2e3cb69b7c2d4a62a4a, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_221be0a68337f2e3cb69b7c2d4a62a4a->m_type_description == NULL);
    frame_221be0a68337f2e3cb69b7c2d4a62a4a = cache_frame_221be0a68337f2e3cb69b7c2d4a62a4a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_221be0a68337f2e3cb69b7c2d4a62a4a);
    assert(Py_REFCNT(frame_221be0a68337f2e3cb69b7c2d4a62a4a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_221be0a68337f2e3cb69b7c2d4a62a4a->m_frame.f_lineno = 149;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hWndsAndTitles == NULL);
        var_hWndsAndTitles = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        assert(var_windowObjs == NULL);
        var_windowObjs = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_hWndsAndTitles);
        tmp_iter_arg_1 = var_hWndsAndTitles;
        tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 151;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 151;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 151;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooo";
                    exception_lineno = 151;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[52];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 151;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_hWnd;
            var_hWnd = tmp_assign_source_8;
            Py_INCREF(var_hWnd);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_winTitle;
            var_winTitle = tmp_assign_source_9;
            Py_INCREF(var_winTitle);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        if (par_title == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 152;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = par_title;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[54]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_221be0a68337f2e3cb69b7c2d4a62a4a->m_frame.f_lineno = 152;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_winTitle);
        tmp_expression_value_2 = var_winTitle;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[54]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 152;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_221be0a68337f2e3cb69b7c2d4a62a4a->m_frame.f_lineno = 152;
        tmp_cmp_expr_right_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 152;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_2;
        if (var_windowObjs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 153;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = var_windowObjs;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[12]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 153;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_hWnd);
        tmp_args_element_value_2 = var_hWnd;
        frame_221be0a68337f2e3cb69b7c2d4a62a4a->m_frame.f_lineno = 153;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 153;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_221be0a68337f2e3cb69b7c2d4a62a4a->m_frame.f_lineno = 153;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 151;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_windowObjs == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 154;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_windowObjs;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_221be0a68337f2e3cb69b7c2d4a62a4a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_221be0a68337f2e3cb69b7c2d4a62a4a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_221be0a68337f2e3cb69b7c2d4a62a4a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_221be0a68337f2e3cb69b7c2d4a62a4a,
        type_description_1,
        par_title,
        var_hWndsAndTitles,
        var_windowObjs,
        var_hWnd,
        var_winTitle
    );


    // Release cached frame if used for exception.
    if (frame_221be0a68337f2e3cb69b7c2d4a62a4a == cache_frame_221be0a68337f2e3cb69b7c2d4a62a4a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_221be0a68337f2e3cb69b7c2d4a62a4a);
        cache_frame_221be0a68337f2e3cb69b7c2d4a62a4a = NULL;
    }

    assertFrameObject(frame_221be0a68337f2e3cb69b7c2d4a62a4a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_hWndsAndTitles);
    Py_DECREF(var_hWndsAndTitles);
    var_hWndsAndTitles = NULL;
    Py_XDECREF(var_windowObjs);
    var_windowObjs = NULL;
    Py_XDECREF(var_hWnd);
    var_hWnd = NULL;
    Py_XDECREF(var_winTitle);
    var_winTitle = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_hWndsAndTitles);
    var_hWndsAndTitles = NULL;
    Py_XDECREF(var_windowObjs);
    var_windowObjs = NULL;
    Py_XDECREF(var_hWnd);
    var_hWnd = NULL;
    Py_XDECREF(var_winTitle);
    var_winTitle = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *outline_0_var_window = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_303f01770203c768b4877c56a1579fb9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_303f01770203c768b4877c56a1579fb9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_303f01770203c768b4877c56a1579fb9)) {
        Py_XDECREF(cache_frame_303f01770203c768b4877c56a1579fb9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_303f01770203c768b4877c56a1579fb9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_303f01770203c768b4877c56a1579fb9 = MAKE_FUNCTION_FRAME(tstate, codeobj_303f01770203c768b4877c56a1579fb9, module_pygetwindow$_pygetwindow_win, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_303f01770203c768b4877c56a1579fb9->m_type_description == NULL);
    frame_303f01770203c768b4877c56a1579fb9 = cache_frame_303f01770203c768b4877c56a1579fb9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_303f01770203c768b4877c56a1579fb9);
    assert(Py_REFCNT(frame_303f01770203c768b4877c56a1579fb9) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_1;
        }
        frame_303f01770203c768b4877c56a1579fb9->m_frame.f_lineno = 160;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_1;
        }
        assert(tmp_listcomp_1__$0 == NULL);
        tmp_listcomp_1__$0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        assert(tmp_listcomp_1__contraction == NULL);
        tmp_listcomp_1__contraction = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        tmp_next_source_1 = tmp_listcomp_1__$0;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                exception_lineno = 160;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_window;
            outline_0_var_window = tmp_assign_source_4;
            Py_INCREF(outline_0_var_window);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        CHECK_OBJECT(outline_0_var_window);
        tmp_expression_value_1 = outline_0_var_window;
        tmp_append_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[53]);
        if (tmp_append_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_2;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 160;

        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    goto try_return_handler_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(outline_0_var_window);
    outline_0_var_window = NULL;
    goto outline_result_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(outline_0_var_window);
    outline_0_var_window = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_1:;
    exception_lineno = 160;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_303f01770203c768b4877c56a1579fb9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_303f01770203c768b4877c56a1579fb9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_303f01770203c768b4877c56a1579fb9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_303f01770203c768b4877c56a1579fb9,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_303f01770203c768b4877c56a1579fb9 == cache_frame_303f01770203c768b4877c56a1579fb9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_303f01770203c768b4877c56a1579fb9);
        cache_frame_303f01770203c768b4877c56a1579fb9 = NULL;
    }

    assertFrameObject(frame_303f01770203c768b4877c56a1579fb9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *var_windowObjs = Nuitka_Cell_Empty();
    PyObject *var_foreach_window = NULL;
    struct Nuitka_FrameObject *frame_e1fa28bf34e3af1624efb6aaefeb3a07;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e1fa28bf34e3af1624efb6aaefeb3a07 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(Nuitka_Cell_GET(var_windowObjs) == NULL);
        PyCell_SET(var_windowObjs, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var_windowObjs;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_2 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window(tmp_closure_1);

        assert(var_foreach_window == NULL);
        var_foreach_window = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_e1fa28bf34e3af1624efb6aaefeb3a07)) {
        Py_XDECREF(cache_frame_e1fa28bf34e3af1624efb6aaefeb3a07);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e1fa28bf34e3af1624efb6aaefeb3a07 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e1fa28bf34e3af1624efb6aaefeb3a07 = MAKE_FUNCTION_FRAME(tstate, codeobj_e1fa28bf34e3af1624efb6aaefeb3a07, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e1fa28bf34e3af1624efb6aaefeb3a07->m_type_description == NULL);
    frame_e1fa28bf34e3af1624efb6aaefeb3a07 = cache_frame_e1fa28bf34e3af1624efb6aaefeb3a07;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e1fa28bf34e3af1624efb6aaefeb3a07);
    assert(Py_REFCNT(frame_e1fa28bf34e3af1624efb6aaefeb3a07) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_foreach_window);
        tmp_args_element_value_2 = var_foreach_window;
        frame_e1fa28bf34e3af1624efb6aaefeb3a07->m_frame.f_lineno = 171;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[4];
        frame_e1fa28bf34e3af1624efb6aaefeb3a07->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e1fa28bf34e3af1624efb6aaefeb3a07, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e1fa28bf34e3af1624efb6aaefeb3a07->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e1fa28bf34e3af1624efb6aaefeb3a07, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e1fa28bf34e3af1624efb6aaefeb3a07,
        type_description_1,
        var_windowObjs,
        var_foreach_window
    );


    // Release cached frame if used for exception.
    if (frame_e1fa28bf34e3af1624efb6aaefeb3a07 == cache_frame_e1fa28bf34e3af1624efb6aaefeb3a07) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e1fa28bf34e3af1624efb6aaefeb3a07);
        cache_frame_e1fa28bf34e3af1624efb6aaefeb3a07 = NULL;
    }

    assertFrameObject(frame_e1fa28bf34e3af1624efb6aaefeb3a07);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(Nuitka_Cell_GET(var_windowObjs));
    tmp_return_value = Nuitka_Cell_GET(var_windowObjs);
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_windowObjs);
    Py_DECREF(var_windowObjs);
    var_windowObjs = NULL;
    CHECK_OBJECT(var_foreach_window);
    Py_DECREF(var_foreach_window);
    var_foreach_window = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_windowObjs);
    Py_DECREF(var_windowObjs);
    var_windowObjs = NULL;
    CHECK_OBJECT(var_foreach_window);
    Py_DECREF(var_foreach_window);
    var_foreach_window = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_hWnd = python_pars[0];
    PyObject *par_lParam = python_pars[1];
    struct Nuitka_FrameObject *frame_be96ea8757769479d5fd6c4ceda18e6c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_be96ea8757769479d5fd6c4ceda18e6c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_be96ea8757769479d5fd6c4ceda18e6c)) {
        Py_XDECREF(cache_frame_be96ea8757769479d5fd6c4ceda18e6c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_be96ea8757769479d5fd6c4ceda18e6c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_be96ea8757769479d5fd6c4ceda18e6c = MAKE_FUNCTION_FRAME(tstate, codeobj_be96ea8757769479d5fd6c4ceda18e6c, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_be96ea8757769479d5fd6c4ceda18e6c->m_type_description == NULL);
    frame_be96ea8757769479d5fd6c4ceda18e6c = cache_frame_be96ea8757769479d5fd6c4ceda18e6c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_be96ea8757769479d5fd6c4ceda18e6c);
    assert(Py_REFCNT(frame_be96ea8757769479d5fd6c4ceda18e6c) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[16]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[33]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hWnd);
        tmp_args_element_value_1 = par_hWnd;
        frame_be96ea8757769479d5fd6c4ceda18e6c->m_frame.f_lineno = 168;
        tmp_cmp_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[60], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 169;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[12]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 169;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_hWnd);
        tmp_args_element_value_3 = par_hWnd;
        frame_be96ea8757769479d5fd6c4ceda18e6c->m_frame.f_lineno = 169;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 169;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_be96ea8757769479d5fd6c4ceda18e6c->m_frame.f_lineno = 169;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_be96ea8757769479d5fd6c4ceda18e6c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_be96ea8757769479d5fd6c4ceda18e6c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_be96ea8757769479d5fd6c4ceda18e6c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_be96ea8757769479d5fd6c4ceda18e6c,
        type_description_1,
        par_hWnd,
        par_lParam,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_be96ea8757769479d5fd6c4ceda18e6c == cache_frame_be96ea8757769479d5fd6c4ceda18e6c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_be96ea8757769479d5fd6c4ceda18e6c);
        cache_frame_be96ea8757769479d5fd6c4ceda18e6c = NULL;
    }

    assertFrameObject(frame_be96ea8757769479d5fd6c4ceda18e6c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_hWnd);
    Py_DECREF(par_hWnd);
    CHECK_OBJECT(par_lParam);
    Py_DECREF(par_lParam);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hWnd);
    Py_DECREF(par_hWnd);
    CHECK_OBJECT(par_lParam);
    Py_DECREF(par_lParam);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__10___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_hWnd = python_pars[1];
    struct Nuitka_FrameObject *frame_646b1896bd677fb2f8e27ea1f6605619;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_646b1896bd677fb2f8e27ea1f6605619 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_646b1896bd677fb2f8e27ea1f6605619)) {
        Py_XDECREF(cache_frame_646b1896bd677fb2f8e27ea1f6605619);

#if _DEBUG_REFCOUNTS
        if (cache_frame_646b1896bd677fb2f8e27ea1f6605619 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_646b1896bd677fb2f8e27ea1f6605619 = MAKE_FUNCTION_FRAME(tstate, codeobj_646b1896bd677fb2f8e27ea1f6605619, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_646b1896bd677fb2f8e27ea1f6605619->m_type_description == NULL);
    frame_646b1896bd677fb2f8e27ea1f6605619 = cache_frame_646b1896bd677fb2f8e27ea1f6605619;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_646b1896bd677fb2f8e27ea1f6605619);
    assert(Py_REFCNT(frame_646b1896bd677fb2f8e27ea1f6605619) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_hWnd);
        tmp_assattr_value_1 = par_hWnd;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[61], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_646b1896bd677fb2f8e27ea1f6605619->m_frame.f_lineno = 179;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[62]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_646b1896bd677fb2f8e27ea1f6605619, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_646b1896bd677fb2f8e27ea1f6605619->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_646b1896bd677fb2f8e27ea1f6605619, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_646b1896bd677fb2f8e27ea1f6605619,
        type_description_1,
        par_self,
        par_hWnd
    );


    // Release cached frame if used for exception.
    if (frame_646b1896bd677fb2f8e27ea1f6605619 == cache_frame_646b1896bd677fb2f8e27ea1f6605619) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_646b1896bd677fb2f8e27ea1f6605619);
        cache_frame_646b1896bd677fb2f8e27ea1f6605619 = NULL;
    }

    assertFrameObject(frame_646b1896bd677fb2f8e27ea1f6605619);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_hWnd);
    Py_DECREF(par_hWnd);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_hWnd);
    Py_DECREF(par_hWnd);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_rect = NULL;
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_a14597c83452eb619b50db02b4a57823;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_a14597c83452eb619b50db02b4a57823 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a14597c83452eb619b50db02b4a57823)) {
        Py_XDECREF(cache_frame_a14597c83452eb619b50db02b4a57823);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a14597c83452eb619b50db02b4a57823 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a14597c83452eb619b50db02b4a57823 = MAKE_FUNCTION_FRAME(tstate, codeobj_a14597c83452eb619b50db02b4a57823, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a14597c83452eb619b50db02b4a57823->m_type_description == NULL);
    frame_a14597c83452eb619b50db02b4a57823 = cache_frame_a14597c83452eb619b50db02b4a57823;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a14597c83452eb619b50db02b4a57823);
    assert(Py_REFCNT(frame_a14597c83452eb619b50db02b4a57823) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_a14597c83452eb619b50db02b4a57823->m_frame.f_lineno = 194;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_rect == NULL);
        var_rect = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[16]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[33]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[64]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[61]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 195;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 195;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rect);
        tmp_args_element_value_3 = var_rect;
        frame_a14597c83452eb619b50db02b4a57823->m_frame.f_lineno = 195;
        tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[24], tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 195;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_a14597c83452eb619b50db02b4a57823->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_result);
        tmp_cmp_expr_left_1 = var_result;
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_8;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rect);
        tmp_expression_value_5 = var_rect;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[45]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rect);
        tmp_expression_value_6 = var_rect;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[46]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 197;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rect);
        tmp_expression_value_7 = var_rect;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[66]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 197;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rect);
        tmp_expression_value_8 = var_rect;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[67]);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 197;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_a14597c83452eb619b50db02b4a57823->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_1;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_a14597c83452eb619b50db02b4a57823->m_frame.f_lineno = 199;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a14597c83452eb619b50db02b4a57823, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a14597c83452eb619b50db02b4a57823->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a14597c83452eb619b50db02b4a57823, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a14597c83452eb619b50db02b4a57823,
        type_description_1,
        par_self,
        var_rect,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_a14597c83452eb619b50db02b4a57823 == cache_frame_a14597c83452eb619b50db02b4a57823) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a14597c83452eb619b50db02b4a57823);
        cache_frame_a14597c83452eb619b50db02b4a57823 = NULL;
    }

    assertFrameObject(frame_a14597c83452eb619b50db02b4a57823);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_rect);
    Py_DECREF(var_rect);
    var_rect = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_rect);
    var_rect = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__12___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d565645d236e8df912b90e70b4371c21;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d565645d236e8df912b90e70b4371c21 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d565645d236e8df912b90e70b4371c21)) {
        Py_XDECREF(cache_frame_d565645d236e8df912b90e70b4371c21);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d565645d236e8df912b90e70b4371c21 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d565645d236e8df912b90e70b4371c21 = MAKE_FUNCTION_FRAME(tstate, codeobj_d565645d236e8df912b90e70b4371c21, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d565645d236e8df912b90e70b4371c21->m_type_description == NULL);
    frame_d565645d236e8df912b90e70b4371c21 = cache_frame_d565645d236e8df912b90e70b4371c21;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d565645d236e8df912b90e70b4371c21);
    assert(Py_REFCNT(frame_d565645d236e8df912b90e70b4371c21) == 2);

    // Framed code:
    {
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_mod_expr_left_1 = mod_consts[70];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[71]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[61]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d565645d236e8df912b90e70b4371c21, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d565645d236e8df912b90e70b4371c21->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d565645d236e8df912b90e70b4371c21, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d565645d236e8df912b90e70b4371c21,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d565645d236e8df912b90e70b4371c21 == cache_frame_d565645d236e8df912b90e70b4371c21) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d565645d236e8df912b90e70b4371c21);
        cache_frame_d565645d236e8df912b90e70b4371c21 = NULL;
    }

    assertFrameObject(frame_d565645d236e8df912b90e70b4371c21);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__13___eq__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_5ae4d55f4923bf961c1e48f9a0f5f367;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5ae4d55f4923bf961c1e48f9a0f5f367 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5ae4d55f4923bf961c1e48f9a0f5f367)) {
        Py_XDECREF(cache_frame_5ae4d55f4923bf961c1e48f9a0f5f367);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5ae4d55f4923bf961c1e48f9a0f5f367 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5ae4d55f4923bf961c1e48f9a0f5f367 = MAKE_FUNCTION_FRAME(tstate, codeobj_5ae4d55f4923bf961c1e48f9a0f5f367, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5ae4d55f4923bf961c1e48f9a0f5f367->m_type_description == NULL);
    frame_5ae4d55f4923bf961c1e48f9a0f5f367 = cache_frame_5ae4d55f4923bf961c1e48f9a0f5f367;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5ae4d55f4923bf961c1e48f9a0f5f367);
    assert(Py_REFCNT(frame_5ae4d55f4923bf961c1e48f9a0f5f367) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_other);
        tmp_isinstance_inst_1 = par_other;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[61]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_expression_value_2 = par_other;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[61]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_and_right_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5ae4d55f4923bf961c1e48f9a0f5f367, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5ae4d55f4923bf961c1e48f9a0f5f367->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5ae4d55f4923bf961c1e48f9a0f5f367, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5ae4d55f4923bf961c1e48f9a0f5f367,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_5ae4d55f4923bf961c1e48f9a0f5f367 == cache_frame_5ae4d55f4923bf961c1e48f9a0f5f367) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5ae4d55f4923bf961c1e48f9a0f5f367);
        cache_frame_5ae4d55f4923bf961c1e48f9a0f5f367 = NULL;
    }

    assertFrameObject(frame_5ae4d55f4923bf961c1e48f9a0f5f367);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__14_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_6782ae7e39410b798e7a6b1b4bc1ef68;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6782ae7e39410b798e7a6b1b4bc1ef68 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6782ae7e39410b798e7a6b1b4bc1ef68)) {
        Py_XDECREF(cache_frame_6782ae7e39410b798e7a6b1b4bc1ef68);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6782ae7e39410b798e7a6b1b4bc1ef68 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6782ae7e39410b798e7a6b1b4bc1ef68 = MAKE_FUNCTION_FRAME(tstate, codeobj_6782ae7e39410b798e7a6b1b4bc1ef68, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6782ae7e39410b798e7a6b1b4bc1ef68->m_type_description == NULL);
    frame_6782ae7e39410b798e7a6b1b4bc1ef68 = cache_frame_6782ae7e39410b798e7a6b1b4bc1ef68;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6782ae7e39410b798e7a6b1b4bc1ef68);
    assert(Py_REFCNT(frame_6782ae7e39410b798e7a6b1b4bc1ef68) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[16]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[33]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[72]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[61]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[4];
        tmp_args_element_value_4 = mod_consts[4];
        frame_6782ae7e39410b798e7a6b1b4bc1ef68->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_result);
        tmp_cmp_expr_left_1 = var_result;
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_6782ae7e39410b798e7a6b1b4bc1ef68->m_frame.f_lineno = 217;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6782ae7e39410b798e7a6b1b4bc1ef68, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6782ae7e39410b798e7a6b1b4bc1ef68->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6782ae7e39410b798e7a6b1b4bc1ef68, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6782ae7e39410b798e7a6b1b4bc1ef68,
        type_description_1,
        par_self,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_6782ae7e39410b798e7a6b1b4bc1ef68 == cache_frame_6782ae7e39410b798e7a6b1b4bc1ef68) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6782ae7e39410b798e7a6b1b4bc1ef68);
        cache_frame_6782ae7e39410b798e7a6b1b4bc1ef68 = NULL;
    }

    assertFrameObject(frame_6782ae7e39410b798e7a6b1b4bc1ef68);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__15_minimize(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_90c772a326c21a2dcbee201f52ea792c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_90c772a326c21a2dcbee201f52ea792c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_90c772a326c21a2dcbee201f52ea792c)) {
        Py_XDECREF(cache_frame_90c772a326c21a2dcbee201f52ea792c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_90c772a326c21a2dcbee201f52ea792c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_90c772a326c21a2dcbee201f52ea792c = MAKE_FUNCTION_FRAME(tstate, codeobj_90c772a326c21a2dcbee201f52ea792c, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_90c772a326c21a2dcbee201f52ea792c->m_type_description == NULL);
    frame_90c772a326c21a2dcbee201f52ea792c = cache_frame_90c772a326c21a2dcbee201f52ea792c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_90c772a326c21a2dcbee201f52ea792c);
    assert(Py_REFCNT(frame_90c772a326c21a2dcbee201f52ea792c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[16]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[33]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[75]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[61]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 222;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 222;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_90c772a326c21a2dcbee201f52ea792c->m_frame.f_lineno = 222;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_90c772a326c21a2dcbee201f52ea792c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_90c772a326c21a2dcbee201f52ea792c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_90c772a326c21a2dcbee201f52ea792c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_90c772a326c21a2dcbee201f52ea792c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_90c772a326c21a2dcbee201f52ea792c == cache_frame_90c772a326c21a2dcbee201f52ea792c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_90c772a326c21a2dcbee201f52ea792c);
        cache_frame_90c772a326c21a2dcbee201f52ea792c = NULL;
    }

    assertFrameObject(frame_90c772a326c21a2dcbee201f52ea792c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__16_maximize(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d1de38648e07f9faa93522abfef66aa0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d1de38648e07f9faa93522abfef66aa0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d1de38648e07f9faa93522abfef66aa0)) {
        Py_XDECREF(cache_frame_d1de38648e07f9faa93522abfef66aa0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d1de38648e07f9faa93522abfef66aa0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d1de38648e07f9faa93522abfef66aa0 = MAKE_FUNCTION_FRAME(tstate, codeobj_d1de38648e07f9faa93522abfef66aa0, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d1de38648e07f9faa93522abfef66aa0->m_type_description == NULL);
    frame_d1de38648e07f9faa93522abfef66aa0 = cache_frame_d1de38648e07f9faa93522abfef66aa0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d1de38648e07f9faa93522abfef66aa0);
    assert(Py_REFCNT(frame_d1de38648e07f9faa93522abfef66aa0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[16]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[33]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[75]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[61]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 227;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[78]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 227;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d1de38648e07f9faa93522abfef66aa0->m_frame.f_lineno = 227;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d1de38648e07f9faa93522abfef66aa0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d1de38648e07f9faa93522abfef66aa0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d1de38648e07f9faa93522abfef66aa0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d1de38648e07f9faa93522abfef66aa0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d1de38648e07f9faa93522abfef66aa0 == cache_frame_d1de38648e07f9faa93522abfef66aa0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d1de38648e07f9faa93522abfef66aa0);
        cache_frame_d1de38648e07f9faa93522abfef66aa0 = NULL;
    }

    assertFrameObject(frame_d1de38648e07f9faa93522abfef66aa0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__17_restore(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6833afd664be7d6b8b3c1b3f411b373d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6833afd664be7d6b8b3c1b3f411b373d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6833afd664be7d6b8b3c1b3f411b373d)) {
        Py_XDECREF(cache_frame_6833afd664be7d6b8b3c1b3f411b373d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6833afd664be7d6b8b3c1b3f411b373d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6833afd664be7d6b8b3c1b3f411b373d = MAKE_FUNCTION_FRAME(tstate, codeobj_6833afd664be7d6b8b3c1b3f411b373d, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6833afd664be7d6b8b3c1b3f411b373d->m_type_description == NULL);
    frame_6833afd664be7d6b8b3c1b3f411b373d = cache_frame_6833afd664be7d6b8b3c1b3f411b373d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6833afd664be7d6b8b3c1b3f411b373d);
    assert(Py_REFCNT(frame_6833afd664be7d6b8b3c1b3f411b373d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[16]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[33]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[75]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[61]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 232;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 232;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_6833afd664be7d6b8b3c1b3f411b373d->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6833afd664be7d6b8b3c1b3f411b373d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6833afd664be7d6b8b3c1b3f411b373d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6833afd664be7d6b8b3c1b3f411b373d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6833afd664be7d6b8b3c1b3f411b373d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6833afd664be7d6b8b3c1b3f411b373d == cache_frame_6833afd664be7d6b8b3c1b3f411b373d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6833afd664be7d6b8b3c1b3f411b373d);
        cache_frame_6833afd664be7d6b8b3c1b3f411b373d = NULL;
    }

    assertFrameObject(frame_6833afd664be7d6b8b3c1b3f411b373d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__18_show(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a5b0e8c7c6c0400290c37089aef9adab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a5b0e8c7c6c0400290c37089aef9adab = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a5b0e8c7c6c0400290c37089aef9adab)) {
        Py_XDECREF(cache_frame_a5b0e8c7c6c0400290c37089aef9adab);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a5b0e8c7c6c0400290c37089aef9adab == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a5b0e8c7c6c0400290c37089aef9adab = MAKE_FUNCTION_FRAME(tstate, codeobj_a5b0e8c7c6c0400290c37089aef9adab, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a5b0e8c7c6c0400290c37089aef9adab->m_type_description == NULL);
    frame_a5b0e8c7c6c0400290c37089aef9adab = cache_frame_a5b0e8c7c6c0400290c37089aef9adab;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a5b0e8c7c6c0400290c37089aef9adab);
    assert(Py_REFCNT(frame_a5b0e8c7c6c0400290c37089aef9adab) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[16]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[33]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[75]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[61]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 236;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 236;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a5b0e8c7c6c0400290c37089aef9adab->m_frame.f_lineno = 236;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a5b0e8c7c6c0400290c37089aef9adab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a5b0e8c7c6c0400290c37089aef9adab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a5b0e8c7c6c0400290c37089aef9adab, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a5b0e8c7c6c0400290c37089aef9adab,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a5b0e8c7c6c0400290c37089aef9adab == cache_frame_a5b0e8c7c6c0400290c37089aef9adab) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a5b0e8c7c6c0400290c37089aef9adab);
        cache_frame_a5b0e8c7c6c0400290c37089aef9adab = NULL;
    }

    assertFrameObject(frame_a5b0e8c7c6c0400290c37089aef9adab);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__19_hide(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3375e4d6cdb7d42e2d960cb49c926dd9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3375e4d6cdb7d42e2d960cb49c926dd9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3375e4d6cdb7d42e2d960cb49c926dd9)) {
        Py_XDECREF(cache_frame_3375e4d6cdb7d42e2d960cb49c926dd9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3375e4d6cdb7d42e2d960cb49c926dd9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3375e4d6cdb7d42e2d960cb49c926dd9 = MAKE_FUNCTION_FRAME(tstate, codeobj_3375e4d6cdb7d42e2d960cb49c926dd9, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3375e4d6cdb7d42e2d960cb49c926dd9->m_type_description == NULL);
    frame_3375e4d6cdb7d42e2d960cb49c926dd9 = cache_frame_3375e4d6cdb7d42e2d960cb49c926dd9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3375e4d6cdb7d42e2d960cb49c926dd9);
    assert(Py_REFCNT(frame_3375e4d6cdb7d42e2d960cb49c926dd9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[16]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[33]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[75]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[61]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 240;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 240;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3375e4d6cdb7d42e2d960cb49c926dd9->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3375e4d6cdb7d42e2d960cb49c926dd9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3375e4d6cdb7d42e2d960cb49c926dd9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3375e4d6cdb7d42e2d960cb49c926dd9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3375e4d6cdb7d42e2d960cb49c926dd9,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3375e4d6cdb7d42e2d960cb49c926dd9 == cache_frame_3375e4d6cdb7d42e2d960cb49c926dd9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3375e4d6cdb7d42e2d960cb49c926dd9);
        cache_frame_3375e4d6cdb7d42e2d960cb49c926dd9 = NULL;
    }

    assertFrameObject(frame_3375e4d6cdb7d42e2d960cb49c926dd9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__20_activate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_a86759bedbd5f876599b615d3d54d449;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_a86759bedbd5f876599b615d3d54d449 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a86759bedbd5f876599b615d3d54d449)) {
        Py_XDECREF(cache_frame_a86759bedbd5f876599b615d3d54d449);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a86759bedbd5f876599b615d3d54d449 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a86759bedbd5f876599b615d3d54d449 = MAKE_FUNCTION_FRAME(tstate, codeobj_a86759bedbd5f876599b615d3d54d449, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a86759bedbd5f876599b615d3d54d449->m_type_description == NULL);
    frame_a86759bedbd5f876599b615d3d54d449 = cache_frame_a86759bedbd5f876599b615d3d54d449;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a86759bedbd5f876599b615d3d54d449);
    assert(Py_REFCNT(frame_a86759bedbd5f876599b615d3d54d449) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[16]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[33]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[86]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[61]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 244;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a86759bedbd5f876599b615d3d54d449->m_frame.f_lineno = 244;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_result);
        tmp_cmp_expr_left_1 = var_result;
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a86759bedbd5f876599b615d3d54d449->m_frame.f_lineno = 246;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a86759bedbd5f876599b615d3d54d449, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a86759bedbd5f876599b615d3d54d449->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a86759bedbd5f876599b615d3d54d449, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a86759bedbd5f876599b615d3d54d449,
        type_description_1,
        par_self,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_a86759bedbd5f876599b615d3d54d449 == cache_frame_a86759bedbd5f876599b615d3d54d449) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a86759bedbd5f876599b615d3d54d449);
        cache_frame_a86759bedbd5f876599b615d3d54d449 = NULL;
    }

    assertFrameObject(frame_a86759bedbd5f876599b615d3d54d449);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__21_resize(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_widthOffset = python_pars[1];
    PyObject *par_heightOffset = python_pars[2];
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_3cff3865863acfa74a5cb24df05472e9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3cff3865863acfa74a5cb24df05472e9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3cff3865863acfa74a5cb24df05472e9)) {
        Py_XDECREF(cache_frame_3cff3865863acfa74a5cb24df05472e9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3cff3865863acfa74a5cb24df05472e9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3cff3865863acfa74a5cb24df05472e9 = MAKE_FUNCTION_FRAME(tstate, codeobj_3cff3865863acfa74a5cb24df05472e9, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3cff3865863acfa74a5cb24df05472e9->m_type_description == NULL);
    frame_3cff3865863acfa74a5cb24df05472e9 = cache_frame_3cff3865863acfa74a5cb24df05472e9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3cff3865863acfa74a5cb24df05472e9);
    assert(Py_REFCNT(frame_3cff3865863acfa74a5cb24df05472e9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[16]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[33]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[88]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[61]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[89]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[45]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[46]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[47]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_widthOffset);
        tmp_add_expr_right_1 = par_widthOffset;
        tmp_args_element_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_add_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[48]);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_heightOffset);
        tmp_add_expr_right_2 = par_heightOffset;
        tmp_args_element_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[4];
        frame_3cff3865863acfa74a5cb24df05472e9->m_frame.f_lineno = 251;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_result);
        tmp_cmp_expr_left_1 = var_result;
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_3cff3865863acfa74a5cb24df05472e9->m_frame.f_lineno = 253;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3cff3865863acfa74a5cb24df05472e9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3cff3865863acfa74a5cb24df05472e9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3cff3865863acfa74a5cb24df05472e9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3cff3865863acfa74a5cb24df05472e9,
        type_description_1,
        par_self,
        par_widthOffset,
        par_heightOffset,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_3cff3865863acfa74a5cb24df05472e9 == cache_frame_3cff3865863acfa74a5cb24df05472e9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3cff3865863acfa74a5cb24df05472e9);
        cache_frame_3cff3865863acfa74a5cb24df05472e9 = NULL;
    }

    assertFrameObject(frame_3cff3865863acfa74a5cb24df05472e9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widthOffset);
    Py_DECREF(par_widthOffset);
    CHECK_OBJECT(par_heightOffset);
    Py_DECREF(par_heightOffset);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widthOffset);
    Py_DECREF(par_widthOffset);
    CHECK_OBJECT(par_heightOffset);
    Py_DECREF(par_heightOffset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__22_resizeTo(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_newWidth = python_pars[1];
    PyObject *par_newHeight = python_pars[2];
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_efbef175b67f011deca0f3de39290830;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_efbef175b67f011deca0f3de39290830 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_efbef175b67f011deca0f3de39290830)) {
        Py_XDECREF(cache_frame_efbef175b67f011deca0f3de39290830);

#if _DEBUG_REFCOUNTS
        if (cache_frame_efbef175b67f011deca0f3de39290830 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_efbef175b67f011deca0f3de39290830 = MAKE_FUNCTION_FRAME(tstate, codeobj_efbef175b67f011deca0f3de39290830, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_efbef175b67f011deca0f3de39290830->m_type_description == NULL);
    frame_efbef175b67f011deca0f3de39290830 = cache_frame_efbef175b67f011deca0f3de39290830;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_efbef175b67f011deca0f3de39290830);
    assert(Py_REFCNT(frame_efbef175b67f011deca0f3de39290830) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[16]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[33]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[88]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[61]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 258;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[89]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 258;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[45]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 258;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[46]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 258;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_newWidth);
        tmp_args_element_value_5 = par_newWidth;
        CHECK_OBJECT(par_newHeight);
        tmp_args_element_value_6 = par_newHeight;
        tmp_args_element_value_7 = mod_consts[4];
        frame_efbef175b67f011deca0f3de39290830->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_result);
        tmp_cmp_expr_left_1 = var_result;
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_efbef175b67f011deca0f3de39290830->m_frame.f_lineno = 260;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_efbef175b67f011deca0f3de39290830, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_efbef175b67f011deca0f3de39290830->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_efbef175b67f011deca0f3de39290830, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_efbef175b67f011deca0f3de39290830,
        type_description_1,
        par_self,
        par_newWidth,
        par_newHeight,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_efbef175b67f011deca0f3de39290830 == cache_frame_efbef175b67f011deca0f3de39290830) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_efbef175b67f011deca0f3de39290830);
        cache_frame_efbef175b67f011deca0f3de39290830 = NULL;
    }

    assertFrameObject(frame_efbef175b67f011deca0f3de39290830);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_newWidth);
    Py_DECREF(par_newWidth);
    CHECK_OBJECT(par_newHeight);
    Py_DECREF(par_newHeight);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_newWidth);
    Py_DECREF(par_newWidth);
    CHECK_OBJECT(par_newHeight);
    Py_DECREF(par_newHeight);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__23_move(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_xOffset = python_pars[1];
    PyObject *par_yOffset = python_pars[2];
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_52b87ee98b4b24d305d0621f76c916f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_52b87ee98b4b24d305d0621f76c916f2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_52b87ee98b4b24d305d0621f76c916f2)) {
        Py_XDECREF(cache_frame_52b87ee98b4b24d305d0621f76c916f2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_52b87ee98b4b24d305d0621f76c916f2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_52b87ee98b4b24d305d0621f76c916f2 = MAKE_FUNCTION_FRAME(tstate, codeobj_52b87ee98b4b24d305d0621f76c916f2, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_52b87ee98b4b24d305d0621f76c916f2->m_type_description == NULL);
    frame_52b87ee98b4b24d305d0621f76c916f2 = cache_frame_52b87ee98b4b24d305d0621f76c916f2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_52b87ee98b4b24d305d0621f76c916f2);
    assert(Py_REFCNT(frame_52b87ee98b4b24d305d0621f76c916f2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[16]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[33]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[88]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[61]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 265;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[89]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 265;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[45]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 265;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xOffset);
        tmp_add_expr_right_1 = par_xOffset;
        tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 265;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_add_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[46]);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 265;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_yOffset);
        tmp_add_expr_right_2 = par_yOffset;
        tmp_args_element_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 265;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[47]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 265;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[48]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 265;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[4];
        frame_52b87ee98b4b24d305d0621f76c916f2->m_frame.f_lineno = 265;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_result);
        tmp_cmp_expr_left_1 = var_result;
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_52b87ee98b4b24d305d0621f76c916f2->m_frame.f_lineno = 267;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_52b87ee98b4b24d305d0621f76c916f2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_52b87ee98b4b24d305d0621f76c916f2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_52b87ee98b4b24d305d0621f76c916f2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_52b87ee98b4b24d305d0621f76c916f2,
        type_description_1,
        par_self,
        par_xOffset,
        par_yOffset,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_52b87ee98b4b24d305d0621f76c916f2 == cache_frame_52b87ee98b4b24d305d0621f76c916f2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_52b87ee98b4b24d305d0621f76c916f2);
        cache_frame_52b87ee98b4b24d305d0621f76c916f2 = NULL;
    }

    assertFrameObject(frame_52b87ee98b4b24d305d0621f76c916f2);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_xOffset);
    Py_DECREF(par_xOffset);
    CHECK_OBJECT(par_yOffset);
    Py_DECREF(par_yOffset);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_xOffset);
    Py_DECREF(par_xOffset);
    CHECK_OBJECT(par_yOffset);
    Py_DECREF(par_yOffset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__24_moveTo(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_newLeft = python_pars[1];
    PyObject *par_newTop = python_pars[2];
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_978bea761a85dc0cc8ba333d2d9e2094;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_978bea761a85dc0cc8ba333d2d9e2094 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_978bea761a85dc0cc8ba333d2d9e2094)) {
        Py_XDECREF(cache_frame_978bea761a85dc0cc8ba333d2d9e2094);

#if _DEBUG_REFCOUNTS
        if (cache_frame_978bea761a85dc0cc8ba333d2d9e2094 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_978bea761a85dc0cc8ba333d2d9e2094 = MAKE_FUNCTION_FRAME(tstate, codeobj_978bea761a85dc0cc8ba333d2d9e2094, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_978bea761a85dc0cc8ba333d2d9e2094->m_type_description == NULL);
    frame_978bea761a85dc0cc8ba333d2d9e2094 = cache_frame_978bea761a85dc0cc8ba333d2d9e2094;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_978bea761a85dc0cc8ba333d2d9e2094);
    assert(Py_REFCNT(frame_978bea761a85dc0cc8ba333d2d9e2094) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[16]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[33]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[88]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[61]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 272;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[89]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 272;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_newLeft);
        tmp_args_element_value_3 = par_newLeft;
        CHECK_OBJECT(par_newTop);
        tmp_args_element_value_4 = par_newTop;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[47]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 272;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[48]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 272;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[4];
        frame_978bea761a85dc0cc8ba333d2d9e2094->m_frame.f_lineno = 272;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_result);
        tmp_cmp_expr_left_1 = var_result;
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_978bea761a85dc0cc8ba333d2d9e2094->m_frame.f_lineno = 274;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_978bea761a85dc0cc8ba333d2d9e2094, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_978bea761a85dc0cc8ba333d2d9e2094->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_978bea761a85dc0cc8ba333d2d9e2094, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_978bea761a85dc0cc8ba333d2d9e2094,
        type_description_1,
        par_self,
        par_newLeft,
        par_newTop,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_978bea761a85dc0cc8ba333d2d9e2094 == cache_frame_978bea761a85dc0cc8ba333d2d9e2094) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_978bea761a85dc0cc8ba333d2d9e2094);
        cache_frame_978bea761a85dc0cc8ba333d2d9e2094 = NULL;
    }

    assertFrameObject(frame_978bea761a85dc0cc8ba333d2d9e2094);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_newLeft);
    Py_DECREF(par_newLeft);
    CHECK_OBJECT(par_newTop);
    Py_DECREF(par_newTop);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_newLeft);
    Py_DECREF(par_newLeft);
    CHECK_OBJECT(par_newTop);
    Py_DECREF(par_newTop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__25_isMinimized(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a7fe7a18727e52c0ae21888b888def11;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a7fe7a18727e52c0ae21888b888def11 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a7fe7a18727e52c0ae21888b888def11)) {
        Py_XDECREF(cache_frame_a7fe7a18727e52c0ae21888b888def11);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a7fe7a18727e52c0ae21888b888def11 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a7fe7a18727e52c0ae21888b888def11 = MAKE_FUNCTION_FRAME(tstate, codeobj_a7fe7a18727e52c0ae21888b888def11, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a7fe7a18727e52c0ae21888b888def11->m_type_description == NULL);
    frame_a7fe7a18727e52c0ae21888b888def11 = cache_frame_a7fe7a18727e52c0ae21888b888def11;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a7fe7a18727e52c0ae21888b888def11);
    assert(Py_REFCNT(frame_a7fe7a18727e52c0ae21888b888def11) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[16]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[33]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[94]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[61]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 280;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a7fe7a18727e52c0ae21888b888def11->m_frame.f_lineno = 280;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_return_value = RICH_COMPARE_NE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a7fe7a18727e52c0ae21888b888def11, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a7fe7a18727e52c0ae21888b888def11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a7fe7a18727e52c0ae21888b888def11, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a7fe7a18727e52c0ae21888b888def11,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a7fe7a18727e52c0ae21888b888def11 == cache_frame_a7fe7a18727e52c0ae21888b888def11) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a7fe7a18727e52c0ae21888b888def11);
        cache_frame_a7fe7a18727e52c0ae21888b888def11 = NULL;
    }

    assertFrameObject(frame_a7fe7a18727e52c0ae21888b888def11);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__26_isMaximized(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c9ee815fdcd2a848a8bb0ff3a4a60ec7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c9ee815fdcd2a848a8bb0ff3a4a60ec7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c9ee815fdcd2a848a8bb0ff3a4a60ec7)) {
        Py_XDECREF(cache_frame_c9ee815fdcd2a848a8bb0ff3a4a60ec7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c9ee815fdcd2a848a8bb0ff3a4a60ec7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c9ee815fdcd2a848a8bb0ff3a4a60ec7 = MAKE_FUNCTION_FRAME(tstate, codeobj_c9ee815fdcd2a848a8bb0ff3a4a60ec7, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c9ee815fdcd2a848a8bb0ff3a4a60ec7->m_type_description == NULL);
    frame_c9ee815fdcd2a848a8bb0ff3a4a60ec7 = cache_frame_c9ee815fdcd2a848a8bb0ff3a4a60ec7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c9ee815fdcd2a848a8bb0ff3a4a60ec7);
    assert(Py_REFCNT(frame_c9ee815fdcd2a848a8bb0ff3a4a60ec7) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[16]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[33]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[96]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[61]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 285;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c9ee815fdcd2a848a8bb0ff3a4a60ec7->m_frame.f_lineno = 285;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_return_value = RICH_COMPARE_NE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c9ee815fdcd2a848a8bb0ff3a4a60ec7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c9ee815fdcd2a848a8bb0ff3a4a60ec7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c9ee815fdcd2a848a8bb0ff3a4a60ec7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c9ee815fdcd2a848a8bb0ff3a4a60ec7,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c9ee815fdcd2a848a8bb0ff3a4a60ec7 == cache_frame_c9ee815fdcd2a848a8bb0ff3a4a60ec7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c9ee815fdcd2a848a8bb0ff3a4a60ec7);
        cache_frame_c9ee815fdcd2a848a8bb0ff3a4a60ec7 = NULL;
    }

    assertFrameObject(frame_c9ee815fdcd2a848a8bb0ff3a4a60ec7);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__27_isActive(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9f0f95e2e1c6cee7b3687ee98f1f67dc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9f0f95e2e1c6cee7b3687ee98f1f67dc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9f0f95e2e1c6cee7b3687ee98f1f67dc)) {
        Py_XDECREF(cache_frame_9f0f95e2e1c6cee7b3687ee98f1f67dc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9f0f95e2e1c6cee7b3687ee98f1f67dc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9f0f95e2e1c6cee7b3687ee98f1f67dc = MAKE_FUNCTION_FRAME(tstate, codeobj_9f0f95e2e1c6cee7b3687ee98f1f67dc, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9f0f95e2e1c6cee7b3687ee98f1f67dc->m_type_description == NULL);
    frame_9f0f95e2e1c6cee7b3687ee98f1f67dc = cache_frame_9f0f95e2e1c6cee7b3687ee98f1f67dc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9f0f95e2e1c6cee7b3687ee98f1f67dc);
    assert(Py_REFCNT(frame_9f0f95e2e1c6cee7b3687ee98f1f67dc) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_9f0f95e2e1c6cee7b3687ee98f1f67dc->m_frame.f_lineno = 290;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_cmp_expr_right_1 = par_self;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9f0f95e2e1c6cee7b3687ee98f1f67dc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9f0f95e2e1c6cee7b3687ee98f1f67dc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9f0f95e2e1c6cee7b3687ee98f1f67dc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9f0f95e2e1c6cee7b3687ee98f1f67dc,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9f0f95e2e1c6cee7b3687ee98f1f67dc == cache_frame_9f0f95e2e1c6cee7b3687ee98f1f67dc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9f0f95e2e1c6cee7b3687ee98f1f67dc);
        cache_frame_9f0f95e2e1c6cee7b3687ee98f1f67dc = NULL;
    }

    assertFrameObject(frame_9f0f95e2e1c6cee7b3687ee98f1f67dc);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__28_title(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_textLenInCharacters = NULL;
    PyObject *var_stringBuffer = NULL;
    struct Nuitka_FrameObject *frame_a6423d8be75eec1d40e094cd55a849e7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a6423d8be75eec1d40e094cd55a849e7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a6423d8be75eec1d40e094cd55a849e7)) {
        Py_XDECREF(cache_frame_a6423d8be75eec1d40e094cd55a849e7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a6423d8be75eec1d40e094cd55a849e7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a6423d8be75eec1d40e094cd55a849e7 = MAKE_FUNCTION_FRAME(tstate, codeobj_a6423d8be75eec1d40e094cd55a849e7, module_pygetwindow$_pygetwindow_win, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a6423d8be75eec1d40e094cd55a849e7->m_type_description == NULL);
    frame_a6423d8be75eec1d40e094cd55a849e7 = cache_frame_a6423d8be75eec1d40e094cd55a849e7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a6423d8be75eec1d40e094cd55a849e7);
    assert(Py_REFCNT(frame_a6423d8be75eec1d40e094cd55a849e7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[16]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[33]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[100]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[61]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 295;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_a6423d8be75eec1d40e094cd55a849e7->m_frame.f_lineno = 295;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_textLenInCharacters == NULL);
        var_textLenInCharacters = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[8]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_textLenInCharacters);
        tmp_add_expr_left_1 = var_textLenInCharacters;
        tmp_add_expr_right_1 = mod_consts[9];
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 296;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_a6423d8be75eec1d40e094cd55a849e7->m_frame.f_lineno = 296;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_stringBuffer == NULL);
        var_stringBuffer = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[16]);
        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[33]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[101]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[61]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 297;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_stringBuffer);
        tmp_args_element_value_4 = var_stringBuffer;
        CHECK_OBJECT(var_textLenInCharacters);
        tmp_add_expr_left_2 = var_textLenInCharacters;
        tmp_add_expr_right_2 = mod_consts[9];
        tmp_args_element_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 297;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_a6423d8be75eec1d40e094cd55a849e7->m_frame.f_lineno = 297;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(var_stringBuffer);
        tmp_expression_value_10 = var_stringBuffer;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[13]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a6423d8be75eec1d40e094cd55a849e7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a6423d8be75eec1d40e094cd55a849e7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a6423d8be75eec1d40e094cd55a849e7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a6423d8be75eec1d40e094cd55a849e7,
        type_description_1,
        par_self,
        var_textLenInCharacters,
        var_stringBuffer
    );


    // Release cached frame if used for exception.
    if (frame_a6423d8be75eec1d40e094cd55a849e7 == cache_frame_a6423d8be75eec1d40e094cd55a849e7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a6423d8be75eec1d40e094cd55a849e7);
        cache_frame_a6423d8be75eec1d40e094cd55a849e7 = NULL;
    }

    assertFrameObject(frame_a6423d8be75eec1d40e094cd55a849e7);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_textLenInCharacters);
    Py_DECREF(var_textLenInCharacters);
    var_textLenInCharacters = NULL;
    CHECK_OBJECT(var_stringBuffer);
    Py_DECREF(var_stringBuffer);
    var_stringBuffer = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_textLenInCharacters);
    var_textLenInCharacters = NULL;
    Py_XDECREF(var_stringBuffer);
    var_stringBuffer = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__29_visible(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_27303f3df482591e524fcb187e685346;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_27303f3df482591e524fcb187e685346 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_27303f3df482591e524fcb187e685346)) {
        Py_XDECREF(cache_frame_27303f3df482591e524fcb187e685346);

#if _DEBUG_REFCOUNTS
        if (cache_frame_27303f3df482591e524fcb187e685346 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_27303f3df482591e524fcb187e685346 = MAKE_FUNCTION_FRAME(tstate, codeobj_27303f3df482591e524fcb187e685346, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_27303f3df482591e524fcb187e685346->m_type_description == NULL);
    frame_27303f3df482591e524fcb187e685346 = cache_frame_27303f3df482591e524fcb187e685346;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_27303f3df482591e524fcb187e685346);
    assert(Py_REFCNT(frame_27303f3df482591e524fcb187e685346) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[61]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_27303f3df482591e524fcb187e685346->m_frame.f_lineno = 305;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_27303f3df482591e524fcb187e685346, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_27303f3df482591e524fcb187e685346->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_27303f3df482591e524fcb187e685346, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_27303f3df482591e524fcb187e685346,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_27303f3df482591e524fcb187e685346 == cache_frame_27303f3df482591e524fcb187e685346) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_27303f3df482591e524fcb187e685346);
        cache_frame_27303f3df482591e524fcb187e685346 = NULL;
    }

    assertFrameObject(frame_27303f3df482591e524fcb187e685346);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__30_cursor(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_cursor = NULL;
    struct Nuitka_FrameObject *frame_84b48ed9e0b282382f58990144aa9650;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_84b48ed9e0b282382f58990144aa9650 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_84b48ed9e0b282382f58990144aa9650)) {
        Py_XDECREF(cache_frame_84b48ed9e0b282382f58990144aa9650);

#if _DEBUG_REFCOUNTS
        if (cache_frame_84b48ed9e0b282382f58990144aa9650 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_84b48ed9e0b282382f58990144aa9650 = MAKE_FUNCTION_FRAME(tstate, codeobj_84b48ed9e0b282382f58990144aa9650, module_pygetwindow$_pygetwindow_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_84b48ed9e0b282382f58990144aa9650->m_type_description == NULL);
    frame_84b48ed9e0b282382f58990144aa9650 = cache_frame_84b48ed9e0b282382f58990144aa9650;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_84b48ed9e0b282382f58990144aa9650);
    assert(Py_REFCNT(frame_84b48ed9e0b282382f58990144aa9650) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_84b48ed9e0b282382f58990144aa9650->m_frame.f_lineno = 316;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_cursor == NULL);
        var_cursor = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[16]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[33]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[105]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 317;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cursor);
        tmp_args_element_value_2 = var_cursor;
        frame_84b48ed9e0b282382f58990144aa9650->m_frame.f_lineno = 317;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[24], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 317;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_84b48ed9e0b282382f58990144aa9650->m_frame.f_lineno = 317;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_5;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cursor);
        tmp_expression_value_4 = var_cursor;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[43]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cursor);
        tmp_expression_value_5 = var_cursor;
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[44]);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 318;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_84b48ed9e0b282382f58990144aa9650->m_frame.f_lineno = 318;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[107]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_84b48ed9e0b282382f58990144aa9650, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_84b48ed9e0b282382f58990144aa9650->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_84b48ed9e0b282382f58990144aa9650, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_84b48ed9e0b282382f58990144aa9650,
        type_description_1,
        var_cursor
    );


    // Release cached frame if used for exception.
    if (frame_84b48ed9e0b282382f58990144aa9650 == cache_frame_84b48ed9e0b282382f58990144aa9650) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_84b48ed9e0b282382f58990144aa9650);
        cache_frame_84b48ed9e0b282382f58990144aa9650 = NULL;
    }

    assertFrameObject(frame_84b48ed9e0b282382f58990144aa9650);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_cursor);
    Py_DECREF(var_cursor);
    var_cursor = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_cursor);
    var_cursor = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pygetwindow$_pygetwindow_win$$$function__31_resolution(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_2a41cefbad8dc02c2d907320869afe2c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2a41cefbad8dc02c2d907320869afe2c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2a41cefbad8dc02c2d907320869afe2c)) {
        Py_XDECREF(cache_frame_2a41cefbad8dc02c2d907320869afe2c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2a41cefbad8dc02c2d907320869afe2c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2a41cefbad8dc02c2d907320869afe2c = MAKE_FUNCTION_FRAME(tstate, codeobj_2a41cefbad8dc02c2d907320869afe2c, module_pygetwindow$_pygetwindow_win, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2a41cefbad8dc02c2d907320869afe2c->m_type_description == NULL);
    frame_2a41cefbad8dc02c2d907320869afe2c = cache_frame_2a41cefbad8dc02c2d907320869afe2c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2a41cefbad8dc02c2d907320869afe2c);
    assert(Py_REFCNT(frame_2a41cefbad8dc02c2d907320869afe2c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[109]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[16]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[33]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        frame_2a41cefbad8dc02c2d907320869afe2c->m_frame.f_lineno = 327;
        tmp_kw_call_value_0_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[110],
            PyTuple_GET_ITEM(mod_consts[111], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[16]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[33]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        frame_2a41cefbad8dc02c2d907320869afe2c->m_frame.f_lineno = 327;
        tmp_kw_call_value_1_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[110],
            PyTuple_GET_ITEM(mod_consts[112], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        frame_2a41cefbad8dc02c2d907320869afe2c->m_frame.f_lineno = 327;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[113]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2a41cefbad8dc02c2d907320869afe2c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2a41cefbad8dc02c2d907320869afe2c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2a41cefbad8dc02c2d907320869afe2c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2a41cefbad8dc02c2d907320869afe2c,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_2a41cefbad8dc02c2d907320869afe2c == cache_frame_2a41cefbad8dc02c2d907320869afe2c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2a41cefbad8dc02c2d907320869afe2c);
        cache_frame_2a41cefbad8dc02c2d907320869afe2c = NULL;
    }

    assertFrameObject(frame_2a41cefbad8dc02c2d907320869afe2c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__10___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__10___init__,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_646b1896bd677fb2f8e27ea1f6605619,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_a14597c83452eb619b50db02b4a57823,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[69],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__12___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__12___repr__,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        mod_consts[158],
#endif
        codeobj_d565645d236e8df912b90e70b4371c21,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__13___eq__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__13___eq__,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_5ae4d55f4923bf961c1e48f9a0f5f367,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__14_close() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__14_close,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_6782ae7e39410b798e7a6b1b4bc1ef68,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[74],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__15_minimize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__15_minimize,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_90c772a326c21a2dcbee201f52ea792c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[77],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__16_maximize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__16_maximize,
        mod_consts[165],
#if PYTHON_VERSION >= 0x300
        mod_consts[166],
#endif
        codeobj_d1de38648e07f9faa93522abfef66aa0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[79],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__17_restore() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__17_restore,
        mod_consts[167],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_6833afd664be7d6b8b3c1b3f411b373d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[81],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__18_show() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__18_show,
        mod_consts[169],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_a5b0e8c7c6c0400290c37089aef9adab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[83],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__19_hide() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__19_hide,
        mod_consts[171],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_3375e4d6cdb7d42e2d960cb49c926dd9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[85],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1a4d381996abac61846a43f5c9a83c44,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[1],
#endif
        codeobj_ab74c957b755adf98ea2e9fa72cdde1e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__20_activate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__20_activate,
        mod_consts[173],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_a86759bedbd5f876599b615d3d54d449,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[87],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__21_resize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__21_resize,
        mod_consts[175],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_3cff3865863acfa74a5cb24df05472e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[90],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__22_resizeTo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__22_resizeTo,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_efbef175b67f011deca0f3de39290830,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[91],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__23_move() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__23_move,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_52b87ee98b4b24d305d0621f76c916f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[92],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__24_moveTo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__24_moveTo,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_978bea761a85dc0cc8ba333d2d9e2094,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[93],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__25_isMinimized() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__25_isMinimized,
        mod_consts[186],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        codeobj_a7fe7a18727e52c0ae21888b888def11,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[95],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__26_isMaximized() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__26_isMaximized,
        mod_consts[188],
#if PYTHON_VERSION >= 0x300
        mod_consts[189],
#endif
        codeobj_c9ee815fdcd2a848a8bb0ff3a4a60ec7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[97],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__27_isActive() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__27_isActive,
        mod_consts[190],
#if PYTHON_VERSION >= 0x300
        mod_consts[191],
#endif
        codeobj_9f0f95e2e1c6cee7b3687ee98f1f67dc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[99],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__28_title() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__28_title,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        codeobj_a6423d8be75eec1d40e094cd55a849e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[102],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__29_visible() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__29_visible,
        mod_consts[193],
#if PYTHON_VERSION >= 0x300
        mod_consts[194],
#endif
        codeobj_27303f3df482591e524fcb187e685346,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[103],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__2__formatMessage() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__2__formatMessage,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bb9cb4934b1c9233cf8e20bff5bcac1d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[27],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__30_cursor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__30_cursor,
        mod_consts[195],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_84b48ed9e0b282382f58990144aa9650,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[108],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__31_resolution() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__31_resolution,
        mod_consts[196],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2a41cefbad8dc02c2d907320869afe2c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[114],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_38d304e74a4e2d4e642f218211fd4abb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ab6267bd7f14488140ff444f3bcdbd84,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_34ae38e9d8b9c923298a64f5a520ff65,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[39],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[37],
#endif
        codeobj_e6313f7e0ea443afe7bec4970b36b631,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1e6d8b40a3392aedf0f161c1c12f533f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[50],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle,
        mod_consts[151],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_221be0a68337f2e3cb69b7c2d4a62a4a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[56],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_303f01770203c768b4877c56a1579fb9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[57],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e1fa28bf34e3af1624efb6aaefeb3a07,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        mod_consts[59],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[58],
#endif
        codeobj_be96ea8757769479d5fd6c4ceda18e6c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pygetwindow$_pygetwindow_win,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_pygetwindow$_pygetwindow_win[] = {
    impl_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles$$$function__1_foreach_window,
    impl_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle$$$function__1_foreach_window,
    impl_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows$$$function__1_foreach_window,
    impl_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles,
    impl_pygetwindow$_pygetwindow_win$$$function__2__formatMessage,
    impl_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError,
    impl_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow,
    impl_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle,
    impl_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt,
    impl_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle,
    impl_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles,
    impl_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows,
    impl_pygetwindow$_pygetwindow_win$$$function__10___init__,
    impl_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect,
    impl_pygetwindow$_pygetwindow_win$$$function__12___repr__,
    impl_pygetwindow$_pygetwindow_win$$$function__13___eq__,
    impl_pygetwindow$_pygetwindow_win$$$function__14_close,
    impl_pygetwindow$_pygetwindow_win$$$function__15_minimize,
    impl_pygetwindow$_pygetwindow_win$$$function__16_maximize,
    impl_pygetwindow$_pygetwindow_win$$$function__17_restore,
    impl_pygetwindow$_pygetwindow_win$$$function__18_show,
    impl_pygetwindow$_pygetwindow_win$$$function__19_hide,
    impl_pygetwindow$_pygetwindow_win$$$function__20_activate,
    impl_pygetwindow$_pygetwindow_win$$$function__21_resize,
    impl_pygetwindow$_pygetwindow_win$$$function__22_resizeTo,
    impl_pygetwindow$_pygetwindow_win$$$function__23_move,
    impl_pygetwindow$_pygetwindow_win$$$function__24_moveTo,
    impl_pygetwindow$_pygetwindow_win$$$function__25_isMinimized,
    impl_pygetwindow$_pygetwindow_win$$$function__26_isMaximized,
    impl_pygetwindow$_pygetwindow_win$$$function__27_isActive,
    impl_pygetwindow$_pygetwindow_win$$$function__28_title,
    impl_pygetwindow$_pygetwindow_win$$$function__29_visible,
    impl_pygetwindow$_pygetwindow_win$$$function__30_cursor,
    impl_pygetwindow$_pygetwindow_win$$$function__31_resolution,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_pygetwindow$_pygetwindow_win;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && HAS_ERROR_OCCURRED(tstate)) {
        return NULL;
    }

    if (offset > sizeof(functable_pygetwindow$_pygetwindow_win) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!HAS_ERROR_OCCURRED(tstate));
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_pygetwindow$_pygetwindow_win[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_pygetwindow$_pygetwindow_win,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pygetwindow$_pygetwindow_win(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pygetwindow._pygetwindow_win");

    // Store the module for future use.
    module_pygetwindow$_pygetwindow_win = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("pygetwindow._pygetwindow_win: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pygetwindow._pygetwindow_win: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpygetwindow$_pygetwindow_win\n");

    moduledict_pygetwindow$_pygetwindow_win = MODULE_DICT(module_pygetwindow$_pygetwindow_win);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pygetwindow$_pygetwindow_win,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pygetwindow$_pygetwindow_win,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[225]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pygetwindow$_pygetwindow_win,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pygetwindow$_pygetwindow_win,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pygetwindow$_pygetwindow_win,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pygetwindow$_pygetwindow_win);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pygetwindow$_pygetwindow_win);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_73158b271121826e9add765d8456d6db;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_14a5c96364be4db7686bb7acb2a99f1e_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43 = NULL;
    struct Nuitka_FrameObject *frame_2e4f0c20847868ac4a61116484fc1797_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176 = NULL;
    struct Nuitka_FrameObject *frame_d9d04815e355d1277b71e469b88bd865_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_2);
    }
    frame_73158b271121826e9add765d8456d6db = MAKE_MODULE_FRAME(codeobj_73158b271121826e9add765d8456d6db, module_pygetwindow$_pygetwindow_win);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_73158b271121826e9add765d8456d6db);
    assert(Py_REFCNT(frame_73158b271121826e9add765d8456d6db) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[118], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[119], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[121];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pygetwindow$_pygetwindow_win;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[122];
        tmp_level_value_1 = mod_consts[4];
        frame_73158b271121826e9add765d8456d6db->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pygetwindow$_pygetwindow_win,
                mod_consts[29],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[29]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pygetwindow$_pygetwindow_win,
                mod_consts[42],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[42]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_pygetwindow$_pygetwindow_win,
                mod_consts[123],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[123]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_pygetwindow$_pygetwindow_win,
                mod_consts[65],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[65]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_pygetwindow$_pygetwindow_win,
                mod_consts[106],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[106]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_pygetwindow$_pygetwindow_win,
                mod_consts[109],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[109]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_12);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[4];
        UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[124];
        UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[125];
        UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[126];
        UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[127];
        UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[128];
        UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[4];
        UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[129];
        UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[130];
        UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[4];
        UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[131];
        UPDATE_STRING_DICT0(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_23);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[132]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        tmp_assign_source_24 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_24, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_25 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_2 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[4];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_27 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_27;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts[133]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[133]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[104];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_73158b271121826e9add765d8456d6db->m_frame.f_lineno = 32;
        tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_28;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts[134]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[135];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_name_value_2 = mod_consts[71];
        tmp_default_value_1 = mod_consts[136];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_2, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_7 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[71]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 32;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_29;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[137];
        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32, mod_consts[138], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[104];
        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32, mod_consts[139], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_4;
        }
        frame_14a5c96364be4db7686bb7acb2a99f1e_2 = MAKE_CLASS_FRAME(tstate, codeobj_14a5c96364be4db7686bb7acb2a99f1e, module_pygetwindow$_pygetwindow_win, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_14a5c96364be4db7686bb7acb2a99f1e_2);
        assert(Py_REFCNT(frame_14a5c96364be4db7686bb7acb2a99f1e_2) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_4;
            tmp_tuple_element_4 = mod_consts[43];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_8;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
                tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_8 == NULL)) {
                    tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                assert(!(tmp_expression_value_8 == NULL));
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[140]);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 33;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_list_element_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dictset_value = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_5;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
                tmp_tuple_element_5 = mod_consts[44];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_9;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
                    tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_9 == NULL)) {
                        tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_9 == NULL));
                    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[140]);
                    if (tmp_tuple_element_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 34;
                        type_description_2 = "o";
                        goto tuple_build_exception_3;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_5);
                }
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_1);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32, mod_consts[141], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_14a5c96364be4db7686bb7acb2a99f1e_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_14a5c96364be4db7686bb7acb2a99f1e_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_14a5c96364be4db7686bb7acb2a99f1e_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_14a5c96364be4db7686bb7acb2a99f1e_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_14a5c96364be4db7686bb7acb2a99f1e_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32, mod_consts[142], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_6 = mod_consts[104];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_6 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_73158b271121826e9add765d8456d6db->m_frame.f_lineno = 32;
            tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_31;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_30 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_30);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32);
        locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32);
        locals_pygetwindow$_pygetwindow_win$$$class__1_POINT_32 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 32;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_30);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_12 == NULL));
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[16]);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[33]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[143]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_17;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_13 == NULL));
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[144]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_14 == NULL));
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[145]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_15 == NULL));
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[146]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_16 == NULL));
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[147]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_17 == NULL));
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[146]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        frame_73158b271121826e9add765d8456d6db->m_frame.f_lineno = 37;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        frame_73158b271121826e9add765d8456d6db->m_frame.f_lineno = 37;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_20 == NULL));
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[16]);
        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[33]);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[101]);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_23 == NULL));
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[16]);
        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[33]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[100]);
        Py_DECREF(tmp_expression_value_21);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_26 == NULL));
        tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[16]);
        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[33]);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[60]);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_36);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_27;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_27 == NULL));
        tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[132]);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_5;
        }
        tmp_assign_source_37 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_37, 0, tmp_tuple_element_7);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_38 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_5;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_28 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[4];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_28, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_40 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_40;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_29 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_29, mod_consts[133]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_5;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_30 = tmp_class_creation_2__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[133]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_5;
        }
        tmp_tuple_element_8 = mod_consts[63];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_8 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_73158b271121826e9add765d8456d6db->m_frame.f_lineno = 43;
        tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_41;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_31;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_31 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_31, mod_consts[134]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_5;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_name_value_3;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[135];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_32 = tmp_class_creation_2__metaclass;
        tmp_name_value_3 = mod_consts[71];
        tmp_default_value_2 = mod_consts[136];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_32, tmp_name_value_3, tmp_default_value_2);
        if (tmp_tuple_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_33;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_33 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_33 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[71]);
            Py_DECREF(tmp_expression_value_33);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 43;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_42;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_43;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[137];
        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43, mod_consts[138], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[148];
        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43, mod_consts[115], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43, mod_consts[139], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        frame_2e4f0c20847868ac4a61116484fc1797_3 = MAKE_CLASS_FRAME(tstate, codeobj_2e4f0c20847868ac4a61116484fc1797, module_pygetwindow$_pygetwindow_win, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_2e4f0c20847868ac4a61116484fc1797_3);
        assert(Py_REFCNT(frame_2e4f0c20847868ac4a61116484fc1797_3) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_tuple_element_10;
            tmp_tuple_element_10 = mod_consts[45];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_34;
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_10);
                tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

                if (unlikely(tmp_expression_value_34 == NULL)) {
                    tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                }

                assert(!(tmp_expression_value_34 == NULL));
                tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[140]);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_list_element_2);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_dictset_value = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_tuple_element_13;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_2);
                tmp_tuple_element_11 = mod_consts[46];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_35;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_11);
                    tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_35 == NULL)) {
                        tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_35 == NULL));
                    tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[140]);
                    if (tmp_tuple_element_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 50;
                        type_description_2 = "o";
                        goto tuple_build_exception_6;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_11);
                }
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_2);
                tmp_tuple_element_12 = mod_consts[66];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_36;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_12);
                    tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_36 == NULL)) {
                        tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_36 == NULL));
                    tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[140]);
                    if (tmp_tuple_element_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 51;
                        type_description_2 = "o";
                        goto tuple_build_exception_7;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_12);
                }
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_2);
                tmp_tuple_element_13 = mod_consts[67];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_37;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_13);
                    tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_37 == NULL)) {
                        tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    assert(!(tmp_expression_value_37 == NULL));
                    tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[140]);
                    if (tmp_tuple_element_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 52;
                        type_description_2 = "o";
                        goto tuple_build_exception_8;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_13);
                }
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_2);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43, mod_consts[141], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2e4f0c20847868ac4a61116484fc1797_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2e4f0c20847868ac4a61116484fc1797_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2e4f0c20847868ac4a61116484fc1797_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2e4f0c20847868ac4a61116484fc1797_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_2e4f0c20847868ac4a61116484fc1797_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43, mod_consts[142], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_6 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_14 = mod_consts[63];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_14 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_73158b271121826e9add765d8456d6db->m_frame.f_lineno = 43;
            tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_44;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_43 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_43);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43);
        locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43);
        locals_pygetwindow$_pygetwindow_win$$$class__2_RECT_43 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 43;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_43);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_45;


        tmp_assign_source_45 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__1__getAllTitles();

        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;


        tmp_assign_source_46 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__2__formatMessage();

        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;


        tmp_assign_source_47 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__3__raiseWithLastError();

        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;


        tmp_assign_source_48 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__4_getActiveWindow();

        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;


        tmp_assign_source_49 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__5_getActiveWindowTitle();

        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;


        tmp_assign_source_50 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__6_getWindowsAt();

        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;


        tmp_assign_source_51 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__7_getWindowsWithTitle();

        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;


        tmp_assign_source_52 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__8_getAllTitles();

        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;


        tmp_assign_source_53 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__9_getAllWindows();

        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_53);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_tuple_element_15;
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_tuple_element_15 == NULL)) {
            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_tuple_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_8;
        }
        tmp_assign_source_54 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_54, 0, tmp_tuple_element_15);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_55 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_8;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_38 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[4];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_38, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_8;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_57 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_57;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_expression_value_39;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_39 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_39, mod_consts[133]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_8;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_40 = tmp_class_creation_3__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[133]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_8;
        }
        tmp_tuple_element_16 = mod_consts[35];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_16 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_73158b271121826e9add765d8456d6db->m_frame.f_lineno = 176;
        tmp_assign_source_58 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_58;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_41;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_41 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_41, mod_consts[134]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_8;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_name_value_4;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[135];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_42 = tmp_class_creation_3__metaclass;
        tmp_name_value_4 = mod_consts[71];
        tmp_default_value_3 = mod_consts[136];
        tmp_tuple_element_17 = BUILTIN_GETATTR(tstate, tmp_expression_value_42, tmp_name_value_4, tmp_default_value_3);
        if (tmp_tuple_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_43;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_43 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_43 == NULL));
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[71]);
            Py_DECREF(tmp_expression_value_43);
            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 176;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_59;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_60;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[137];
        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[138], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[35];
        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[139], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_10;
        }
        frame_d9d04815e355d1277b71e469b88bd865_4 = MAKE_CLASS_FRAME(tstate, codeobj_d9d04815e355d1277b71e469b88bd865, module_pygetwindow$_pygetwindow_win, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_d9d04815e355d1277b71e469b88bd865_4);
        assert(Py_REFCNT(frame_d9d04815e355d1277b71e469b88bd865_4) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__10___init__();

        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[153], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__11__getWindowRect();

        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[155], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__12___repr__();

        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[157], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__13___eq__();

        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[159], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__14_close();

        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[161], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__15_minimize();

        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[163], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__16_maximize();

        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[165], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__17_restore();

        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[167], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__18_show();

        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[169], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__19_hide();

        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[171], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__20_activate();

        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[173], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__21_resize();

        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[175], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = PyObject_GetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[175]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[175]);
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 254;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }

        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[177], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__22_resizeTo();

        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[178], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__23_move();

        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[180], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = PyObject_GetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[180]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[180]);
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 268;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }

        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[182], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__24_moveTo();

        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[183], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_6;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[185]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_12 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_8 = PyObject_GetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[185]);

            if (unlikely(tmp_called_value_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[185]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 277;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_5 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__25_isMinimized();

            frame_d9d04815e355d1277b71e469b88bd865_4->m_frame.f_lineno = 277;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_9 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_6 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__25_isMinimized();

            frame_d9d04815e355d1277b71e469b88bd865_4->m_frame.f_lineno = 277;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[186], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_8;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[185]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_13 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_10 = PyObject_GetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[185]);

            if (unlikely(tmp_called_value_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[185]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 282;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_7 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__26_isMaximized();

            frame_d9d04815e355d1277b71e469b88bd865_4->m_frame.f_lineno = 282;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_11 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_8 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__26_isMaximized();

            frame_d9d04815e355d1277b71e469b88bd865_4->m_frame.f_lineno = 282;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[188], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_10;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[185]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_14 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_value_12 = PyObject_GetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[185]);

            if (unlikely(tmp_called_value_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[185]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_9 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__27_isActive();

            frame_d9d04815e355d1277b71e469b88bd865_4->m_frame.f_lineno = 287;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_13 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_10 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__27_isActive();

            frame_d9d04815e355d1277b71e469b88bd865_4->m_frame.f_lineno = 287;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[190], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_12;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[185]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_15 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_value_14 = PyObject_GetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[185]);

            if (unlikely(tmp_called_value_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[185]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 292;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_11 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__28_title();

            frame_d9d04815e355d1277b71e469b88bd865_4->m_frame.f_lineno = 292;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_value_15 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_12 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__28_title();

            frame_d9d04815e355d1277b71e469b88bd865_4->m_frame.f_lineno = 292;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[53], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_14;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[185]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_16 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_value_16 = PyObject_GetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[185]);

            if (unlikely(tmp_called_value_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[185]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 302;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_13 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__29_visible();

            frame_d9d04815e355d1277b71e469b88bd865_4->m_frame.f_lineno = 302;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_17 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_14 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__29_visible();

            frame_d9d04815e355d1277b71e469b88bd865_4->m_frame.f_lineno = 302;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[193], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d9d04815e355d1277b71e469b88bd865_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d9d04815e355d1277b71e469b88bd865_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d9d04815e355d1277b71e469b88bd865_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d9d04815e355d1277b71e469b88bd865_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_d9d04815e355d1277b71e469b88bd865_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_10;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_17 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto try_except_handler_10;
            }
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176, mod_consts[142], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_10;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_18 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_18 = mod_consts[35];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_18 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_73158b271121826e9add765d8456d6db->m_frame.f_lineno = 176;
            tmp_assign_source_61 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_61;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_60 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_60);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176);
        locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176);
        locals_pygetwindow$_pygetwindow_win$$$class__3_Win32Window_176 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 176;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_60);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_73158b271121826e9add765d8456d6db, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_73158b271121826e9add765d8456d6db->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_73158b271121826e9add765d8456d6db, exception_lineno);
    }



    assertFrameObject(frame_73158b271121826e9add765d8456d6db);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_62;


        tmp_assign_source_62 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__30_cursor();

        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;


        tmp_assign_source_63 = MAKE_FUNCTION_pygetwindow$_pygetwindow_win$$$function__31_resolution();

        UPDATE_STRING_DICT1(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_63);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pygetwindow._pygetwindow_win", false);

    Py_INCREF(module_pygetwindow$_pygetwindow_win);
    return module_pygetwindow$_pygetwindow_win;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pygetwindow$_pygetwindow_win, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pygetwindow$_pygetwindow_win", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
