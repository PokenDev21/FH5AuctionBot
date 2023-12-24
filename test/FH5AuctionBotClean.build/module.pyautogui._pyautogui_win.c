/* Generated code for Python module 'pyautogui._pyautogui_win'
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

/* The "module_pyautogui$_pyautogui_win" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyautogui$_pyautogui_win;
PyDictObject *moduledict_pyautogui$_pyautogui_win;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[154];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[154];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyautogui._pyautogui_win"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 154; i++) {
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
void checkModuleConstants_pyautogui$_pyautogui_win(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 154; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e82bd0ede9f9f06e9f5af4d03df05408;
static PyCodeObject *codeobj_313d5dce690fb1af72d03a48363d4caf;
static PyCodeObject *codeobj_b587ae5702c3ee5dfcf68701d0f4230d;
static PyCodeObject *codeobj_ed7d1431ae03a48a8300697df15c88d9;
static PyCodeObject *codeobj_76c3103d8b859f6b06ba97e1a02d3dfc;
static PyCodeObject *codeobj_c16619bc40e4e5e32ab4307c2597421d;
static PyCodeObject *codeobj_620e5c0cef9d029c9ed1d22615ed893f;
static PyCodeObject *codeobj_86632260e6551991f8e8ba36336d11de;
static PyCodeObject *codeobj_56891a14998100a29921f53ef8e46223;
static PyCodeObject *codeobj_88069d726c466e7f6884cb3f749281df;
static PyCodeObject *codeobj_d3385933638c9bf71d45d3e27cfa90a5;
static PyCodeObject *codeobj_8388452b3192b143ec9620022d4f9aec;
static PyCodeObject *codeobj_cd935cb9a98fee09cf9333d1878ca30e;
static PyCodeObject *codeobj_10aca6dd76b5ba856164b1ef9c0b6f91;
static PyCodeObject *codeobj_9ee1ec09e920cf836aef88673517b5b6;
static PyCodeObject *codeobj_fc0df964ef3732bb53e7e3c3dbe6a9c3;
static PyCodeObject *codeobj_3a66777896150b7ab5e703dc76c25719;
static PyCodeObject *codeobj_fa0864e8b93d2b102bc24bd9b394a672;
static PyCodeObject *codeobj_82072cca1d1f9037703632eefb77464f;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[143]); CHECK_OBJECT(module_filename_obj);
    codeobj_e82bd0ede9f9f06e9f5af4d03df05408 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[144], mod_consts[144], NULL, NULL, 0, 0, 0);
    codeobj_313d5dce690fb1af72d03a48363d4caf = MAKE_CODE_OBJECT(module_filename_obj, 81, 0, mod_consts[112], mod_consts[112], mod_consts[145], NULL, 0, 0, 0);
    codeobj_b587ae5702c3ee5dfcf68701d0f4230d = MAKE_CODE_OBJECT(module_filename_obj, 88, 0, mod_consts[116], mod_consts[116], mod_consts[145], NULL, 0, 0, 0);
    codeobj_ed7d1431ae03a48a8300697df15c88d9 = MAKE_CODE_OBJECT(module_filename_obj, 72, 0, mod_consts[108], mod_consts[108], mod_consts[145], NULL, 0, 0, 0);
    codeobj_76c3103d8b859f6b06ba97e1a02d3dfc = MAKE_CODE_OBJECT(module_filename_obj, 62, 0, mod_consts[88], mod_consts[88], mod_consts[145], NULL, 0, 0, 0);
    codeobj_c16619bc40e4e5e32ab4307c2597421d = MAKE_CODE_OBJECT(module_filename_obj, 89, 0, mod_consts[118], mod_consts[118], mod_consts[145], NULL, 0, 0, 0);
    codeobj_620e5c0cef9d029c9ed1d22615ed893f = MAKE_CODE_OBJECT(module_filename_obj, 432, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[138], mod_consts[138], mod_consts[146], NULL, 3, 0, 0);
    codeobj_86632260e6551991f8e8ba36336d11de = MAKE_CODE_OBJECT(module_filename_obj, 544, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[141], mod_consts[141], mod_consts[147], NULL, 3, 0, 0);
    codeobj_56891a14998100a29921f53ef8e46223 = MAKE_CODE_OBJECT(module_filename_obj, 250, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[133], mod_consts[133], mod_consts[148], NULL, 1, 0, 0);
    codeobj_88069d726c466e7f6884cb3f749281df = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[134], mod_consts[134], mod_consts[148], NULL, 1, 0, 0);
    codeobj_d3385933638c9bf71d45d3e27cfa90a5 = MAKE_CODE_OBJECT(module_filename_obj, 375, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[136], mod_consts[136], mod_consts[146], NULL, 3, 0, 0);
    codeobj_8388452b3192b143ec9620022d4f9aec = MAKE_CODE_OBJECT(module_filename_obj, 404, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[137], mod_consts[137], mod_consts[146], NULL, 3, 0, 0);
    codeobj_cd935cb9a98fee09cf9333d1878ca30e = MAKE_CODE_OBJECT(module_filename_obj, 461, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[139], mod_consts[139], NULL, NULL, 0, 0, 0);
    codeobj_10aca6dd76b5ba856164b1ef9c0b6f91 = MAKE_CODE_OBJECT(module_filename_obj, 357, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[135], mod_consts[135], mod_consts[149], NULL, 2, 0, 0);
    codeobj_9ee1ec09e920cf836aef88673517b5b6 = MAKE_CODE_OBJECT(module_filename_obj, 335, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[59], mod_consts[59], mod_consts[150], NULL, 0, 0, 0);
    codeobj_fc0df964ef3732bb53e7e3c3dbe6a9c3 = MAKE_CODE_OBJECT(module_filename_obj, 507, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[63], mod_consts[63], mod_consts[151], NULL, 3, 0, 0);
    codeobj_3a66777896150b7ab5e703dc76c25719 = MAKE_CODE_OBJECT(module_filename_obj, 466, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[40], mod_consts[40], mod_consts[152], NULL, 4, 0, 0);
    codeobj_fa0864e8b93d2b102bc24bd9b394a672 = MAKE_CODE_OBJECT(module_filename_obj, 348, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[54], mod_consts[54], NULL, NULL, 0, 0, 0);
    codeobj_82072cca1d1f9037703632eefb77464f = MAKE_CODE_OBJECT(module_filename_obj, 560, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[142], mod_consts[142], mod_consts[147], NULL, 3, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__11__scroll(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__12__hscroll();


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__13__vscroll();


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__1__keyDown();


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__2__keyUp();


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__3__position();


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__4__size();


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__5__moveTo();


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__6__mouseDown();


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__7__mouseUp();


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__8__click();


static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped();


// The module function definitions.
static PyObject *impl_pyautogui$_pyautogui_win$$$function__1__keyDown(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var_needsShift = NULL;
    PyObject *var_mods = NULL;
    PyObject *var_vkCode = NULL;
    PyObject *var_apply_mod = NULL;
    PyObject *var_vk_mod = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_56891a14998100a29921f53ef8e46223;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_56891a14998100a29921f53ef8e46223 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_56891a14998100a29921f53ef8e46223)) {
        Py_XDECREF(cache_frame_56891a14998100a29921f53ef8e46223);

#if _DEBUG_REFCOUNTS
        if (cache_frame_56891a14998100a29921f53ef8e46223 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_56891a14998100a29921f53ef8e46223 = MAKE_FUNCTION_FRAME(tstate, codeobj_56891a14998100a29921f53ef8e46223, module_pyautogui$_pyautogui_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_56891a14998100a29921f53ef8e46223->m_type_description == NULL);
    frame_56891a14998100a29921f53ef8e46223 = cache_frame_56891a14998100a29921f53ef8e46223;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_56891a14998100a29921f53ef8e46223);
    assert(Py_REFCNT(frame_56891a14998100a29921f53ef8e46223) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_key);
        tmp_cmp_expr_left_1 = par_key;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_subscript_value_1 = par_key;
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_or_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 != false) {
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        frame_56891a14998100a29921f53ef8e46223->m_frame.f_lineno = 267;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[2], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_needsShift == NULL);
        var_needsShift = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_divmod_expr_left_1;
        PyObject *tmp_divmod_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_key);
        tmp_subscript_value_2 = par_key;
        tmp_divmod_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_divmod_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_divmod_expr_right_1 = mod_consts[3];
        tmp_iter_arg_1 = BINARY_OPERATION_DIVMOD_OBJECT_OBJECT_LONG(tmp_divmod_expr_left_1, tmp_divmod_expr_right_1);
        Py_DECREF(tmp_divmod_expr_left_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 282;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 282;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                    type_description_1 = "oooooo";
                    exception_lineno = 282;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[4];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 282;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_mods == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_mods = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_vkCode == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_vkCode = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        CHECK_OBJECT(var_mods);
        tmp_bitand_expr_left_1 = var_mods;
        tmp_bitand_expr_right_1 = mod_consts[5];
        tmp_tuple_element_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[6];
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
        tmp_iter_arg_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_bitand_expr_left_2;
            PyObject *tmp_bitand_expr_right_2;
            PyObject *tmp_tuple_element_4;
            int tmp_or_left_truth_2;
            PyObject *tmp_or_left_value_2;
            PyObject *tmp_or_right_value_2;
            PyObject *tmp_bitand_expr_left_3;
            PyObject *tmp_bitand_expr_right_3;
            PyTuple_SET_ITEM(tmp_iter_arg_2, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_mods);
            tmp_bitand_expr_left_2 = var_mods;
            tmp_bitand_expr_right_2 = mod_consts[7];
            tmp_tuple_element_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[8];
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_iter_arg_2, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_mods);
            tmp_bitand_expr_left_3 = var_mods;
            tmp_bitand_expr_right_3 = mod_consts[9];
            tmp_or_left_value_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
            if (tmp_or_left_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
            if (tmp_or_left_truth_2 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_or_left_value_2);

                exception_lineno = 285;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            if (tmp_or_left_truth_2 == 1) {
                goto or_left_2;
            } else {
                goto or_right_2;
            }
            or_right_2:;
            Py_DECREF(tmp_or_left_value_2);
            CHECK_OBJECT(var_needsShift);
            tmp_or_right_value_2 = var_needsShift;
            Py_INCREF(tmp_or_right_value_2);
            tmp_tuple_element_4 = tmp_or_right_value_2;
            goto or_end_2;
            or_left_2:;
            tmp_tuple_element_4 = tmp_or_left_value_2;
            or_end_2:;
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[10];
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_iter_arg_2, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_7 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        assert(!(tmp_assign_source_7 == NULL));
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 284;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_3 = tmp_for_loop_1__iter_value;
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 284;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_11 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 284;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooo";
                    exception_lineno = 284;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[4];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 284;
            goto try_except_handler_6;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_apply_mod;
            var_apply_mod = tmp_assign_source_12;
            Py_INCREF(var_apply_mod);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_vk_mod;
            var_vk_mod = tmp_assign_source_13;
            Py_INCREF(var_vk_mod);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_apply_mod);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_apply_mod);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[12]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[13]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[14]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_vk_mod);
        tmp_args_element_value_2 = var_vk_mod;
        tmp_args_element_value_3 = mod_consts[15];
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 287;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_5 = mod_consts[15];
        frame_56891a14998100a29921f53ef8e46223->m_frame.f_lineno = 287;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 284;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[12]);
        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[13]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[14]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vkCode);
        tmp_args_element_value_6 = var_vkCode;
        tmp_args_element_value_7 = mod_consts[15];
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 288;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[15];
        frame_56891a14998100a29921f53ef8e46223->m_frame.f_lineno = 288;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_tuple_element_6;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_bitand_expr_left_4;
        PyObject *tmp_bitand_expr_right_4;
        CHECK_OBJECT(var_mods);
        tmp_bitand_expr_left_4 = var_mods;
        tmp_bitand_expr_right_4 = mod_consts[9];
        tmp_or_left_value_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_4, tmp_bitand_expr_right_4);
        if (tmp_or_left_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_3);

            exception_lineno = 289;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        Py_DECREF(tmp_or_left_value_3);
        CHECK_OBJECT(var_needsShift);
        tmp_or_right_value_3 = var_needsShift;
        Py_INCREF(tmp_or_right_value_3);
        tmp_tuple_element_6 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_tuple_element_6 = tmp_or_left_value_3;
        or_end_3:;
        tmp_tuple_element_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_tuple_element_5, 0, tmp_tuple_element_6);
        tmp_tuple_element_6 = mod_consts[10];
        PyTuple_SET_ITEM0(tmp_tuple_element_5, 1, tmp_tuple_element_6);
        tmp_iter_arg_4 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_bitand_expr_left_5;
            PyObject *tmp_bitand_expr_right_5;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_bitand_expr_left_6;
            PyObject *tmp_bitand_expr_right_6;
            PyTuple_SET_ITEM(tmp_iter_arg_4, 0, tmp_tuple_element_5);
            CHECK_OBJECT(var_mods);
            tmp_bitand_expr_left_5 = var_mods;
            tmp_bitand_expr_right_5 = mod_consts[7];
            tmp_tuple_element_7 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_5, tmp_bitand_expr_right_5);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;
                type_description_1 = "oooooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_tuple_element_5, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[8];
            PyTuple_SET_ITEM0(tmp_tuple_element_5, 1, tmp_tuple_element_7);
            PyTuple_SET_ITEM(tmp_iter_arg_4, 1, tmp_tuple_element_5);
            CHECK_OBJECT(var_mods);
            tmp_bitand_expr_left_6 = var_mods;
            tmp_bitand_expr_right_6 = mod_consts[5];
            tmp_tuple_element_8 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_6, tmp_bitand_expr_right_6);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_1 = "oooooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_tuple_element_5, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_tuple_element_5, 1, tmp_tuple_element_8);
            PyTuple_SET_ITEM(tmp_iter_arg_4, 2, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_iter_arg_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_14 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        assert(!(tmp_assign_source_14 == NULL));
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_14;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_15 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_15 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 289;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_5 = tmp_for_loop_2__iter_value;
        tmp_assign_source_16 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tstate, tmp_unpack_5, 0, 2);
        if (tmp_assign_source_17 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 289;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tstate, tmp_unpack_6, 1, 2);
        if (tmp_assign_source_18 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 289;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooo";
                    exception_lineno = 289;
                    goto try_except_handler_9;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[4];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 289;
            goto try_except_handler_9;
        }
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_8;
    // End of try:
    try_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_7;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_19 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_apply_mod;
            var_apply_mod = tmp_assign_source_19;
            Py_INCREF(var_apply_mod);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_20 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_vk_mod;
            var_vk_mod = tmp_assign_source_20;
            Py_INCREF(var_vk_mod);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_apply_mod);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_apply_mod);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[12]);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[13]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[14]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_vk_mod);
        tmp_args_element_value_10 = var_vk_mod;
        tmp_args_element_value_11 = mod_consts[15];
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 292;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
        tmp_args_element_value_13 = mod_consts[15];
        frame_56891a14998100a29921f53ef8e46223->m_frame.f_lineno = 292;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_3:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 289;
        type_description_1 = "oooooo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_56891a14998100a29921f53ef8e46223, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_56891a14998100a29921f53ef8e46223->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_56891a14998100a29921f53ef8e46223, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_56891a14998100a29921f53ef8e46223,
        type_description_1,
        par_key,
        var_needsShift,
        var_mods,
        var_vkCode,
        var_apply_mod,
        var_vk_mod
    );


    // Release cached frame if used for exception.
    if (frame_56891a14998100a29921f53ef8e46223 == cache_frame_56891a14998100a29921f53ef8e46223) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_56891a14998100a29921f53ef8e46223);
        cache_frame_56891a14998100a29921f53ef8e46223 = NULL;
    }

    assertFrameObject(frame_56891a14998100a29921f53ef8e46223);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_needsShift);
    var_needsShift = NULL;
    Py_XDECREF(var_mods);
    var_mods = NULL;
    Py_XDECREF(var_vkCode);
    var_vkCode = NULL;
    Py_XDECREF(var_apply_mod);
    var_apply_mod = NULL;
    Py_XDECREF(var_vk_mod);
    var_vk_mod = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_needsShift);
    var_needsShift = NULL;
    Py_XDECREF(var_mods);
    var_mods = NULL;
    Py_XDECREF(var_vkCode);
    var_vkCode = NULL;
    Py_XDECREF(var_apply_mod);
    var_apply_mod = NULL;
    Py_XDECREF(var_vk_mod);
    var_vk_mod = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyautogui$_pyautogui_win$$$function__2__keyUp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var_needsShift = NULL;
    PyObject *var_mods = NULL;
    PyObject *var_vkCode = NULL;
    PyObject *var_apply_mod = NULL;
    PyObject *var_vk_mod = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_88069d726c466e7f6884cb3f749281df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_88069d726c466e7f6884cb3f749281df = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_88069d726c466e7f6884cb3f749281df)) {
        Py_XDECREF(cache_frame_88069d726c466e7f6884cb3f749281df);

#if _DEBUG_REFCOUNTS
        if (cache_frame_88069d726c466e7f6884cb3f749281df == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_88069d726c466e7f6884cb3f749281df = MAKE_FUNCTION_FRAME(tstate, codeobj_88069d726c466e7f6884cb3f749281df, module_pyautogui$_pyautogui_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_88069d726c466e7f6884cb3f749281df->m_type_description == NULL);
    frame_88069d726c466e7f6884cb3f749281df = cache_frame_88069d726c466e7f6884cb3f749281df;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_88069d726c466e7f6884cb3f749281df);
    assert(Py_REFCNT(frame_88069d726c466e7f6884cb3f749281df) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_key);
        tmp_cmp_expr_left_1 = par_key;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_subscript_value_1 = par_key;
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_or_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 != false) {
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        frame_88069d726c466e7f6884cb3f749281df->m_frame.f_lineno = 308;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[2], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_needsShift == NULL);
        var_needsShift = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_divmod_expr_left_1;
        PyObject *tmp_divmod_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_key);
        tmp_subscript_value_2 = par_key;
        tmp_divmod_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_divmod_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_divmod_expr_right_1 = mod_consts[3];
        tmp_iter_arg_1 = BINARY_OPERATION_DIVMOD_OBJECT_OBJECT_LONG(tmp_divmod_expr_left_1, tmp_divmod_expr_right_1);
        Py_DECREF(tmp_divmod_expr_left_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 322;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 322;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                    type_description_1 = "oooooo";
                    exception_lineno = 322;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[4];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 322;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_mods == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_mods = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_vkCode == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_vkCode = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        CHECK_OBJECT(var_mods);
        tmp_bitand_expr_left_1 = var_mods;
        tmp_bitand_expr_right_1 = mod_consts[5];
        tmp_tuple_element_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[6];
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
        tmp_iter_arg_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_bitand_expr_left_2;
            PyObject *tmp_bitand_expr_right_2;
            PyObject *tmp_tuple_element_4;
            int tmp_or_left_truth_2;
            PyObject *tmp_or_left_value_2;
            PyObject *tmp_or_right_value_2;
            PyObject *tmp_bitand_expr_left_3;
            PyObject *tmp_bitand_expr_right_3;
            PyTuple_SET_ITEM(tmp_iter_arg_2, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_mods);
            tmp_bitand_expr_left_2 = var_mods;
            tmp_bitand_expr_right_2 = mod_consts[7];
            tmp_tuple_element_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[8];
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_iter_arg_2, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_mods);
            tmp_bitand_expr_left_3 = var_mods;
            tmp_bitand_expr_right_3 = mod_consts[9];
            tmp_or_left_value_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
            if (tmp_or_left_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
            if (tmp_or_left_truth_2 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_or_left_value_2);

                exception_lineno = 325;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            if (tmp_or_left_truth_2 == 1) {
                goto or_left_2;
            } else {
                goto or_right_2;
            }
            or_right_2:;
            Py_DECREF(tmp_or_left_value_2);
            CHECK_OBJECT(var_needsShift);
            tmp_or_right_value_2 = var_needsShift;
            Py_INCREF(tmp_or_right_value_2);
            tmp_tuple_element_4 = tmp_or_right_value_2;
            goto or_end_2;
            or_left_2:;
            tmp_tuple_element_4 = tmp_or_left_value_2;
            or_end_2:;
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[10];
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_iter_arg_2, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_7 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        assert(!(tmp_assign_source_7 == NULL));
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 324;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_3 = tmp_for_loop_1__iter_value;
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 324;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_11 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 324;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooo";
                    exception_lineno = 324;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[4];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 324;
            goto try_except_handler_6;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_apply_mod;
            var_apply_mod = tmp_assign_source_12;
            Py_INCREF(var_apply_mod);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_vk_mod;
            var_vk_mod = tmp_assign_source_13;
            Py_INCREF(var_vk_mod);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_apply_mod);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_apply_mod);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[12]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[13]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_vk_mod);
        tmp_args_element_value_2 = var_vk_mod;
        tmp_args_element_value_3 = mod_consts[15];
        tmp_args_element_value_4 = mod_consts[15];
        tmp_args_element_value_5 = mod_consts[15];
        frame_88069d726c466e7f6884cb3f749281df->m_frame.f_lineno = 327;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS4(
                tstate,
                tmp_called_instance_2,
                mod_consts[14],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 324;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[12]);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[13]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[14]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vkCode);
        tmp_args_element_value_6 = var_vkCode;
        tmp_args_element_value_7 = mod_consts[15];
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 328;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[15];
        frame_88069d726c466e7f6884cb3f749281df->m_frame.f_lineno = 328;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_tuple_element_6;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_bitand_expr_left_4;
        PyObject *tmp_bitand_expr_right_4;
        CHECK_OBJECT(var_mods);
        tmp_bitand_expr_left_4 = var_mods;
        tmp_bitand_expr_right_4 = mod_consts[9];
        tmp_or_left_value_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_4, tmp_bitand_expr_right_4);
        if (tmp_or_left_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_3);

            exception_lineno = 329;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        Py_DECREF(tmp_or_left_value_3);
        CHECK_OBJECT(var_needsShift);
        tmp_or_right_value_3 = var_needsShift;
        Py_INCREF(tmp_or_right_value_3);
        tmp_tuple_element_6 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_tuple_element_6 = tmp_or_left_value_3;
        or_end_3:;
        tmp_tuple_element_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_tuple_element_5, 0, tmp_tuple_element_6);
        tmp_tuple_element_6 = mod_consts[10];
        PyTuple_SET_ITEM0(tmp_tuple_element_5, 1, tmp_tuple_element_6);
        tmp_iter_arg_4 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_bitand_expr_left_5;
            PyObject *tmp_bitand_expr_right_5;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_bitand_expr_left_6;
            PyObject *tmp_bitand_expr_right_6;
            PyTuple_SET_ITEM(tmp_iter_arg_4, 0, tmp_tuple_element_5);
            CHECK_OBJECT(var_mods);
            tmp_bitand_expr_left_5 = var_mods;
            tmp_bitand_expr_right_5 = mod_consts[7];
            tmp_tuple_element_7 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_5, tmp_bitand_expr_right_5);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_1 = "oooooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_tuple_element_5, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[8];
            PyTuple_SET_ITEM0(tmp_tuple_element_5, 1, tmp_tuple_element_7);
            PyTuple_SET_ITEM(tmp_iter_arg_4, 1, tmp_tuple_element_5);
            CHECK_OBJECT(var_mods);
            tmp_bitand_expr_left_6 = var_mods;
            tmp_bitand_expr_right_6 = mod_consts[5];
            tmp_tuple_element_8 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_6, tmp_bitand_expr_right_6);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;
                type_description_1 = "oooooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_tuple_element_5, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_tuple_element_5, 1, tmp_tuple_element_8);
            PyTuple_SET_ITEM(tmp_iter_arg_4, 2, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_iter_arg_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_14 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        assert(!(tmp_assign_source_14 == NULL));
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_14;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_15 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_15 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 329;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_5 = tmp_for_loop_2__iter_value;
        tmp_assign_source_16 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tstate, tmp_unpack_5, 0, 2);
        if (tmp_assign_source_17 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 329;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tstate, tmp_unpack_6, 1, 2);
        if (tmp_assign_source_18 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 329;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooo";
                    exception_lineno = 329;
                    goto try_except_handler_9;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[4];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 329;
            goto try_except_handler_9;
        }
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_8;
    // End of try:
    try_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_7;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_19 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_apply_mod;
            var_apply_mod = tmp_assign_source_19;
            Py_INCREF(var_apply_mod);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_20 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_vk_mod;
            var_vk_mod = tmp_assign_source_20;
            Py_INCREF(var_vk_mod);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_apply_mod);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_apply_mod);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[12]);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[13]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[14]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_vk_mod);
        tmp_args_element_value_10 = var_vk_mod;
        tmp_args_element_value_11 = mod_consts[15];
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 332;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
        tmp_args_element_value_13 = mod_consts[15];
        frame_88069d726c466e7f6884cb3f749281df->m_frame.f_lineno = 332;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_3:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 329;
        type_description_1 = "oooooo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_88069d726c466e7f6884cb3f749281df, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_88069d726c466e7f6884cb3f749281df->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_88069d726c466e7f6884cb3f749281df, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_88069d726c466e7f6884cb3f749281df,
        type_description_1,
        par_key,
        var_needsShift,
        var_mods,
        var_vkCode,
        var_apply_mod,
        var_vk_mod
    );


    // Release cached frame if used for exception.
    if (frame_88069d726c466e7f6884cb3f749281df == cache_frame_88069d726c466e7f6884cb3f749281df) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_88069d726c466e7f6884cb3f749281df);
        cache_frame_88069d726c466e7f6884cb3f749281df = NULL;
    }

    assertFrameObject(frame_88069d726c466e7f6884cb3f749281df);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_needsShift);
    var_needsShift = NULL;
    Py_XDECREF(var_mods);
    var_mods = NULL;
    Py_XDECREF(var_vkCode);
    var_vkCode = NULL;
    Py_XDECREF(var_apply_mod);
    var_apply_mod = NULL;
    Py_XDECREF(var_vk_mod);
    var_vk_mod = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_needsShift);
    var_needsShift = NULL;
    Py_XDECREF(var_mods);
    var_mods = NULL;
    Py_XDECREF(var_vkCode);
    var_vkCode = NULL;
    Py_XDECREF(var_apply_mod);
    var_apply_mod = NULL;
    Py_XDECREF(var_vk_mod);
    var_vk_mod = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyautogui$_pyautogui_win$$$function__3__position(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_cursor = NULL;
    struct Nuitka_FrameObject *frame_9ee1ec09e920cf836aef88673517b5b6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9ee1ec09e920cf836aef88673517b5b6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9ee1ec09e920cf836aef88673517b5b6)) {
        Py_XDECREF(cache_frame_9ee1ec09e920cf836aef88673517b5b6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9ee1ec09e920cf836aef88673517b5b6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9ee1ec09e920cf836aef88673517b5b6 = MAKE_FUNCTION_FRAME(tstate, codeobj_9ee1ec09e920cf836aef88673517b5b6, module_pyautogui$_pyautogui_win, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9ee1ec09e920cf836aef88673517b5b6->m_type_description == NULL);
    frame_9ee1ec09e920cf836aef88673517b5b6 = cache_frame_9ee1ec09e920cf836aef88673517b5b6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9ee1ec09e920cf836aef88673517b5b6);
    assert(Py_REFCNT(frame_9ee1ec09e920cf836aef88673517b5b6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[20]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_9ee1ec09e920cf836aef88673517b5b6->m_frame.f_lineno = 343;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[21]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_cursor == NULL);
        var_cursor = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[12]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[13]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[22]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 344;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cursor);
        tmp_args_element_value_2 = var_cursor;
        frame_9ee1ec09e920cf836aef88673517b5b6->m_frame.f_lineno = 344;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[23], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 344;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_9ee1ec09e920cf836aef88673517b5b6->m_frame.f_lineno = 344;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_cursor);
        tmp_expression_value_5 = var_cursor;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[24]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_cursor);
            tmp_expression_value_6 = var_cursor;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[25]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_9ee1ec09e920cf836aef88673517b5b6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ee1ec09e920cf836aef88673517b5b6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ee1ec09e920cf836aef88673517b5b6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9ee1ec09e920cf836aef88673517b5b6,
        type_description_1,
        var_cursor
    );


    // Release cached frame if used for exception.
    if (frame_9ee1ec09e920cf836aef88673517b5b6 == cache_frame_9ee1ec09e920cf836aef88673517b5b6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9ee1ec09e920cf836aef88673517b5b6);
        cache_frame_9ee1ec09e920cf836aef88673517b5b6 = NULL;
    }

    assertFrameObject(frame_9ee1ec09e920cf836aef88673517b5b6);

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


static PyObject *impl_pyautogui$_pyautogui_win$$$function__4__size(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_fa0864e8b93d2b102bc24bd9b394a672;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fa0864e8b93d2b102bc24bd9b394a672 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fa0864e8b93d2b102bc24bd9b394a672)) {
        Py_XDECREF(cache_frame_fa0864e8b93d2b102bc24bd9b394a672);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fa0864e8b93d2b102bc24bd9b394a672 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fa0864e8b93d2b102bc24bd9b394a672 = MAKE_FUNCTION_FRAME(tstate, codeobj_fa0864e8b93d2b102bc24bd9b394a672, module_pyautogui$_pyautogui_win, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fa0864e8b93d2b102bc24bd9b394a672->m_type_description == NULL);
    frame_fa0864e8b93d2b102bc24bd9b394a672 = cache_frame_fa0864e8b93d2b102bc24bd9b394a672;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fa0864e8b93d2b102bc24bd9b394a672);
    assert(Py_REFCNT(frame_fa0864e8b93d2b102bc24bd9b394a672) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[12]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[13]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        frame_fa0864e8b93d2b102bc24bd9b394a672->m_frame.f_lineno = 354;
        tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[28], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;

                goto tuple_build_exception_1;
            }
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[12]);
            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;

                goto tuple_build_exception_1;
            }
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[13]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_called_instance_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;

                goto tuple_build_exception_1;
            }
            frame_fa0864e8b93d2b102bc24bd9b394a672->m_frame.f_lineno = 354;
            tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tstate,
                tmp_called_instance_2,
                mod_consts[27],
                PyTuple_GET_ITEM(mod_consts[29], 0)
            );

            Py_DECREF(tmp_called_instance_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_fa0864e8b93d2b102bc24bd9b394a672, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fa0864e8b93d2b102bc24bd9b394a672->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fa0864e8b93d2b102bc24bd9b394a672, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fa0864e8b93d2b102bc24bd9b394a672,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_fa0864e8b93d2b102bc24bd9b394a672 == cache_frame_fa0864e8b93d2b102bc24bd9b394a672) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fa0864e8b93d2b102bc24bd9b394a672);
        cache_frame_fa0864e8b93d2b102bc24bd9b394a672 = NULL;
    }

    assertFrameObject(frame_fa0864e8b93d2b102bc24bd9b394a672);

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


static PyObject *impl_pyautogui$_pyautogui_win$$$function__5__moveTo(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_10aca6dd76b5ba856164b1ef9c0b6f91;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_10aca6dd76b5ba856164b1ef9c0b6f91 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_10aca6dd76b5ba856164b1ef9c0b6f91)) {
        Py_XDECREF(cache_frame_10aca6dd76b5ba856164b1ef9c0b6f91);

#if _DEBUG_REFCOUNTS
        if (cache_frame_10aca6dd76b5ba856164b1ef9c0b6f91 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_10aca6dd76b5ba856164b1ef9c0b6f91 = MAKE_FUNCTION_FRAME(tstate, codeobj_10aca6dd76b5ba856164b1ef9c0b6f91, module_pyautogui$_pyautogui_win, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_10aca6dd76b5ba856164b1ef9c0b6f91->m_type_description == NULL);
    frame_10aca6dd76b5ba856164b1ef9c0b6f91 = cache_frame_10aca6dd76b5ba856164b1ef9c0b6f91;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_10aca6dd76b5ba856164b1ef9c0b6f91);
    assert(Py_REFCNT(frame_10aca6dd76b5ba856164b1ef9c0b6f91) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[12]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[13]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_args_element_value_2 = par_y;
        frame_10aca6dd76b5ba856164b1ef9c0b6f91->m_frame.f_lineno = 369;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[31],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
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
        exception_tb = MAKE_TRACEBACK(frame_10aca6dd76b5ba856164b1ef9c0b6f91, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_10aca6dd76b5ba856164b1ef9c0b6f91->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_10aca6dd76b5ba856164b1ef9c0b6f91, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_10aca6dd76b5ba856164b1ef9c0b6f91,
        type_description_1,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_10aca6dd76b5ba856164b1ef9c0b6f91 == cache_frame_10aca6dd76b5ba856164b1ef9c0b6f91) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_10aca6dd76b5ba856164b1ef9c0b6f91);
        cache_frame_10aca6dd76b5ba856164b1ef9c0b6f91 = NULL;
    }

    assertFrameObject(frame_10aca6dd76b5ba856164b1ef9c0b6f91);

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


static PyObject *impl_pyautogui$_pyautogui_win$$$function__6__mouseDown(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    PyObject *par_button = python_pars[2];
    PyObject *var_EV = NULL;
    struct Nuitka_FrameObject *frame_d3385933638c9bf71d45d3e27cfa90a5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_d3385933638c9bf71d45d3e27cfa90a5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d3385933638c9bf71d45d3e27cfa90a5)) {
        Py_XDECREF(cache_frame_d3385933638c9bf71d45d3e27cfa90a5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d3385933638c9bf71d45d3e27cfa90a5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d3385933638c9bf71d45d3e27cfa90a5 = MAKE_FUNCTION_FRAME(tstate, codeobj_d3385933638c9bf71d45d3e27cfa90a5, module_pyautogui$_pyautogui_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d3385933638c9bf71d45d3e27cfa90a5->m_type_description == NULL);
    frame_d3385933638c9bf71d45d3e27cfa90a5 = cache_frame_d3385933638c9bf71d45d3e27cfa90a5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d3385933638c9bf71d45d3e27cfa90a5);
    assert(Py_REFCNT(frame_d3385933638c9bf71d45d3e27cfa90a5) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_button);
        tmp_cmp_expr_left_1 = par_button;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 2, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[36];
        CHECK_OBJECT(par_button);
        tmp_mod_expr_right_1 = par_button;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d3385933638c9bf71d45d3e27cfa90a5->m_frame.f_lineno = 388;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 388;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_button);
        tmp_cmp_expr_left_2 = par_button;
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_assign_source_1 == NULL)) {
            tmp_assign_source_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_EV == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_EV = tmp_assign_source_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_button);
        tmp_cmp_expr_left_3 = par_button;
        tmp_cmp_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
            tmp_cmp_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_cmp_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_assign_source_2 == NULL)) {
            tmp_assign_source_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_EV == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_EV = tmp_assign_source_2;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_button);
        tmp_cmp_expr_left_4 = par_button;
        tmp_cmp_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
            tmp_cmp_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_cmp_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_assign_source_3 == NULL)) {
            tmp_assign_source_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_EV == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_EV = tmp_assign_source_3;
    }
    branch_no_4:;
    branch_end_3:;
    branch_end_2:;
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (var_EV == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 398;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = var_EV;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        CHECK_OBJECT(par_y);
        tmp_args_element_value_3 = par_y;
        frame_d3385933638c9bf71d45d3e27cfa90a5->m_frame.f_lineno = 398;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_d3385933638c9bf71d45d3e27cfa90a5, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_d3385933638c9bf71d45d3e27cfa90a5, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_5 = mod_consts[42];
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 397;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d3385933638c9bf71d45d3e27cfa90a5->m_frame) frame_d3385933638c9bf71d45d3e27cfa90a5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_no_5:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d3385933638c9bf71d45d3e27cfa90a5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d3385933638c9bf71d45d3e27cfa90a5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d3385933638c9bf71d45d3e27cfa90a5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d3385933638c9bf71d45d3e27cfa90a5,
        type_description_1,
        par_x,
        par_y,
        par_button,
        var_EV
    );


    // Release cached frame if used for exception.
    if (frame_d3385933638c9bf71d45d3e27cfa90a5 == cache_frame_d3385933638c9bf71d45d3e27cfa90a5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d3385933638c9bf71d45d3e27cfa90a5);
        cache_frame_d3385933638c9bf71d45d3e27cfa90a5 = NULL;
    }

    assertFrameObject(frame_d3385933638c9bf71d45d3e27cfa90a5);

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
    Py_XDECREF(var_EV);
    var_EV = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_EV);
    var_EV = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_button);
    Py_DECREF(par_button);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_button);
    Py_DECREF(par_button);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyautogui$_pyautogui_win$$$function__7__mouseUp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    PyObject *par_button = python_pars[2];
    PyObject *var_EV = NULL;
    struct Nuitka_FrameObject *frame_8388452b3192b143ec9620022d4f9aec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_8388452b3192b143ec9620022d4f9aec = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8388452b3192b143ec9620022d4f9aec)) {
        Py_XDECREF(cache_frame_8388452b3192b143ec9620022d4f9aec);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8388452b3192b143ec9620022d4f9aec == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8388452b3192b143ec9620022d4f9aec = MAKE_FUNCTION_FRAME(tstate, codeobj_8388452b3192b143ec9620022d4f9aec, module_pyautogui$_pyautogui_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8388452b3192b143ec9620022d4f9aec->m_type_description == NULL);
    frame_8388452b3192b143ec9620022d4f9aec = cache_frame_8388452b3192b143ec9620022d4f9aec;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8388452b3192b143ec9620022d4f9aec);
    assert(Py_REFCNT(frame_8388452b3192b143ec9620022d4f9aec) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_button);
        tmp_cmp_expr_left_1 = par_button;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 2, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[36];
        CHECK_OBJECT(par_button);
        tmp_mod_expr_right_1 = par_button;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_8388452b3192b143ec9620022d4f9aec->m_frame.f_lineno = 417;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 417;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_button);
        tmp_cmp_expr_left_2 = par_button;
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_assign_source_1 == NULL)) {
            tmp_assign_source_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_EV == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_EV = tmp_assign_source_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_button);
        tmp_cmp_expr_left_3 = par_button;
        tmp_cmp_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
            tmp_cmp_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_cmp_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assign_source_2 == NULL)) {
            tmp_assign_source_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_EV == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_EV = tmp_assign_source_2;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_button);
        tmp_cmp_expr_left_4 = par_button;
        tmp_cmp_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
            tmp_cmp_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_cmp_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_assign_source_3 == NULL)) {
            tmp_assign_source_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_EV == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_EV = tmp_assign_source_3;
    }
    branch_no_4:;
    branch_end_3:;
    branch_end_2:;
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (var_EV == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 427;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = var_EV;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        CHECK_OBJECT(par_y);
        tmp_args_element_value_3 = par_y;
        frame_8388452b3192b143ec9620022d4f9aec->m_frame.f_lineno = 427;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_8388452b3192b143ec9620022d4f9aec, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_8388452b3192b143ec9620022d4f9aec, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_5 = mod_consts[42];
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 426;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_8388452b3192b143ec9620022d4f9aec->m_frame) frame_8388452b3192b143ec9620022d4f9aec->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_no_5:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8388452b3192b143ec9620022d4f9aec, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8388452b3192b143ec9620022d4f9aec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8388452b3192b143ec9620022d4f9aec, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8388452b3192b143ec9620022d4f9aec,
        type_description_1,
        par_x,
        par_y,
        par_button,
        var_EV
    );


    // Release cached frame if used for exception.
    if (frame_8388452b3192b143ec9620022d4f9aec == cache_frame_8388452b3192b143ec9620022d4f9aec) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8388452b3192b143ec9620022d4f9aec);
        cache_frame_8388452b3192b143ec9620022d4f9aec = NULL;
    }

    assertFrameObject(frame_8388452b3192b143ec9620022d4f9aec);

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
    Py_XDECREF(var_EV);
    var_EV = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_EV);
    var_EV = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_button);
    Py_DECREF(par_button);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_button);
    Py_DECREF(par_button);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyautogui$_pyautogui_win$$$function__8__click(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    PyObject *par_button = python_pars[2];
    PyObject *var_EV = NULL;
    struct Nuitka_FrameObject *frame_620e5c0cef9d029c9ed1d22615ed893f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_620e5c0cef9d029c9ed1d22615ed893f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_620e5c0cef9d029c9ed1d22615ed893f)) {
        Py_XDECREF(cache_frame_620e5c0cef9d029c9ed1d22615ed893f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_620e5c0cef9d029c9ed1d22615ed893f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_620e5c0cef9d029c9ed1d22615ed893f = MAKE_FUNCTION_FRAME(tstate, codeobj_620e5c0cef9d029c9ed1d22615ed893f, module_pyautogui$_pyautogui_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_620e5c0cef9d029c9ed1d22615ed893f->m_type_description == NULL);
    frame_620e5c0cef9d029c9ed1d22615ed893f = cache_frame_620e5c0cef9d029c9ed1d22615ed893f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_620e5c0cef9d029c9ed1d22615ed893f);
    assert(Py_REFCNT(frame_620e5c0cef9d029c9ed1d22615ed893f) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_button);
        tmp_cmp_expr_left_1 = par_button;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "oooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "oooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 2, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[36];
        CHECK_OBJECT(par_button);
        tmp_mod_expr_right_1 = par_button;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_620e5c0cef9d029c9ed1d22615ed893f->m_frame.f_lineno = 445;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 445;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_button);
        tmp_cmp_expr_left_2 = par_button;
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_assign_source_1 == NULL)) {
            tmp_assign_source_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_EV == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_EV = tmp_assign_source_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_button);
        tmp_cmp_expr_left_3 = par_button;
        tmp_cmp_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
            tmp_cmp_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_cmp_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_assign_source_2 == NULL)) {
            tmp_assign_source_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_EV == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_EV = tmp_assign_source_2;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_button);
        tmp_cmp_expr_left_4 = par_button;
        tmp_cmp_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
            tmp_cmp_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_cmp_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_assign_source_3 == NULL)) {
            tmp_assign_source_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_EV == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_EV = tmp_assign_source_3;
    }
    branch_no_4:;
    branch_end_3:;
    branch_end_2:;
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (var_EV == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 455;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = var_EV;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        CHECK_OBJECT(par_y);
        tmp_args_element_value_3 = par_y;
        frame_620e5c0cef9d029c9ed1d22615ed893f->m_frame.f_lineno = 455;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_620e5c0cef9d029c9ed1d22615ed893f, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_620e5c0cef9d029c9ed1d22615ed893f, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_5 = mod_consts[42];
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 454;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_620e5c0cef9d029c9ed1d22615ed893f->m_frame) frame_620e5c0cef9d029c9ed1d22615ed893f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_no_5:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_620e5c0cef9d029c9ed1d22615ed893f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_620e5c0cef9d029c9ed1d22615ed893f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_620e5c0cef9d029c9ed1d22615ed893f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_620e5c0cef9d029c9ed1d22615ed893f,
        type_description_1,
        par_x,
        par_y,
        par_button,
        var_EV
    );


    // Release cached frame if used for exception.
    if (frame_620e5c0cef9d029c9ed1d22615ed893f == cache_frame_620e5c0cef9d029c9ed1d22615ed893f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_620e5c0cef9d029c9ed1d22615ed893f);
        cache_frame_620e5c0cef9d029c9ed1d22615ed893f = NULL;
    }

    assertFrameObject(frame_620e5c0cef9d029c9ed1d22615ed893f);

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
    Py_XDECREF(var_EV);
    var_EV = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_EV);
    var_EV = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_button);
    Py_DECREF(par_button);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_button);
    Py_DECREF(par_button);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_cd935cb9a98fee09cf9333d1878ca30e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cd935cb9a98fee09cf9333d1878ca30e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cd935cb9a98fee09cf9333d1878ca30e)) {
        Py_XDECREF(cache_frame_cd935cb9a98fee09cf9333d1878ca30e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cd935cb9a98fee09cf9333d1878ca30e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cd935cb9a98fee09cf9333d1878ca30e = MAKE_FUNCTION_FRAME(tstate, codeobj_cd935cb9a98fee09cf9333d1878ca30e, module_pyautogui$_pyautogui_win, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cd935cb9a98fee09cf9333d1878ca30e->m_type_description == NULL);
    frame_cd935cb9a98fee09cf9333d1878ca30e = cache_frame_cd935cb9a98fee09cf9333d1878ca30e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cd935cb9a98fee09cf9333d1878ca30e);
    assert(Py_REFCNT(frame_cd935cb9a98fee09cf9333d1878ca30e) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[12]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[13]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        frame_cd935cb9a98fee09cf9333d1878ca30e->m_frame.f_lineno = 464;
        tmp_cmp_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[52], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[15];
        tmp_return_value = RICH_COMPARE_NE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;

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
        exception_tb = MAKE_TRACEBACK(frame_cd935cb9a98fee09cf9333d1878ca30e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cd935cb9a98fee09cf9333d1878ca30e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cd935cb9a98fee09cf9333d1878ca30e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cd935cb9a98fee09cf9333d1878ca30e,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_cd935cb9a98fee09cf9333d1878ca30e == cache_frame_cd935cb9a98fee09cf9333d1878ca30e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cd935cb9a98fee09cf9333d1878ca30e);
        cache_frame_cd935cb9a98fee09cf9333d1878ca30e = NULL;
    }

    assertFrameObject(frame_cd935cb9a98fee09cf9333d1878ca30e);

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


static PyObject *impl_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_ev = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_y = python_pars[2];
    PyObject *par_dwData = python_pars[3];
    PyObject *var_width = NULL;
    PyObject *var_height = NULL;
    PyObject *var_convertedX = NULL;
    PyObject *var_convertedY = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3a66777896150b7ab5e703dc76c25719;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3a66777896150b7ab5e703dc76c25719 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3a66777896150b7ab5e703dc76c25719)) {
        Py_XDECREF(cache_frame_3a66777896150b7ab5e703dc76c25719);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3a66777896150b7ab5e703dc76c25719 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3a66777896150b7ab5e703dc76c25719 = MAKE_FUNCTION_FRAME(tstate, codeobj_3a66777896150b7ab5e703dc76c25719, module_pyautogui$_pyautogui_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3a66777896150b7ab5e703dc76c25719->m_type_description == NULL);
    frame_3a66777896150b7ab5e703dc76c25719 = cache_frame_3a66777896150b7ab5e703dc76c25719;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3a66777896150b7ab5e703dc76c25719);
    assert(Py_REFCNT(frame_3a66777896150b7ab5e703dc76c25719) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_1 = par_x;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_and_left_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 481;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        CHECK_OBJECT(par_y);
        tmp_cmp_expr_left_2 = par_y;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_and_right_value_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_and_right_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_operand_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[53];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 481;
        RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_3a66777896150b7ab5e703dc76c25719->m_frame.f_lineno = 497;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 497;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 497;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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

                    type_description_1 = "oooooooo";
                    exception_lineno = 497;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[4];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooo";
            exception_lineno = 497;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_width == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_width = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_height == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_height = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_mult_expr_left_1 = mod_consts[55];
        CHECK_OBJECT(par_x);
        tmp_mult_expr_right_1 = par_x;
        tmp_floordiv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_floordiv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_width);
        tmp_floordiv_expr_right_1 = var_width;
        tmp_add_expr_left_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        Py_DECREF(tmp_floordiv_expr_left_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[9];
        tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_convertedX == NULL);
        var_convertedX = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_floordiv_expr_left_2;
        PyObject *tmp_floordiv_expr_right_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        tmp_mult_expr_left_2 = mod_consts[55];
        CHECK_OBJECT(par_y);
        tmp_mult_expr_right_2 = par_y;
        tmp_floordiv_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_floordiv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_height);
        tmp_floordiv_expr_right_2 = var_height;
        tmp_add_expr_left_2 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
        Py_DECREF(tmp_floordiv_expr_left_2);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[9];
        tmp_assign_source_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_convertedY == NULL);
        var_convertedY = tmp_assign_source_7;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[12]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[13]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[56]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ev);
        tmp_args_element_value_1 = par_ev;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 500;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_convertedX);
        tmp_args_element_value_3 = var_convertedX;
        frame_3a66777896150b7ab5e703dc76c25719->m_frame.f_lineno = 500;
        tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[57], tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 500;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 500;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_convertedY);
        tmp_args_element_value_5 = var_convertedY;
        frame_3a66777896150b7ab5e703dc76c25719->m_frame.f_lineno = 500;
        tmp_args_element_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[57], tmp_args_element_value_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 500;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dwData);
        tmp_args_element_value_6 = par_dwData;
        tmp_args_element_value_7 = mod_consts[15];
        frame_3a66777896150b7ab5e703dc76c25719->m_frame.f_lineno = 500;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_4, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3a66777896150b7ab5e703dc76c25719, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3a66777896150b7ab5e703dc76c25719->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3a66777896150b7ab5e703dc76c25719, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3a66777896150b7ab5e703dc76c25719,
        type_description_1,
        par_ev,
        par_x,
        par_y,
        par_dwData,
        var_width,
        var_height,
        var_convertedX,
        var_convertedY
    );


    // Release cached frame if used for exception.
    if (frame_3a66777896150b7ab5e703dc76c25719 == cache_frame_3a66777896150b7ab5e703dc76c25719) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3a66777896150b7ab5e703dc76c25719);
        cache_frame_3a66777896150b7ab5e703dc76c25719 = NULL;
    }

    assertFrameObject(frame_3a66777896150b7ab5e703dc76c25719);

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
    CHECK_OBJECT(var_width);
    Py_DECREF(var_width);
    var_width = NULL;
    CHECK_OBJECT(var_height);
    Py_DECREF(var_height);
    var_height = NULL;
    CHECK_OBJECT(var_convertedX);
    Py_DECREF(var_convertedX);
    var_convertedX = NULL;
    CHECK_OBJECT(var_convertedY);
    Py_DECREF(var_convertedY);
    var_convertedY = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_width);
    var_width = NULL;
    Py_XDECREF(var_height);
    var_height = NULL;
    Py_XDECREF(var_convertedX);
    var_convertedX = NULL;
    Py_XDECREF(var_convertedY);
    var_convertedY = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ev);
    Py_DECREF(par_ev);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_dwData);
    Py_DECREF(par_dwData);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ev);
    Py_DECREF(par_ev);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_dwData);
    Py_DECREF(par_dwData);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyautogui$_pyautogui_win$$$function__11__scroll(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_clicks = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_y = python_pars[2];
    PyObject *var_startx = NULL;
    PyObject *var_starty = NULL;
    PyObject *var_width = NULL;
    PyObject *var_height = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_fc0df964ef3732bb53e7e3c3dbe6a9c3;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_fc0df964ef3732bb53e7e3c3dbe6a9c3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fc0df964ef3732bb53e7e3c3dbe6a9c3)) {
        Py_XDECREF(cache_frame_fc0df964ef3732bb53e7e3c3dbe6a9c3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fc0df964ef3732bb53e7e3c3dbe6a9c3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fc0df964ef3732bb53e7e3c3dbe6a9c3 = MAKE_FUNCTION_FRAME(tstate, codeobj_fc0df964ef3732bb53e7e3c3dbe6a9c3, module_pyautogui$_pyautogui_win, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fc0df964ef3732bb53e7e3c3dbe6a9c3->m_type_description == NULL);
    frame_fc0df964ef3732bb53e7e3c3dbe6a9c3 = cache_frame_fc0df964ef3732bb53e7e3c3dbe6a9c3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fc0df964ef3732bb53e7e3c3dbe6a9c3);
    assert(Py_REFCNT(frame_fc0df964ef3732bb53e7e3c3dbe6a9c3) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_fc0df964ef3732bb53e7e3c3dbe6a9c3->m_frame.f_lineno = 520;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 520;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 520;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 520;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[4];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 520;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_startx == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_startx = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_starty == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_starty = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        frame_fc0df964ef3732bb53e7e3c3dbe6a9c3->m_frame.f_lineno = 521;
        tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 521;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 521;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooo";
                    exception_lineno = 521;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[4];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 521;
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_2__element_1;
        assert(var_width == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_width = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
        assert(var_height == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_height = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_1 = par_x;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(var_startx);
        tmp_assign_source_11 = var_startx;
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_11;
            Py_INCREF(par_x);
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_2 = par_x;
        tmp_cmp_expr_right_2 = mod_consts[15];
        tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[15];
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_12;
            Py_INCREF(par_x);
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_3 = par_x;
        CHECK_OBJECT(var_width);
        tmp_cmp_expr_right_3 = var_width;
        tmp_condition_result_3 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(var_width);
        tmp_sub_expr_left_1 = var_width;
        tmp_sub_expr_right_1 = mod_consts[9];
        tmp_assign_source_13 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    branch_end_2:;
    branch_end_1:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_y);
        tmp_cmp_expr_left_4 = par_y;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(var_starty);
        tmp_assign_source_14 = var_starty;
        {
            PyObject *old = par_y;
            assert(old != NULL);
            par_y = tmp_assign_source_14;
            Py_INCREF(par_y);
            Py_DECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_y);
        tmp_cmp_expr_left_5 = par_y;
        tmp_cmp_expr_right_5 = mod_consts[15];
        tmp_condition_result_5 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[15];
        {
            PyObject *old = par_y;
            assert(old != NULL);
            par_y = tmp_assign_source_15;
            Py_INCREF(par_y);
            Py_DECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(par_y);
        tmp_cmp_expr_left_6 = par_y;
        CHECK_OBJECT(var_height);
        tmp_cmp_expr_right_6 = var_height;
        tmp_condition_result_6 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        CHECK_OBJECT(var_height);
        tmp_sub_expr_left_2 = var_height;
        tmp_sub_expr_right_2 = mod_consts[9];
        tmp_assign_source_16 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_y;
            assert(old != NULL);
            par_y = tmp_assign_source_16;
            Py_DECREF(old);
        }

    }
    branch_no_6:;
    branch_end_5:;
    branch_end_4:;
    // Tried code:
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "ooooooo";
            goto try_except_handler_6;
        }
        tmp_kw_call_arg_value_0_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
            tmp_kw_call_arg_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
        }

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "ooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(par_x);
        tmp_kw_call_arg_value_1_1 = par_x;
        CHECK_OBJECT(par_y);
        tmp_kw_call_arg_value_2_1 = par_y;
        CHECK_OBJECT(par_clicks);
        tmp_kw_call_dict_value_0_1 = par_clicks;
        frame_fc0df964ef3732bb53e7e3c3dbe6a9c3->m_frame.f_lineno = 539;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[61]);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "ooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_5 == NULL) {
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_fc0df964ef3732bb53e7e3c3dbe6a9c3, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_fc0df964ef3732bb53e7e3c3dbe6a9c3, exception_keeper_lineno_5);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_7 = mod_consts[42];
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "ooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 538;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_fc0df964ef3732bb53e7e3c3dbe6a9c3->m_frame) frame_fc0df964ef3732bb53e7e3c3dbe6a9c3->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_7;
    branch_no_7:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fc0df964ef3732bb53e7e3c3dbe6a9c3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fc0df964ef3732bb53e7e3c3dbe6a9c3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fc0df964ef3732bb53e7e3c3dbe6a9c3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fc0df964ef3732bb53e7e3c3dbe6a9c3,
        type_description_1,
        par_clicks,
        par_x,
        par_y,
        var_startx,
        var_starty,
        var_width,
        var_height
    );


    // Release cached frame if used for exception.
    if (frame_fc0df964ef3732bb53e7e3c3dbe6a9c3 == cache_frame_fc0df964ef3732bb53e7e3c3dbe6a9c3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fc0df964ef3732bb53e7e3c3dbe6a9c3);
        cache_frame_fc0df964ef3732bb53e7e3c3dbe6a9c3 = NULL;
    }

    assertFrameObject(frame_fc0df964ef3732bb53e7e3c3dbe6a9c3);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    par_x = NULL;
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    par_y = NULL;
    CHECK_OBJECT(var_startx);
    Py_DECREF(var_startx);
    var_startx = NULL;
    CHECK_OBJECT(var_starty);
    Py_DECREF(var_starty);
    var_starty = NULL;
    Py_XDECREF(var_width);
    var_width = NULL;
    Py_XDECREF(var_height);
    var_height = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_x);
    par_x = NULL;
    Py_XDECREF(par_y);
    par_y = NULL;
    Py_XDECREF(var_startx);
    var_startx = NULL;
    Py_XDECREF(var_starty);
    var_starty = NULL;
    Py_XDECREF(var_width);
    var_width = NULL;
    Py_XDECREF(var_height);
    var_height = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_clicks);
    Py_DECREF(par_clicks);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_clicks);
    Py_DECREF(par_clicks);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyautogui$_pyautogui_win$$$function__12__hscroll(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_clicks = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_y = python_pars[2];
    struct Nuitka_FrameObject *frame_86632260e6551991f8e8ba36336d11de;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_86632260e6551991f8e8ba36336d11de = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_86632260e6551991f8e8ba36336d11de)) {
        Py_XDECREF(cache_frame_86632260e6551991f8e8ba36336d11de);

#if _DEBUG_REFCOUNTS
        if (cache_frame_86632260e6551991f8e8ba36336d11de == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_86632260e6551991f8e8ba36336d11de = MAKE_FUNCTION_FRAME(tstate, codeobj_86632260e6551991f8e8ba36336d11de, module_pyautogui$_pyautogui_win, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_86632260e6551991f8e8ba36336d11de->m_type_description == NULL);
    frame_86632260e6551991f8e8ba36336d11de = cache_frame_86632260e6551991f8e8ba36336d11de;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_86632260e6551991f8e8ba36336d11de);
    assert(Py_REFCNT(frame_86632260e6551991f8e8ba36336d11de) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_clicks);
        tmp_args_element_value_1 = par_clicks;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        CHECK_OBJECT(par_y);
        tmp_args_element_value_3 = par_y;
        frame_86632260e6551991f8e8ba36336d11de->m_frame.f_lineno = 557;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_86632260e6551991f8e8ba36336d11de, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_86632260e6551991f8e8ba36336d11de->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_86632260e6551991f8e8ba36336d11de, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_86632260e6551991f8e8ba36336d11de,
        type_description_1,
        par_clicks,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_86632260e6551991f8e8ba36336d11de == cache_frame_86632260e6551991f8e8ba36336d11de) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_86632260e6551991f8e8ba36336d11de);
        cache_frame_86632260e6551991f8e8ba36336d11de = NULL;
    }

    assertFrameObject(frame_86632260e6551991f8e8ba36336d11de);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_clicks);
    Py_DECREF(par_clicks);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_clicks);
    Py_DECREF(par_clicks);
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


static PyObject *impl_pyautogui$_pyautogui_win$$$function__13__vscroll(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_clicks = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_y = python_pars[2];
    struct Nuitka_FrameObject *frame_82072cca1d1f9037703632eefb77464f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_82072cca1d1f9037703632eefb77464f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_82072cca1d1f9037703632eefb77464f)) {
        Py_XDECREF(cache_frame_82072cca1d1f9037703632eefb77464f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_82072cca1d1f9037703632eefb77464f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_82072cca1d1f9037703632eefb77464f = MAKE_FUNCTION_FRAME(tstate, codeobj_82072cca1d1f9037703632eefb77464f, module_pyautogui$_pyautogui_win, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_82072cca1d1f9037703632eefb77464f->m_type_description == NULL);
    frame_82072cca1d1f9037703632eefb77464f = cache_frame_82072cca1d1f9037703632eefb77464f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_82072cca1d1f9037703632eefb77464f);
    assert(Py_REFCNT(frame_82072cca1d1f9037703632eefb77464f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_clicks);
        tmp_args_element_value_1 = par_clicks;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        CHECK_OBJECT(par_y);
        tmp_args_element_value_3 = par_y;
        frame_82072cca1d1f9037703632eefb77464f->m_frame.f_lineno = 572;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_82072cca1d1f9037703632eefb77464f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_82072cca1d1f9037703632eefb77464f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_82072cca1d1f9037703632eefb77464f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_82072cca1d1f9037703632eefb77464f,
        type_description_1,
        par_clicks,
        par_x,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_82072cca1d1f9037703632eefb77464f == cache_frame_82072cca1d1f9037703632eefb77464f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_82072cca1d1f9037703632eefb77464f);
        cache_frame_82072cca1d1f9037703632eefb77464f = NULL;
    }

    assertFrameObject(frame_82072cca1d1f9037703632eefb77464f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_clicks);
    Py_DECREF(par_clicks);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_clicks);
    Py_DECREF(par_clicks);
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



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3a66777896150b7ab5e703dc76c25719,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts[58],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__11__scroll(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__11__scroll,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fc0df964ef3732bb53e7e3c3dbe6a9c3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts[62],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__12__hscroll() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__12__hscroll,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_86632260e6551991f8e8ba36336d11de,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__13__vscroll() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__13__vscroll,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_82072cca1d1f9037703632eefb77464f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts[65],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__1__keyDown() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__1__keyDown,
        mod_consts[133],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_56891a14998100a29921f53ef8e46223,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__2__keyUp() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__2__keyUp,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_88069d726c466e7f6884cb3f749281df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__3__position() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__3__position,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9ee1ec09e920cf836aef88673517b5b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts[26],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__4__size() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__4__size,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fa0864e8b93d2b102bc24bd9b394a672,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__5__moveTo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__5__moveTo,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_10aca6dd76b5ba856164b1ef9c0b6f91,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__6__mouseDown() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__6__mouseDown,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d3385933638c9bf71d45d3e27cfa90a5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts[43],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__7__mouseUp() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__7__mouseUp,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8388452b3192b143ec9620022d4f9aec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts[47],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__8__click() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__8__click,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_620e5c0cef9d029c9ed1d22615ed893f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        mod_consts[51],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cd935cb9a98fee09cf9333d1878ca30e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyautogui$_pyautogui_win,
        NULL,
        NULL,
        0
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

function_impl_code functable_pyautogui$_pyautogui_win[] = {
    impl_pyautogui$_pyautogui_win$$$function__1__keyDown,
    impl_pyautogui$_pyautogui_win$$$function__2__keyUp,
    impl_pyautogui$_pyautogui_win$$$function__3__position,
    impl_pyautogui$_pyautogui_win$$$function__4__size,
    impl_pyautogui$_pyautogui_win$$$function__5__moveTo,
    impl_pyautogui$_pyautogui_win$$$function__6__mouseDown,
    impl_pyautogui$_pyautogui_win$$$function__7__mouseUp,
    impl_pyautogui$_pyautogui_win$$$function__8__click,
    impl_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped,
    impl_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent,
    impl_pyautogui$_pyautogui_win$$$function__11__scroll,
    impl_pyautogui$_pyautogui_win$$$function__12__hscroll,
    impl_pyautogui$_pyautogui_win$$$function__13__vscroll,
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

    function_impl_code *current = functable_pyautogui$_pyautogui_win;
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

    if (offset > sizeof(functable_pyautogui$_pyautogui_win) || offset < 0) {
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
        functable_pyautogui$_pyautogui_win[offset],
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
        module_pyautogui$_pyautogui_win,
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
PyObject *modulecode_pyautogui$_pyautogui_win(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyautogui._pyautogui_win");

    // Store the module for future use.
    module_pyautogui$_pyautogui_win = module;

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
        PRINT_STRING("pyautogui._pyautogui_win: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyautogui._pyautogui_win: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyautogui$_pyautogui_win\n");

    moduledict_pyautogui$_pyautogui_win = MODULE_DICT(module_pyautogui$_pyautogui_win);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyautogui$_pyautogui_win,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyautogui$_pyautogui_win,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[153]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyautogui$_pyautogui_win,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyautogui$_pyautogui_win,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyautogui$_pyautogui_win,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyautogui$_pyautogui_win);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyautogui$_pyautogui_win);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var_key = NULL;
    PyObject *tmp_INPUT$class_creation_1__bases = NULL;
    PyObject *tmp_INPUT$class_creation_1__bases_orig = NULL;
    PyObject *tmp_INPUT$class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_INPUT$class_creation_1__metaclass = NULL;
    PyObject *tmp_INPUT$class_creation_1__prepared = NULL;
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
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_e82bd0ede9f9f06e9f5af4d03df05408;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_76c3103d8b859f6b06ba97e1a02d3dfc_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72 = NULL;
    struct Nuitka_FrameObject *frame_ed7d1431ae03a48a8300697df15c88d9_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81 = NULL;
    struct Nuitka_FrameObject *frame_313d5dce690fb1af72d03a48363d4caf_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88 = NULL;
    struct Nuitka_FrameObject *frame_b587ae5702c3ee5dfcf68701d0f4230d_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *locals_pyautogui$_pyautogui_win$$$class__5__I_89 = NULL;
    struct Nuitka_FrameObject *frame_c16619bc40e4e5e32ab4307c2597421d_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_2);
    }
    frame_e82bd0ede9f9f06e9f5af4d03df05408 = MAKE_MODULE_FRAME(codeobj_e82bd0ede9f9f06e9f5af4d03df05408, module_pyautogui$_pyautogui_win);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e82bd0ede9f9f06e9f5af4d03df05408);
    assert(Py_REFCNT(frame_e82bd0ede9f9f06e9f5af4d03df05408) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[69], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[70], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        IMPORT_HARD_CTYPES__WINTYPES();
        tmp_assign_source_5 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[1];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyautogui$_pyautogui_win;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[15];
        frame_e82bd0ede9f9f06e9f5af4d03df05408->m_frame.f_lineno = 7;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[1];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pyautogui$_pyautogui_win;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[72];
        tmp_level_value_2 = mod_consts[15];
        frame_e82bd0ede9f9f06e9f5af4d03df05408->m_frame.f_lineno = 8;
        tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyautogui$_pyautogui_win,
                mod_consts[33],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[33]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyautogui$_pyautogui_win,
                mod_consts[34],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[34]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_pyautogui$_pyautogui_win,
                mod_consts[35],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[35]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_10);
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
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_11 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_11);
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[12]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[13]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        frame_e82bd0ede9f9f06e9f5af4d03df05408->m_frame.f_lineno = 17;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[74]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_e82bd0ede9f9f06e9f5af4d03df05408, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_e82bd0ede9f9f06e9f5af4d03df05408, exception_keeper_lineno_2);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 16;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e82bd0ede9f9f06e9f5af4d03df05408->m_frame) frame_e82bd0ede9f9f06e9f5af4d03df05408->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_3;
    branch_no_1:;
    goto try_end_3;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[5];
        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_add_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_add_expr_left_1 == NULL)) {
            tmp_add_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        assert(!(tmp_add_expr_left_1 == NULL));
        tmp_add_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_add_expr_right_1 == NULL)) {
            tmp_add_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        assert(!(tmp_add_expr_right_1 == NULL));
        tmp_assign_source_15 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        assert(!(tmp_assign_source_15 == NULL));
        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        tmp_add_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_add_expr_left_2 == NULL)) {
            tmp_add_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        assert(!(tmp_add_expr_left_2 == NULL));
        tmp_add_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_add_expr_right_2 == NULL)) {
            tmp_add_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        assert(!(tmp_add_expr_right_2 == NULL));
        tmp_assign_source_18 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        assert(!(tmp_assign_source_18 == NULL));
        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        tmp_add_expr_left_3 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_add_expr_left_3 == NULL)) {
            tmp_add_expr_left_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        assert(!(tmp_add_expr_left_3 == NULL));
        tmp_add_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_add_expr_right_3 == NULL)) {
            tmp_add_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        assert(!(tmp_add_expr_right_3 == NULL));
        tmp_assign_source_21 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
        assert(!(tmp_assign_source_21 == NULL));
        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[81];
        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_28);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[86]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
        tmp_assign_source_29 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_29, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_30 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_4 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[15];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_32 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_32;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts[87]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[87]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[88];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_e82bd0ede9f9f06e9f5af4d03df05408->m_frame.f_lineno = 62;
        tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_33;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_7 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_7, mod_consts[89]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_name_value_3;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[90];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_8 = tmp_class_creation_1__metaclass;
        tmp_name_value_3 = mod_consts[91];
        tmp_default_value_1 = mod_consts[92];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_8, tmp_name_value_3, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_9;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_9 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_9 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[91]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 62;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_34;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[88];
        tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62, mod_consts[95], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_6;
        }
        frame_76c3103d8b859f6b06ba97e1a02d3dfc_2 = MAKE_CLASS_FRAME(tstate, codeobj_76c3103d8b859f6b06ba97e1a02d3dfc, module_pyautogui$_pyautogui_win, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_76c3103d8b859f6b06ba97e1a02d3dfc_2);
        assert(Py_REFCNT(frame_76c3103d8b859f6b06ba97e1a02d3dfc_2) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_4;
            tmp_tuple_element_4 = mod_consts[96];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_10;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
                tmp_expression_value_10 = IMPORT_HARD_CTYPES__WINTYPES();
                assert(!(tmp_expression_value_10 == NULL));
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[97]);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 64;
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
            tmp_dictset_value = MAKE_LIST_EMPTY(6);
            {
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_tuple_element_9;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
                tmp_tuple_element_5 = mod_consts[98];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_11;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
                    tmp_expression_value_11 = IMPORT_HARD_CTYPES__WINTYPES();
                    assert(!(tmp_expression_value_11 == NULL));
                    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[97]);
                    if (tmp_tuple_element_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 65;
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
                tmp_tuple_element_6 = mod_consts[99];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_12;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_6);
                    tmp_expression_value_12 = IMPORT_HARD_CTYPES__WINTYPES();
                    assert(!(tmp_expression_value_12 == NULL));
                    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[100]);
                    if (tmp_tuple_element_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 66;
                        type_description_2 = "o";
                        goto tuple_build_exception_4;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_6);
                }
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_1);
                tmp_tuple_element_7 = mod_consts[101];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_13;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_7);
                    tmp_expression_value_13 = IMPORT_HARD_CTYPES__WINTYPES();
                    assert(!(tmp_expression_value_13 == NULL));
                    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[100]);
                    if (tmp_tuple_element_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 67;
                        type_description_2 = "o";
                        goto tuple_build_exception_5;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_7);
                }
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_1);
                tmp_tuple_element_8 = mod_consts[102];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_14;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_8);
                    tmp_expression_value_14 = IMPORT_HARD_CTYPES__WINTYPES();
                    assert(!(tmp_expression_value_14 == NULL));
                    tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[100]);
                    if (tmp_tuple_element_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 68;
                        type_description_2 = "o";
                        goto tuple_build_exception_6;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_8);
                }
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_1);
                tmp_tuple_element_9 = mod_consts[103];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_2;
                    PyObject *tmp_expression_value_15;
                    PyObject *tmp_args_element_value_1;
                    PyObject *tmp_expression_value_16;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_9);
                    tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_expression_value_15 == NULL)) {
                        tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
                    }

                    assert(!(tmp_expression_value_15 == NULL));
                    tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[104]);
                    if (tmp_called_value_2 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 69;
                        type_description_2 = "o";
                        goto tuple_build_exception_7;
                    }
                    tmp_expression_value_16 = IMPORT_HARD_CTYPES__WINTYPES();
                    assert(!(tmp_expression_value_16 == NULL));
                    tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[105]);
                    if (tmp_args_element_value_1 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_2);

                        exception_lineno = 69;
                        type_description_2 = "o";
                        goto tuple_build_exception_7;
                    }
                    frame_76c3103d8b859f6b06ba97e1a02d3dfc_2->m_frame.f_lineno = 69;
                    tmp_tuple_element_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
                    Py_DECREF(tmp_called_value_2);
                    Py_DECREF(tmp_args_element_value_1);
                    if (tmp_tuple_element_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 69;
                        type_description_2 = "o";
                        goto tuple_build_exception_7;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_9);
                }
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_1);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_76c3103d8b859f6b06ba97e1a02d3dfc_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_76c3103d8b859f6b06ba97e1a02d3dfc_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_76c3103d8b859f6b06ba97e1a02d3dfc_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_76c3103d8b859f6b06ba97e1a02d3dfc_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_76c3103d8b859f6b06ba97e1a02d3dfc_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_6;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_10 = mod_consts[88];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_10 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_e82bd0ede9f9f06e9f5af4d03df05408->m_frame.f_lineno = 62;
            tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_35 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_35);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62);
        locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62);
        locals_pyautogui$_pyautogui_win$$$class__1_MOUSEINPUT_62 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 62;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_35);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_value_17;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        assert(!(tmp_expression_value_17 == NULL));
        tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[86]);
        if (tmp_tuple_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        tmp_assign_source_37 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_37, 0, tmp_tuple_element_11);
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


            exception_lineno = 72;

            goto try_except_handler_7;
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
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_18 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[15];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_18, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_7;
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


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_40;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_19 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_19, mod_consts[87]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_20 = tmp_class_creation_2__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[87]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        tmp_tuple_element_12 = mod_consts[108];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_12 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_e82bd0ede9f9f06e9f5af4d03df05408->m_frame.f_lineno = 72;
        tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_41;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_21 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_21, mod_consts[89]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_name_value_4;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[90];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_22 = tmp_class_creation_2__metaclass;
        tmp_name_value_4 = mod_consts[91];
        tmp_default_value_2 = mod_consts[92];
        tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_22, tmp_name_value_4, tmp_default_value_2);
        if (tmp_tuple_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_23;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_23 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_23 == NULL));
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[91]);
            Py_DECREF(tmp_expression_value_23);
            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 72;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_42;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_43;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[108];
        tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72, mod_consts[95], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_9;
        }
        frame_ed7d1431ae03a48a8300697df15c88d9_3 = MAKE_CLASS_FRAME(tstate, codeobj_ed7d1431ae03a48a8300697df15c88d9, module_pyautogui$_pyautogui_win, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_ed7d1431ae03a48a8300697df15c88d9_3);
        assert(Py_REFCNT(frame_ed7d1431ae03a48a8300697df15c88d9_3) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_tuple_element_14;
            tmp_tuple_element_14 = mod_consts[109];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_24;
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_14);
                tmp_expression_value_24 = IMPORT_HARD_CTYPES__WINTYPES();
                assert(!(tmp_expression_value_24 == NULL));
                tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[110]);
                if (tmp_tuple_element_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 74;
                    type_description_2 = "o";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_14);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_list_element_2);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_dictset_value = MAKE_LIST_EMPTY(5);
            {
                PyObject *tmp_tuple_element_15;
                PyObject *tmp_tuple_element_16;
                PyObject *tmp_tuple_element_17;
                PyObject *tmp_tuple_element_18;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_2);
                tmp_tuple_element_15 = mod_consts[111];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_25;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_15);
                    tmp_expression_value_25 = IMPORT_HARD_CTYPES__WINTYPES();
                    assert(!(tmp_expression_value_25 == NULL));
                    tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[110]);
                    if (tmp_tuple_element_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 75;
                        type_description_2 = "o";
                        goto tuple_build_exception_10;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_15);
                }
                goto tuple_build_noexception_10;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_10:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_10:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_2);
                tmp_tuple_element_16 = mod_consts[101];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_26;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_16);
                    tmp_expression_value_26 = IMPORT_HARD_CTYPES__WINTYPES();
                    assert(!(tmp_expression_value_26 == NULL));
                    tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[100]);
                    if (tmp_tuple_element_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 76;
                        type_description_2 = "o";
                        goto tuple_build_exception_11;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_16);
                }
                goto tuple_build_noexception_11;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_11:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_11:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_2);
                tmp_tuple_element_17 = mod_consts[102];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_27;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_17);
                    tmp_expression_value_27 = IMPORT_HARD_CTYPES__WINTYPES();
                    assert(!(tmp_expression_value_27 == NULL));
                    tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[100]);
                    if (tmp_tuple_element_17 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 77;
                        type_description_2 = "o";
                        goto tuple_build_exception_12;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_17);
                }
                goto tuple_build_noexception_12;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_12:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_12:;
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_2);
                tmp_tuple_element_18 = mod_consts[103];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_5;
                    PyObject *tmp_expression_value_28;
                    PyObject *tmp_args_element_value_2;
                    PyObject *tmp_expression_value_29;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_18);
                    tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_expression_value_28 == NULL)) {
                        tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
                    }

                    assert(!(tmp_expression_value_28 == NULL));
                    tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[104]);
                    if (tmp_called_value_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 78;
                        type_description_2 = "o";
                        goto tuple_build_exception_13;
                    }
                    tmp_expression_value_29 = IMPORT_HARD_CTYPES__WINTYPES();
                    assert(!(tmp_expression_value_29 == NULL));
                    tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[105]);
                    if (tmp_args_element_value_2 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_5);

                        exception_lineno = 78;
                        type_description_2 = "o";
                        goto tuple_build_exception_13;
                    }
                    frame_ed7d1431ae03a48a8300697df15c88d9_3->m_frame.f_lineno = 78;
                    tmp_tuple_element_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
                    Py_DECREF(tmp_called_value_5);
                    Py_DECREF(tmp_args_element_value_2);
                    if (tmp_tuple_element_18 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 78;
                        type_description_2 = "o";
                        goto tuple_build_exception_13;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_18);
                }
                goto tuple_build_noexception_13;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_13:;
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_2);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ed7d1431ae03a48a8300697df15c88d9_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ed7d1431ae03a48a8300697df15c88d9_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ed7d1431ae03a48a8300697df15c88d9_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ed7d1431ae03a48a8300697df15c88d9_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_ed7d1431ae03a48a8300697df15c88d9_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_9;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_9;
        }
        branch_no_7:;
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_6 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_19 = mod_consts[108];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_19 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_19);
            tmp_tuple_element_19 = locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_e82bd0ede9f9f06e9f5af4d03df05408->m_frame.f_lineno = 72;
            tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto try_except_handler_9;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_44;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_43 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_43);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72);
        locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72);
        locals_pyautogui$_pyautogui_win$$$class__2_KEYBDINPUT_72 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 72;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_43);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_expression_value_30;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        assert(!(tmp_expression_value_30 == NULL));
        tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[86]);
        if (tmp_tuple_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_10;
        }
        tmp_assign_source_45 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_45, 0, tmp_tuple_element_20);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_46 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_10;
        }
        tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_31 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[15];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_10;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_48 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_48;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_32 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts[87]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_10;
        }
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_33 = tmp_class_creation_3__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[87]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_10;
        }
        tmp_tuple_element_21 = mod_consts[112];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_21);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_21 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_21);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_e82bd0ede9f9f06e9f5af4d03df05408->m_frame.f_lineno = 81;
        tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_49;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_34 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts[89]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_10;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[90];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_35 = tmp_class_creation_3__metaclass;
        tmp_name_value_5 = mod_consts[91];
        tmp_default_value_3 = mod_consts[92];
        tmp_tuple_element_22 = BUILTIN_GETATTR(tstate, tmp_expression_value_35, tmp_name_value_5, tmp_default_value_3);
        if (tmp_tuple_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_36;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_36 == NULL));
            tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[91]);
            Py_DECREF(tmp_expression_value_36);
            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_22);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 81;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_50;
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_51;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[112];
        tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81, mod_consts[95], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_12;
        }
        frame_313d5dce690fb1af72d03a48363d4caf_4 = MAKE_CLASS_FRAME(tstate, codeobj_313d5dce690fb1af72d03a48363d4caf, module_pyautogui$_pyautogui_win, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_313d5dce690fb1af72d03a48363d4caf_4);
        assert(Py_REFCNT(frame_313d5dce690fb1af72d03a48363d4caf_4) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_tuple_element_23;
            tmp_tuple_element_23 = mod_consts[113];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_37;
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_23);
                tmp_expression_value_37 = IMPORT_HARD_CTYPES__WINTYPES();
                assert(!(tmp_expression_value_37 == NULL));
                tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[100]);
                if (tmp_tuple_element_23 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 83;
                    type_description_2 = "o";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_23);
            }
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_list_element_3);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            tmp_dictset_value = MAKE_LIST_EMPTY(3);
            {
                PyObject *tmp_tuple_element_24;
                PyObject *tmp_tuple_element_25;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_3);
                tmp_tuple_element_24 = mod_consts[114];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_38;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_24);
                    tmp_expression_value_38 = IMPORT_HARD_CTYPES__WINTYPES();
                    assert(!(tmp_expression_value_38 == NULL));
                    tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[110]);
                    if (tmp_tuple_element_24 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 84;
                        type_description_2 = "o";
                        goto tuple_build_exception_16;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_24);
                }
                goto tuple_build_noexception_16;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_16:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_16:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_3);
                tmp_tuple_element_25 = mod_consts[115];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_39;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_25);
                    tmp_expression_value_39 = IMPORT_HARD_CTYPES__WINTYPES();
                    assert(!(tmp_expression_value_39 == NULL));
                    tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[100]);
                    if (tmp_tuple_element_25 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 85;
                        type_description_2 = "o";
                        goto tuple_build_exception_17;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_25);
                }
                goto tuple_build_noexception_17;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_17:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_17:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_3);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_4;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_313d5dce690fb1af72d03a48363d4caf_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_313d5dce690fb1af72d03a48363d4caf_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_313d5dce690fb1af72d03a48363d4caf_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_313d5dce690fb1af72d03a48363d4caf_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_313d5dce690fb1af72d03a48363d4caf_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_12;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_12;
        }
        branch_no_10:;
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_8 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_26 = mod_consts[112];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_26 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_26);
            tmp_tuple_element_26 = locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_e82bd0ede9f9f06e9f5af4d03df05408->m_frame.f_lineno = 81;
            tmp_assign_source_52 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto try_except_handler_12;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_52;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_51 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_51);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81);
        locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81);
        locals_pyautogui$_pyautogui_win$$$class__3_HARDWAREINPUT_81 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 81;
        goto try_except_handler_10;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_51);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_expression_value_40;
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        assert(!(tmp_expression_value_40 == NULL));
        tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[86]);
        if (tmp_tuple_element_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_13;
        }
        tmp_assign_source_53 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_53, 0, tmp_tuple_element_27);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_54 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_13;
        }
        tmp_condition_result_14 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_41 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[15];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_41, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_13;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_56 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_56;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_expression_value_42;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_42 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_42, mod_consts[87]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_13;
        }
        tmp_condition_result_15 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_43 = tmp_class_creation_4__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[87]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_13;
        }
        tmp_tuple_element_28 = mod_consts[116];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_28);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_28 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_28);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_e82bd0ede9f9f06e9f5af4d03df05408->m_frame.f_lineno = 88;
        tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_57;
    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_44;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_44 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts[89]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_13;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_16 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[90];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_45 = tmp_class_creation_4__metaclass;
        tmp_name_value_6 = mod_consts[91];
        tmp_default_value_4 = mod_consts[92];
        tmp_tuple_element_29 = BUILTIN_GETATTR(tstate, tmp_expression_value_45, tmp_name_value_6, tmp_default_value_4);
        if (tmp_tuple_element_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_46;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_46 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_46 == NULL));
            tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[91]);
            Py_DECREF(tmp_expression_value_46);
            if (tmp_tuple_element_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_29);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 88;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_12:;
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_58;
    }
    branch_end_11:;
    {
        PyObject *tmp_assign_source_59;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[116];
        tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88, mod_consts[95], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_15;
        }
        frame_b587ae5702c3ee5dfcf68701d0f4230d_5 = MAKE_CLASS_FRAME(tstate, codeobj_b587ae5702c3ee5dfcf68701d0f4230d, module_pyautogui$_pyautogui_win, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_b587ae5702c3ee5dfcf68701d0f4230d_5);
        assert(Py_REFCNT(frame_b587ae5702c3ee5dfcf68701d0f4230d_5) == 2);

        // Framed code:
        // Tried code:
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_expression_value_47;
            tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_47 == NULL)) {
                tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            assert(!(tmp_expression_value_47 == NULL));
            tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[117]);
            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_assign_source_60 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_60, 0, tmp_tuple_element_30);
            assert(tmp_INPUT$class_creation_1__bases_orig == NULL);
            tmp_INPUT$class_creation_1__bases_orig = tmp_assign_source_60;
        }
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_dircall_arg1_5;
            CHECK_OBJECT(tmp_INPUT$class_creation_1__bases_orig);
            tmp_dircall_arg1_5 = tmp_INPUT$class_creation_1__bases_orig;
            Py_INCREF(tmp_dircall_arg1_5);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
                tmp_assign_source_61 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            assert(tmp_INPUT$class_creation_1__bases == NULL);
            tmp_INPUT$class_creation_1__bases = tmp_assign_source_61;
        }
        {
            PyObject *tmp_assign_source_62;
            tmp_assign_source_62 = MAKE_DICT_EMPTY();
            assert(tmp_INPUT$class_creation_1__class_decl_dict == NULL);
            tmp_INPUT$class_creation_1__class_decl_dict = tmp_assign_source_62;
        }
        {
            PyObject *tmp_assign_source_63;
            PyObject *tmp_metaclass_value_5;
            nuitka_bool tmp_condition_result_17;
            int tmp_truth_name_5;
            PyObject *tmp_type_arg_9;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_bases_value_5;
            CHECK_OBJECT(tmp_INPUT$class_creation_1__bases);
            tmp_truth_name_5 = CHECK_IF_TRUE(tmp_INPUT$class_creation_1__bases);
            if (tmp_truth_name_5 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            CHECK_OBJECT(tmp_INPUT$class_creation_1__bases);
            tmp_expression_value_48 = tmp_INPUT$class_creation_1__bases;
            tmp_subscript_value_5 = mod_consts[15];
            tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_48, tmp_subscript_value_5, 0);
            if (tmp_type_arg_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
            Py_DECREF(tmp_type_arg_9);
            if (tmp_metaclass_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_5);
            condexpr_end_5:;
            CHECK_OBJECT(tmp_INPUT$class_creation_1__bases);
            tmp_bases_value_5 = tmp_INPUT$class_creation_1__bases;
            tmp_assign_source_63 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
            Py_DECREF(tmp_metaclass_value_5);
            if (tmp_assign_source_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            assert(tmp_INPUT$class_creation_1__metaclass == NULL);
            tmp_INPUT$class_creation_1__metaclass = tmp_assign_source_63;
        }
        {
            bool tmp_condition_result_18;
            PyObject *tmp_expression_value_49;
            CHECK_OBJECT(tmp_INPUT$class_creation_1__metaclass);
            tmp_expression_value_49 = tmp_INPUT$class_creation_1__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_49, mod_consts[87]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_condition_result_18 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_18 != false) {
                goto branch_yes_13;
            } else {
                goto branch_no_13;
            }
        }
        branch_yes_13:;
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_INPUT$class_creation_1__metaclass);
            tmp_expression_value_50 = tmp_INPUT$class_creation_1__metaclass;
            tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[87]);
            if (tmp_called_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_tuple_element_31 = mod_consts[118];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_INPUT$class_creation_1__bases);
            tmp_tuple_element_31 = tmp_INPUT$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_INPUT$class_creation_1__class_decl_dict);
            tmp_kwargs_value_8 = tmp_INPUT$class_creation_1__class_decl_dict;
            frame_b587ae5702c3ee5dfcf68701d0f4230d_5->m_frame.f_lineno = 89;
            tmp_assign_source_64 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            assert(tmp_INPUT$class_creation_1__prepared == NULL);
            tmp_INPUT$class_creation_1__prepared = tmp_assign_source_64;
        }
        {
            bool tmp_condition_result_19;
            PyObject *tmp_operand_value_5;
            PyObject *tmp_expression_value_51;
            CHECK_OBJECT(tmp_INPUT$class_creation_1__prepared);
            tmp_expression_value_51 = tmp_INPUT$class_creation_1__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_51, mod_consts[89]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
            assert(!(tmp_res == -1));
            tmp_condition_result_19 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_19 != false) {
                goto branch_yes_14;
            } else {
                goto branch_no_14;
            }
        }
        branch_yes_14:;
        {
            PyObject *tmp_raise_type_5;
            PyObject *tmp_raise_value_5;
            PyObject *tmp_mod_expr_left_5;
            PyObject *tmp_mod_expr_right_5;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_name_value_7;
            PyObject *tmp_default_value_5;
            tmp_raise_type_5 = PyExc_TypeError;
            tmp_mod_expr_left_5 = mod_consts[90];
            CHECK_OBJECT(tmp_INPUT$class_creation_1__metaclass);
            tmp_expression_value_52 = tmp_INPUT$class_creation_1__metaclass;
            tmp_name_value_7 = mod_consts[91];
            tmp_default_value_5 = mod_consts[92];
            tmp_tuple_element_32 = BUILTIN_GETATTR(tstate, tmp_expression_value_52, tmp_name_value_7, tmp_default_value_5);
            if (tmp_tuple_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_53;
                PyObject *tmp_type_arg_10;
                PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_32);
                CHECK_OBJECT(tmp_INPUT$class_creation_1__prepared);
                tmp_type_arg_10 = tmp_INPUT$class_creation_1__prepared;
                tmp_expression_value_53 = BUILTIN_TYPE1(tmp_type_arg_10);
                assert(!(tmp_expression_value_53 == NULL));
                tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[91]);
                Py_DECREF(tmp_expression_value_53);
                if (tmp_tuple_element_32 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 89;
                    type_description_2 = "o";
                    goto tuple_build_exception_19;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_32);
            }
            goto tuple_build_noexception_19;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_mod_expr_right_5);
            goto try_except_handler_16;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_19:;
            tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
            Py_DECREF(tmp_mod_expr_right_5);
            if (tmp_raise_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            exception_type = tmp_raise_type_5;
            Py_INCREF(tmp_raise_type_5);
            exception_value = tmp_raise_value_5;
            exception_lineno = 89;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        branch_no_14:;
        goto branch_end_13;
        branch_no_13:;
        {
            PyObject *tmp_assign_source_65;
            tmp_assign_source_65 = MAKE_DICT_EMPTY();
            assert(tmp_INPUT$class_creation_1__prepared == NULL);
            tmp_INPUT$class_creation_1__prepared = tmp_assign_source_65;
        }
        branch_end_13:;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_INPUT$class_creation_1__prepared);
            tmp_set_locals_5 = tmp_INPUT$class_creation_1__prepared;
            locals_pyautogui$_pyautogui_win$$$class__5__I_89 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__5__I_89, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_2 = "o";
            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[119];
        tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__5__I_89, mod_consts[95], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_2 = "o";
            goto try_except_handler_18;
        }
        frame_c16619bc40e4e5e32ab4307c2597421d_6 = MAKE_CLASS_FRAME(tstate, codeobj_c16619bc40e4e5e32ab4307c2597421d, module_pyautogui$_pyautogui_win, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_c16619bc40e4e5e32ab4307c2597421d_6);
        assert(Py_REFCNT(frame_c16619bc40e4e5e32ab4307c2597421d_6) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_4;
            PyObject *tmp_tuple_element_33;
            tmp_tuple_element_33 = mod_consts[120];
            tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_33);
            tmp_tuple_element_33 = PyObject_GetItem(locals_pyautogui$_pyautogui_win$$$class__5__I_89, mod_consts[88]);

            if (tmp_tuple_element_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_tuple_element_33 == NULL)) {
                        tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
                    }

                    if (tmp_tuple_element_33 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 91;
                        type_description_3 = "o";
                        goto tuple_build_exception_20;
                    }
                    Py_INCREF(tmp_tuple_element_33);
                } else {
                    goto tuple_build_exception_20;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_33);
            goto tuple_build_noexception_20;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_20:;
            Py_DECREF(tmp_list_element_4);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_20:;
            tmp_dictset_value = MAKE_LIST_EMPTY(3);
            {
                PyObject *tmp_tuple_element_34;
                PyObject *tmp_tuple_element_35;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_4);
                tmp_tuple_element_34 = mod_consts[121];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_34);
                tmp_tuple_element_34 = PyObject_GetItem(locals_pyautogui$_pyautogui_win$$$class__5__I_89, mod_consts[108]);

                if (tmp_tuple_element_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_34 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[108]);

                        if (unlikely(tmp_tuple_element_34 == NULL)) {
                            tmp_tuple_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
                        }

                        if (tmp_tuple_element_34 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 92;
                            type_description_3 = "o";
                            goto tuple_build_exception_21;
                        }
                        Py_INCREF(tmp_tuple_element_34);
                    } else {
                        goto tuple_build_exception_21;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_34);
                goto tuple_build_noexception_21;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_21:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_21:;
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_4);
                tmp_tuple_element_35 = mod_consts[122];
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_35);
                tmp_tuple_element_35 = PyObject_GetItem(locals_pyautogui$_pyautogui_win$$$class__5__I_89, mod_consts[112]);

                if (tmp_tuple_element_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[112]);

                        if (unlikely(tmp_tuple_element_35 == NULL)) {
                            tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
                        }

                        if (tmp_tuple_element_35 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 93;
                            type_description_3 = "o";
                            goto tuple_build_exception_22;
                        }
                        Py_INCREF(tmp_tuple_element_35);
                    } else {
                        goto tuple_build_exception_22;
                    }
                }

                PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_35);
                goto tuple_build_noexception_22;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_22:;
                Py_DECREF(tmp_list_element_4);
                goto list_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_22:;
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_4);
            }
            goto list_build_noexception_4;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_6;
            // Finished with no exception for list_build:
            list_build_noexception_4:;
            tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__5__I_89, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_3 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c16619bc40e4e5e32ab4307c2597421d_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c16619bc40e4e5e32ab4307c2597421d_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c16619bc40e4e5e32ab4307c2597421d_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c16619bc40e4e5e32ab4307c2597421d_6,
            type_description_3,
            outline_4_var___class__
        );



        assertFrameObject(frame_c16619bc40e4e5e32ab4307c2597421d_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_5:;
        type_description_2 = "o";
        goto try_except_handler_18;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_INPUT$class_creation_1__bases);
            tmp_cmp_expr_left_5 = tmp_INPUT$class_creation_1__bases;
            CHECK_OBJECT(tmp_INPUT$class_creation_1__bases_orig);
            tmp_cmp_expr_right_5 = tmp_INPUT$class_creation_1__bases_orig;
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto try_except_handler_18;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_INPUT$class_creation_1__bases_orig);
        tmp_dictset_value = tmp_INPUT$class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__5__I_89, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_2 = "o";
            goto try_except_handler_18;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_kwargs_value_9;
            CHECK_OBJECT(tmp_INPUT$class_creation_1__metaclass);
            tmp_called_value_11 = tmp_INPUT$class_creation_1__metaclass;
            tmp_tuple_element_36 = mod_consts[118];
            tmp_args_value_9 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_INPUT$class_creation_1__bases);
            tmp_tuple_element_36 = tmp_INPUT$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_36);
            tmp_tuple_element_36 = locals_pyautogui$_pyautogui_win$$$class__5__I_89;
            PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_INPUT$class_creation_1__class_decl_dict);
            tmp_kwargs_value_9 = tmp_INPUT$class_creation_1__class_decl_dict;
            frame_b587ae5702c3ee5dfcf68701d0f4230d_5->m_frame.f_lineno = 89;
            tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_args_value_9);
            if (tmp_assign_source_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto try_except_handler_18;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_66;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_dictset_value = outline_4_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_pyautogui$_pyautogui_win$$$class__5__I_89);
        locals_pyautogui$_pyautogui_win$$$class__5__I_89 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyautogui$_pyautogui_win$$$class__5__I_89);
        locals_pyautogui$_pyautogui_win$$$class__5__I_89 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 89;
        goto try_except_handler_16;
        outline_result_5:;
        tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88, mod_consts[118], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        goto try_end_7;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_INPUT$class_creation_1__bases_orig);
        tmp_INPUT$class_creation_1__bases_orig = NULL;
        Py_XDECREF(tmp_INPUT$class_creation_1__bases);
        tmp_INPUT$class_creation_1__bases = NULL;
        Py_XDECREF(tmp_INPUT$class_creation_1__class_decl_dict);
        tmp_INPUT$class_creation_1__class_decl_dict = NULL;
        Py_XDECREF(tmp_INPUT$class_creation_1__metaclass);
        tmp_INPUT$class_creation_1__metaclass = NULL;
        Py_XDECREF(tmp_INPUT$class_creation_1__prepared);
        tmp_INPUT$class_creation_1__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto frame_exception_exit_5;
        // End of try:
        try_end_7:;
        CHECK_OBJECT(tmp_INPUT$class_creation_1__bases_orig);
        Py_DECREF(tmp_INPUT$class_creation_1__bases_orig);
        tmp_INPUT$class_creation_1__bases_orig = NULL;
        CHECK_OBJECT(tmp_INPUT$class_creation_1__bases);
        Py_DECREF(tmp_INPUT$class_creation_1__bases);
        tmp_INPUT$class_creation_1__bases = NULL;
        CHECK_OBJECT(tmp_INPUT$class_creation_1__class_decl_dict);
        Py_DECREF(tmp_INPUT$class_creation_1__class_decl_dict);
        tmp_INPUT$class_creation_1__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_INPUT$class_creation_1__metaclass);
        Py_DECREF(tmp_INPUT$class_creation_1__metaclass);
        tmp_INPUT$class_creation_1__metaclass = NULL;
        CHECK_OBJECT(tmp_INPUT$class_creation_1__prepared);
        Py_DECREF(tmp_INPUT$class_creation_1__prepared);
        tmp_INPUT$class_creation_1__prepared = NULL;
        tmp_dictset_value = mod_consts[123];
        tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88, mod_consts[124], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        {
            PyObject *tmp_list_element_5;
            PyObject *tmp_tuple_element_37;
            tmp_tuple_element_37 = mod_consts[125];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_54;
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_37);
                tmp_expression_value_54 = IMPORT_HARD_CTYPES__WINTYPES();
                assert(!(tmp_expression_value_54 == NULL));
                tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[100]);
                if (tmp_tuple_element_37 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 98;
                    type_description_2 = "o";
                    goto tuple_build_exception_23;
                }
                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_37);
            }
            goto tuple_build_noexception_23;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_23:;
            Py_DECREF(tmp_list_element_5);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_23:;
            tmp_dictset_value = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_tuple_element_38;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_5);
                tmp_tuple_element_38 = mod_consts[126];
                tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_38);
                tmp_tuple_element_38 = PyObject_GetItem(locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88, mod_consts[118]);

                if (unlikely(tmp_tuple_element_38 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[118]);
                    NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(tstate, exception_value);

                    exception_lineno = 99;
                    type_description_2 = "o";
                    goto frame_exception_exit_5;
                }

                if (tmp_tuple_element_38 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 99;
                    type_description_2 = "o";
                    goto frame_exception_exit_5;
                }
                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_38);
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_5);
            }
            tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b587ae5702c3ee5dfcf68701d0f4230d_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b587ae5702c3ee5dfcf68701d0f4230d_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b587ae5702c3ee5dfcf68701d0f4230d_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b587ae5702c3ee5dfcf68701d0f4230d_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_b587ae5702c3ee5dfcf68701d0f4230d_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_4:;

        goto try_except_handler_15;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_21 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
        }
        branch_yes_16:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_15;
        }
        branch_no_16:;
        {
            PyObject *tmp_assign_source_67;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_12 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_39 = mod_consts[116];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_39 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_39);
            tmp_tuple_element_39 = locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_4__class_decl_dict;
            frame_e82bd0ede9f9f06e9f5af4d03df05408->m_frame.f_lineno = 88;
            tmp_assign_source_67 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto try_except_handler_15;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_67;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_59 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_59);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88);
        locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88);
        locals_pyautogui$_pyautogui_win$$$class__4_INPUT_88 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 88;
        goto try_except_handler_13;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_59);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_dict_seq_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_69;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_55;
            tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_55 == NULL)) {
                tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
            }

            if (tmp_expression_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto try_except_handler_19;
            }
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[127]);
            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto try_except_handler_19;
            }
            tmp_assign_source_69 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto try_except_handler_19;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_69;
        }
        {
            PyObject *tmp_assign_source_70;
            tmp_assign_source_70 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_70;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_71;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_71 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_71 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    exception_lineno = 112;
                    goto try_except_handler_20;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_71;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_72;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_72 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_5_var_key;
                outline_5_var_key = tmp_assign_source_72;
                Py_INCREF(outline_5_var_key);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_tuple_element_40;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_5_var_key);
            tmp_tuple_element_40 = outline_5_var_key;
            tmp_append_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_append_value_1, 0, tmp_tuple_element_40);
            tmp_tuple_element_40 = Py_None;
            PyTuple_SET_ITEM0(tmp_append_value_1, 1, tmp_tuple_element_40);
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto try_except_handler_20;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto try_except_handler_20;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_dict_seq_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_dict_seq_1);
        goto try_return_handler_20;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_19;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
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
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_XDECREF(outline_5_var_key);
        outline_5_var_key = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_5_var_key);
        outline_5_var_key = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 112;
        goto frame_exception_exit_1;
        outline_result_6:;
        tmp_assign_source_68 = TO_DICT(tstate, tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_68);
    }
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_dict_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dict_arg_value_1 == NULL)) {
            tmp_dict_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_dict_arg_value_1 == NULL));
        tmp_iterable_value_1 = DICT_COPY(mod_consts[128]);
        assert(PyDict_Check(tmp_dict_arg_value_1));
            tmp_res = PyDict_Merge(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);

        Py_DECREF(tmp_iterable_value_1);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = mod_consts[129];
        tmp_assign_source_73 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        assert(!(tmp_assign_source_73 == NULL));
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_73;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_74;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_74 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_74 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                exception_lineno = 246;
                goto try_except_handler_21;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_74;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_75;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_75 = tmp_for_loop_1__iter_value;
        UPDATE_STRING_DICT0(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_75);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_chr_arg_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_chr_arg_2;
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto try_except_handler_21;
        }
        tmp_expression_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[12]);
        if (tmp_expression_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto try_except_handler_21;
        }
        tmp_expression_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[13]);
        Py_DECREF(tmp_expression_value_57);
        if (tmp_expression_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto try_except_handler_21;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[131]);
        Py_DECREF(tmp_expression_value_56);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto try_except_handler_21;
        }
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 247;

            goto try_except_handler_21;
        }
        tmp_expression_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[20]);
        if (tmp_expression_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 247;

            goto try_except_handler_21;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[132]);
        Py_DECREF(tmp_expression_value_59);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 247;

            goto try_except_handler_21;
        }
        tmp_chr_arg_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_chr_arg_1 == NULL)) {
            tmp_chr_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[130]);
        }

        if (tmp_chr_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 247;

            goto try_except_handler_21;
        }
        tmp_args_element_value_4 = BUILTIN_CHR(tstate, tmp_chr_arg_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 247;

            goto try_except_handler_21;
        }
        frame_e82bd0ede9f9f06e9f5af4d03df05408->m_frame.f_lineno = 247;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 247;

            goto try_except_handler_21;
        }
        frame_e82bd0ede9f9f06e9f5af4d03df05408->m_frame.f_lineno = 247;
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto try_except_handler_21;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 247;

            goto try_except_handler_21;
        }
        tmp_chr_arg_2 = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_chr_arg_2 == NULL)) {
            tmp_chr_arg_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[130]);
        }

        if (tmp_chr_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 247;

            goto try_except_handler_21;
        }
        tmp_ass_subscript_1 = BUILTIN_CHR(tstate, tmp_chr_arg_2);
        if (tmp_ass_subscript_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 247;

            goto try_except_handler_21;
        }
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto try_except_handler_21;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 246;

        goto try_except_handler_21;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
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
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_6;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e82bd0ede9f9f06e9f5af4d03df05408, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e82bd0ede9f9f06e9f5af4d03df05408->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e82bd0ede9f9f06e9f5af4d03df05408, exception_lineno);
    }



    assertFrameObject(frame_e82bd0ede9f9f06e9f5af4d03df05408);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_6:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_76;


        tmp_assign_source_76 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__1__keyDown();

        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;


        tmp_assign_source_77 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__2__keyUp();

        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;


        tmp_assign_source_78 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__3__position();

        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;


        tmp_assign_source_79 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__4__size();

        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;


        tmp_assign_source_80 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__5__moveTo();

        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;


        tmp_assign_source_81 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__6__mouseDown();

        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;


        tmp_assign_source_82 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__7__mouseUp();

        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;


        tmp_assign_source_83 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__8__click();

        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;


        tmp_assign_source_84 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__9__mouse_is_swapped();

        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[28];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_85 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__10__sendMouseEvent(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[140];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_86 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__11__scroll(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;


        tmp_assign_source_87 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__12__hscroll();

        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;


        tmp_assign_source_88 = MAKE_FUNCTION_pyautogui$_pyautogui_win$$$function__13__vscroll();

        UPDATE_STRING_DICT1(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_88);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyautogui._pyautogui_win", false);

    Py_INCREF(module_pyautogui$_pyautogui_win);
    return module_pyautogui$_pyautogui_win;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyautogui$_pyautogui_win, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyautogui$_pyautogui_win", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
