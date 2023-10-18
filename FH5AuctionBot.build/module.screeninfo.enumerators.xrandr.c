/* Generated code for Python module 'screeninfo.enumerators.xrandr'
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

/* The "module_screeninfo$enumerators$xrandr" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_screeninfo$enumerators$xrandr;
PyDictObject *moduledict_screeninfo$enumerators$xrandr;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[106];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[106];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("screeninfo.enumerators.xrandr"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 106; i++) {
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
void checkModuleConstants_screeninfo$enumerators$xrandr(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 106; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ad4b74d8062c818796e9a8f740826433;
static PyCodeObject *codeobj_1c77517b5ba7a4b729f8a51215e1e988;
static PyCodeObject *codeobj_f7c6412b5cf56c74ec5425e6bc10463e;
static PyCodeObject *codeobj_c68f6e570314c9d793932f6c337cb7cb;
static PyCodeObject *codeobj_274531fd51a6c5b67098679a5d02e9ff;
static PyCodeObject *codeobj_eb10bdfe204bba21b526fa4f17170a04;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[100]); CHECK_OBJECT(module_filename_obj);
    codeobj_ad4b74d8062c818796e9a8f740826433 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[101], mod_consts[101], NULL, NULL, 0, 0, 0);
    codeobj_1c77517b5ba7a4b729f8a51215e1e988 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED, mod_consts[7], mod_consts[7], mod_consts[102], NULL, 0, 0, 0);
    codeobj_f7c6412b5cf56c74ec5425e6bc10463e = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED, mod_consts[44], mod_consts[44], mod_consts[102], NULL, 0, 0, 0);
    codeobj_c68f6e570314c9d793932f6c337cb7cb = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED, mod_consts[36], mod_consts[36], mod_consts[102], NULL, 0, 0, 0);
    codeobj_274531fd51a6c5b67098679a5d02e9ff = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[59], mod_consts[59], mod_consts[103], NULL, 2, 0, 0);
    codeobj_eb10bdfe204bba21b526fa4f17170a04 = MAKE_CODE_OBJECT(module_filename_obj, 7, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[88], mod_consts[88], mod_consts[104], NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors();


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors(PyObject *annotations);


static PyObject *MAKE_FUNCTION_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__1_check_primary(PyObject *annotations);


// The module function definitions.
static PyObject *impl_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_GENERATOR_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors_locals {
    PyObject *var_ctypes;
    PyObject *var_load_library;
    PyObject *var_XRRCrtcInfo;
    PyObject *var_XRRScreenResources;
    PyObject *var_XRROutputInfo;
    PyObject *var_check_primary;
    PyObject *var_xlib;
    PyObject *var_xrandr;
    PyObject *var_display;
    PyObject *var_root_window;
    PyObject *var_screen_resources;
    PyObject *var_i;
    PyObject *var_output_info;
    PyObject *var_crtc_info;
    PyObject *var_primary_id;
    PyObject *outline_0_var___class__;
    PyObject *outline_1_var___class__;
    PyObject *outline_2_var___class__;
    PyObject *tmp_class_creation_1__bases;
    PyObject *tmp_class_creation_1__bases_orig;
    PyObject *tmp_class_creation_1__class_decl_dict;
    PyObject *tmp_class_creation_1__metaclass;
    PyObject *tmp_class_creation_1__prepared;
    PyObject *tmp_class_creation_2__bases;
    PyObject *tmp_class_creation_2__bases_orig;
    PyObject *tmp_class_creation_2__class_decl_dict;
    PyObject *tmp_class_creation_2__metaclass;
    PyObject *tmp_class_creation_2__prepared;
    PyObject *tmp_class_creation_3__bases;
    PyObject *tmp_class_creation_3__bases_orig;
    PyObject *tmp_class_creation_3__class_decl_dict;
    PyObject *tmp_class_creation_3__metaclass;
    PyObject *tmp_class_creation_3__prepared;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    PyObject *locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_1c77517b5ba7a4b729f8a51215e1e988_2;
    char const *type_description_2;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31;
    struct Nuitka_FrameObject *frame_c68f6e570314c9d793932f6c337cb7cb_3;
    char const *type_description_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43;
    struct Nuitka_FrameObject *frame_f7c6412b5cf56c74ec5425e6bc10463e_4;
    char const *type_description_4;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    int exception_keeper_lineno_9;
    bool tmp_result;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    int exception_keeper_lineno_10;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    int exception_keeper_lineno_12;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    int exception_keeper_lineno_15;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    int exception_keeper_lineno_17;
};
#endif

static PyObject *screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors_locals *generator_heap = (struct screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_frame_1c77517b5ba7a4b729f8a51215e1e988_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c68f6e570314c9d793932f6c337cb7cb_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_f7c6412b5cf56c74ec5425e6bc10463e_4 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_ctypes = NULL;
    generator_heap->var_load_library = NULL;
    generator_heap->var_XRRCrtcInfo = NULL;
    generator_heap->var_XRRScreenResources = NULL;
    generator_heap->var_XRROutputInfo = NULL;
    generator_heap->var_check_primary = NULL;
    generator_heap->var_xlib = NULL;
    generator_heap->var_xrandr = NULL;
    generator_heap->var_display = NULL;
    generator_heap->var_root_window = NULL;
    generator_heap->var_screen_resources = NULL;
    generator_heap->var_i = NULL;
    generator_heap->var_output_info = NULL;
    generator_heap->var_crtc_info = NULL;
    generator_heap->var_primary_id = NULL;
    generator_heap->outline_0_var___class__ = NULL;
    generator_heap->outline_1_var___class__ = NULL;
    generator_heap->outline_2_var___class__ = NULL;
    generator_heap->tmp_class_creation_1__bases = NULL;
    generator_heap->tmp_class_creation_1__bases_orig = NULL;
    generator_heap->tmp_class_creation_1__class_decl_dict = NULL;
    generator_heap->tmp_class_creation_1__metaclass = NULL;
    generator_heap->tmp_class_creation_1__prepared = NULL;
    generator_heap->tmp_class_creation_2__bases = NULL;
    generator_heap->tmp_class_creation_2__bases_orig = NULL;
    generator_heap->tmp_class_creation_2__class_decl_dict = NULL;
    generator_heap->tmp_class_creation_2__metaclass = NULL;
    generator_heap->tmp_class_creation_2__prepared = NULL;
    generator_heap->tmp_class_creation_3__bases = NULL;
    generator_heap->tmp_class_creation_3__bases_orig = NULL;
    generator_heap->tmp_class_creation_3__class_decl_dict = NULL;
    generator_heap->tmp_class_creation_3__metaclass = NULL;
    generator_heap->tmp_class_creation_3__prepared = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;
    generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15 = NULL;
    generator_heap->type_description_2 = NULL;
    generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31 = NULL;
    generator_heap->type_description_3 = NULL;
    generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43 = NULL;
    generator_heap->type_description_4 = NULL;

    // Actual generator function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_1 == NULL));
        assert(generator_heap->var_ctypes == NULL);
        Py_INCREF(tmp_assign_source_1);
        generator_heap->var_ctypes = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_eb10bdfe204bba21b526fa4f17170a04, module_screeninfo$enumerators$xrandr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(tstate, generator);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_screeninfo$enumerators$xrandr;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[1];
        generator->m_frame->m_frame.f_lineno = 9;
        tmp_assign_source_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 9;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->var_ctypes;
            assert(old != NULL);
            generator_heap->var_ctypes = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[2];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_screeninfo$enumerators$xrandr;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[3];
        tmp_level_value_2 = mod_consts[1];
        generator->m_frame->m_frame.f_lineno = 11;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 11;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_screeninfo$enumerators$xrandr,
                mod_consts[4],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[4]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 11;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_load_library == NULL);
        generator_heap->var_load_library = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_1 = generator_heap->var_ctypes;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_4, 0, tmp_tuple_element_1);
        assert(generator_heap->tmp_class_creation_1__bases_orig == NULL);
        generator_heap->tmp_class_creation_1__bases_orig = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = generator_heap->tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_5 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_class_creation_1__bases == NULL);
        generator_heap->tmp_class_creation_1__bases = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_DICT_EMPTY();
        assert(generator_heap->tmp_class_creation_1__class_decl_dict == NULL);
        generator_heap->tmp_class_creation_1__class_decl_dict = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(generator_heap->tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases);
        tmp_expression_value_2 = generator_heap->tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[1];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases);
        tmp_bases_value_1 = generator_heap->tmp_class_creation_1__bases;
        tmp_assign_source_7 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_class_creation_1__metaclass == NULL);
        generator_heap->tmp_class_creation_1__metaclass = tmp_assign_source_7;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = generator_heap->tmp_class_creation_1__metaclass;
        generator_heap->tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts[6]);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = generator_heap->tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[7];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases);
        tmp_tuple_element_2 = generator_heap->tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = generator_heap->tmp_class_creation_1__class_decl_dict;
        generator->m_frame->m_frame.f_lineno = 15;
        tmp_assign_source_8 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_class_creation_1__prepared == NULL);
        generator_heap->tmp_class_creation_1__prepared = tmp_assign_source_8;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__prepared);
        tmp_expression_value_5 = generator_heap->tmp_class_creation_1__prepared;
        generator_heap->tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts[8]);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_operand_value_1 = (generator_heap->tmp_res != 0) ? Py_True : Py_False;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_3 = (generator_heap->tmp_res == 0) ? true : false;
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
        PyObject *tmp_name_value_3;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[9];
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = generator_heap->tmp_class_creation_1__metaclass;
        tmp_name_value_3 = mod_consts[10];
        tmp_default_value_1 = mod_consts[11];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_3, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(generator_heap->tmp_class_creation_1__prepared);
            tmp_type_arg_2 = generator_heap->tmp_class_creation_1__prepared;
            tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_7 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[10]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 15;
                generator_heap->type_description_1 = "ooNooooooooooooo";
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

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_2;
        }
        generator_heap->exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        generator_heap->exception_value = tmp_raise_value_1;
        generator_heap->exception_lineno = 15;
        RAISE_EXCEPTION_IMPLICIT(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "ooNooooooooooooo";
        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_DICT_EMPTY();
        assert(generator_heap->tmp_class_creation_1__prepared == NULL);
        generator_heap->tmp_class_creation_1__prepared = tmp_assign_source_9;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_10;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(generator_heap->tmp_class_creation_1__prepared);
            tmp_set_locals_1 = generator_heap->tmp_class_creation_1__prepared;
            generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        generator_heap->tmp_dictset_value = mod_consts[12];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15, mod_consts[13], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_4;
        }
        generator_heap->tmp_dictset_value = mod_consts[14];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15, mod_consts[15], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_1c77517b5ba7a4b729f8a51215e1e988_2)) {
            Py_XDECREF(cache_frame_1c77517b5ba7a4b729f8a51215e1e988_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_1c77517b5ba7a4b729f8a51215e1e988_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_1c77517b5ba7a4b729f8a51215e1e988_2 = MAKE_CLASS_FRAME(tstate, codeobj_1c77517b5ba7a4b729f8a51215e1e988, module_screeninfo$enumerators$xrandr, NULL, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_1c77517b5ba7a4b729f8a51215e1e988_2->m_type_description == NULL);
        generator_heap->frame_1c77517b5ba7a4b729f8a51215e1e988_2 = cache_frame_1c77517b5ba7a4b729f8a51215e1e988_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, generator_heap->frame_1c77517b5ba7a4b729f8a51215e1e988_2);
        assert(Py_REFCNT(generator_heap->frame_1c77517b5ba7a4b729f8a51215e1e988_2) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_4;
            tmp_tuple_element_4 = mod_consts[16];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_8;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
                tmp_expression_value_8 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15, mod_consts[17]);

                if (tmp_expression_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        CHECK_OBJECT(generator_heap->var_ctypes);
                        tmp_expression_value_8 = generator_heap->var_ctypes;
                        Py_INCREF(tmp_expression_value_8);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[18]);
                Py_DECREF(tmp_expression_value_8);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 17;
                    generator_heap->type_description_2 = "oo";
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
            generator_heap->tmp_dictset_value = MAKE_LIST_EMPTY(12);
            {
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_tuple_element_10;
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_tuple_element_13;
                PyObject *tmp_tuple_element_14;
                PyObject *tmp_tuple_element_15;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 0, tmp_list_element_1);
                tmp_tuple_element_5 = mod_consts[19];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_9;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
                    tmp_expression_value_9 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15, mod_consts[17]);

                    if (tmp_expression_value_9 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_9 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_9);
                        } else {
                            goto tuple_build_exception_3;
                        }
                    }

                    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[20]);
                    Py_DECREF(tmp_expression_value_9);
                    if (tmp_tuple_element_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 18;
                        generator_heap->type_description_2 = "oo";
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
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 1, tmp_list_element_1);
                tmp_tuple_element_6 = mod_consts[21];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_10;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_6);
                    tmp_expression_value_10 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15, mod_consts[17]);

                    if (tmp_expression_value_10 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_10 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_10);
                        } else {
                            goto tuple_build_exception_4;
                        }
                    }

                    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[20]);
                    Py_DECREF(tmp_expression_value_10);
                    if (tmp_tuple_element_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 19;
                        generator_heap->type_description_2 = "oo";
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
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 2, tmp_list_element_1);
                tmp_tuple_element_7 = mod_consts[22];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_11;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_7);
                    tmp_expression_value_11 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15, mod_consts[17]);

                    if (tmp_expression_value_11 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_11 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_11);
                        } else {
                            goto tuple_build_exception_5;
                        }
                    }

                    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[20]);
                    Py_DECREF(tmp_expression_value_11);
                    if (tmp_tuple_element_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 20;
                        generator_heap->type_description_2 = "oo";
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
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 3, tmp_list_element_1);
                tmp_tuple_element_8 = mod_consts[23];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_12;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_8);
                    tmp_expression_value_12 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15, mod_consts[17]);

                    if (tmp_expression_value_12 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_12 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_12);
                        } else {
                            goto tuple_build_exception_6;
                        }
                    }

                    tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[20]);
                    Py_DECREF(tmp_expression_value_12);
                    if (tmp_tuple_element_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 21;
                        generator_heap->type_description_2 = "oo";
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
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 4, tmp_list_element_1);
                tmp_tuple_element_9 = mod_consts[24];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_13;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_9);
                    tmp_expression_value_13 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15, mod_consts[17]);

                    if (tmp_expression_value_13 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_13 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_13);
                        } else {
                            goto tuple_build_exception_7;
                        }
                    }

                    tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[25]);
                    Py_DECREF(tmp_expression_value_13);
                    if (tmp_tuple_element_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 22;
                        generator_heap->type_description_2 = "oo";
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
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 5, tmp_list_element_1);
                tmp_tuple_element_10 = mod_consts[26];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_14;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_10);
                    tmp_expression_value_14 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15, mod_consts[17]);

                    if (tmp_expression_value_14 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_14 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_14);
                        } else {
                            goto tuple_build_exception_8;
                        }
                    }

                    tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[20]);
                    Py_DECREF(tmp_expression_value_14);
                    if (tmp_tuple_element_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 23;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_8;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_10);
                }
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 6, tmp_list_element_1);
                tmp_tuple_element_11 = mod_consts[27];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_15;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_11);
                    tmp_expression_value_15 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15, mod_consts[17]);

                    if (tmp_expression_value_15 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_15 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_15);
                        } else {
                            goto tuple_build_exception_9;
                        }
                    }

                    tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[20]);
                    Py_DECREF(tmp_expression_value_15);
                    if (tmp_tuple_element_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 24;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_9;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_11);
                }
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 7, tmp_list_element_1);
                tmp_tuple_element_12 = mod_consts[28];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_2;
                    PyObject *tmp_expression_value_16;
                    PyObject *tmp_args_element_value_1;
                    PyObject *tmp_expression_value_17;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_12);
                    tmp_expression_value_16 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15, mod_consts[17]);

                    if (tmp_expression_value_16 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_16 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_16);
                        } else {
                            goto tuple_build_exception_10;
                        }
                    }

                    tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[29]);
                    Py_DECREF(tmp_expression_value_16);
                    if (tmp_called_value_2 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 25;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_10;
                    }
                    tmp_expression_value_17 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15, mod_consts[17]);

                    if (tmp_expression_value_17 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_17 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_17);
                        } else {
                            goto tuple_build_exception_10;
                        }
                    }

                    tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[25]);
                    Py_DECREF(tmp_expression_value_17);
                    if (tmp_args_element_value_1 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                        Py_DECREF(tmp_called_value_2);

                        generator_heap->exception_lineno = 25;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_10;
                    }
                    generator_heap->frame_1c77517b5ba7a4b729f8a51215e1e988_2->m_frame.f_lineno = 25;
                    tmp_tuple_element_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
                    Py_DECREF(tmp_called_value_2);
                    Py_DECREF(tmp_args_element_value_1);
                    if (tmp_tuple_element_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 25;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_10;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_12);
                }
                goto tuple_build_noexception_10;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_10:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_10:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 8, tmp_list_element_1);
                tmp_tuple_element_13 = mod_consts[30];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_18;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_13);
                    tmp_expression_value_18 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15, mod_consts[17]);

                    if (tmp_expression_value_18 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_18 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_18);
                        } else {
                            goto tuple_build_exception_11;
                        }
                    }

                    tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[31]);
                    Py_DECREF(tmp_expression_value_18);
                    if (tmp_tuple_element_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 26;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_11;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_13);
                }
                goto tuple_build_noexception_11;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_11:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_11:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 9, tmp_list_element_1);
                tmp_tuple_element_14 = mod_consts[32];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_19;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_14);
                    tmp_expression_value_19 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15, mod_consts[17]);

                    if (tmp_expression_value_19 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_19 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_19);
                        } else {
                            goto tuple_build_exception_12;
                        }
                    }

                    tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[20]);
                    Py_DECREF(tmp_expression_value_19);
                    if (tmp_tuple_element_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 27;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_12;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_14);
                }
                goto tuple_build_noexception_12;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_12:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_12:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 10, tmp_list_element_1);
                tmp_tuple_element_15 = mod_consts[33];
                tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_3;
                    PyObject *tmp_expression_value_20;
                    PyObject *tmp_args_element_value_2;
                    PyObject *tmp_expression_value_21;
                    PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_15);
                    tmp_expression_value_20 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15, mod_consts[17]);

                    if (tmp_expression_value_20 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_20 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_20);
                        } else {
                            goto tuple_build_exception_13;
                        }
                    }

                    tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[29]);
                    Py_DECREF(tmp_expression_value_20);
                    if (tmp_called_value_3 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 28;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_13;
                    }
                    tmp_expression_value_21 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15, mod_consts[17]);

                    if (tmp_expression_value_21 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_21 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_21);
                        } else {
                            goto tuple_build_exception_13;
                        }
                    }

                    tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[25]);
                    Py_DECREF(tmp_expression_value_21);
                    if (tmp_args_element_value_2 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                        Py_DECREF(tmp_called_value_3);

                        generator_heap->exception_lineno = 28;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_13;
                    }
                    generator_heap->frame_1c77517b5ba7a4b729f8a51215e1e988_2->m_frame.f_lineno = 28;
                    tmp_tuple_element_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
                    Py_DECREF(tmp_called_value_3);
                    Py_DECREF(tmp_args_element_value_2);
                    if (tmp_tuple_element_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 28;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_13;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_15);
                }
                goto tuple_build_noexception_13;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_list_element_1);
                goto list_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_13:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 11, tmp_list_element_1);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(generator_heap->tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15, mod_consts[34], generator_heap->tmp_dictset_value);
            Py_DECREF(generator_heap->tmp_dictset_value);
            if (generator_heap->tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 16;
                generator_heap->type_description_2 = "oo";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator_heap->frame_1c77517b5ba7a4b729f8a51215e1e988_2, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator_heap->frame_1c77517b5ba7a4b729f8a51215e1e988_2->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator_heap->frame_1c77517b5ba7a4b729f8a51215e1e988_2, generator_heap->exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            generator_heap->frame_1c77517b5ba7a4b729f8a51215e1e988_2,
            generator_heap->type_description_2,
            generator_heap->outline_0_var___class__,
            generator_heap->var_ctypes
        );


        // Release cached frame if used for exception.
        if (generator_heap->frame_1c77517b5ba7a4b729f8a51215e1e988_2 == cache_frame_1c77517b5ba7a4b729f8a51215e1e988_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_1c77517b5ba7a4b729f8a51215e1e988_2);
            cache_frame_1c77517b5ba7a4b729f8a51215e1e988_2 = NULL;
        }

        assertFrameObject(generator_heap->frame_1c77517b5ba7a4b729f8a51215e1e988_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        generator_heap->type_description_1 = "ooNooooooooooooo";
        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = generator_heap->tmp_class_creation_1__bases;
            CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = generator_heap->tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 15;
                generator_heap->type_description_1 = "ooNooooooooooooo";
                goto try_except_handler_4;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases_orig);
        generator_heap->tmp_dictset_value = generator_heap->tmp_class_creation_1__bases_orig;
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15, mod_consts[35], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 15;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(generator_heap->tmp_class_creation_1__metaclass);
            tmp_called_value_4 = generator_heap->tmp_class_creation_1__metaclass;
            tmp_tuple_element_16 = mod_consts[7];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_16);
            CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases);
            tmp_tuple_element_16 = generator_heap->tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_16);
            CHECK_OBJECT(generator_heap->tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = generator_heap->tmp_class_creation_1__class_decl_dict;
            generator->m_frame->m_frame.f_lineno = 15;
            tmp_assign_source_11 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 15;
                generator_heap->type_description_1 = "ooNooooooooooooo";
                goto try_except_handler_4;
            }
            assert(generator_heap->outline_0_var___class__ == NULL);
            generator_heap->outline_0_var___class__ = tmp_assign_source_11;
        }
        CHECK_OBJECT(generator_heap->outline_0_var___class__);
        tmp_assign_source_10 = generator_heap->outline_0_var___class__;
        Py_INCREF(tmp_assign_source_10);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15);
        generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_DECREF(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15);
        generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_1;
        generator_heap->exception_value = generator_heap->exception_keeper_value_1;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(generator_heap->outline_0_var___class__);
        Py_DECREF(generator_heap->outline_0_var___class__);
        generator_heap->outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_2;
        generator_heap->exception_value = generator_heap->exception_keeper_value_2;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        generator_heap->exception_lineno = 15;
        goto try_except_handler_2;
        outline_result_1:;
        assert(generator_heap->var_XRRCrtcInfo == NULL);
        generator_heap->var_XRRCrtcInfo = tmp_assign_source_10;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_class_creation_1__bases_orig);
    generator_heap->tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_1__bases);
    generator_heap->tmp_class_creation_1__bases = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_1__class_decl_dict);
    generator_heap->tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_1__metaclass);
    generator_heap->tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_1__prepared);
    generator_heap->tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases_orig);
    Py_DECREF(generator_heap->tmp_class_creation_1__bases_orig);
    generator_heap->tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_1__bases);
    Py_DECREF(generator_heap->tmp_class_creation_1__bases);
    generator_heap->tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_1__class_decl_dict);
    Py_DECREF(generator_heap->tmp_class_creation_1__class_decl_dict);
    generator_heap->tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_1__metaclass);
    Py_DECREF(generator_heap->tmp_class_creation_1__metaclass);
    generator_heap->tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_1__prepared);
    Py_DECREF(generator_heap->tmp_class_creation_1__prepared);
    generator_heap->tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_22 = generator_heap->var_ctypes;
        tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[5]);
        if (tmp_tuple_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 31;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_12 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_12, 0, tmp_tuple_element_17);
        assert(generator_heap->tmp_class_creation_2__bases_orig == NULL);
        generator_heap->tmp_class_creation_2__bases_orig = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = generator_heap->tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_13 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 31;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_5;
        }
        assert(generator_heap->tmp_class_creation_2__bases == NULL);
        generator_heap->tmp_class_creation_2__bases = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_DICT_EMPTY();
        assert(generator_heap->tmp_class_creation_2__class_decl_dict == NULL);
        generator_heap->tmp_class_creation_2__class_decl_dict = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(generator_heap->tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 31;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases);
        tmp_expression_value_23 = generator_heap->tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[1];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 31;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 31;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases);
        tmp_bases_value_2 = generator_heap->tmp_class_creation_2__bases;
        tmp_assign_source_15 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 31;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_5;
        }
        assert(generator_heap->tmp_class_creation_2__metaclass == NULL);
        generator_heap->tmp_class_creation_2__metaclass = tmp_assign_source_15;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__metaclass);
        tmp_expression_value_24 = generator_heap->tmp_class_creation_2__metaclass;
        generator_heap->tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts[6]);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 31;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_6 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__metaclass);
        tmp_expression_value_25 = generator_heap->tmp_class_creation_2__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[6]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 31;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_18 = mod_consts[36];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_18);
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases);
        tmp_tuple_element_18 = generator_heap->tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_18);
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = generator_heap->tmp_class_creation_2__class_decl_dict;
        generator->m_frame->m_frame.f_lineno = 31;
        tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 31;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_5;
        }
        assert(generator_heap->tmp_class_creation_2__prepared == NULL);
        generator_heap->tmp_class_creation_2__prepared = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__prepared);
        tmp_expression_value_26 = generator_heap->tmp_class_creation_2__prepared;
        generator_heap->tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts[8]);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 31;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_operand_value_2 = (generator_heap->tmp_res != 0) ? Py_True : Py_False;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_7 = (generator_heap->tmp_res == 0) ? true : false;
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
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_name_value_4;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[9];
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__metaclass);
        tmp_expression_value_27 = generator_heap->tmp_class_creation_2__metaclass;
        tmp_name_value_4 = mod_consts[10];
        tmp_default_value_2 = mod_consts[11];
        tmp_tuple_element_19 = BUILTIN_GETATTR(tstate, tmp_expression_value_27, tmp_name_value_4, tmp_default_value_2);
        if (tmp_tuple_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 31;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_28;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_19);
            CHECK_OBJECT(generator_heap->tmp_class_creation_2__prepared);
            tmp_type_arg_4 = generator_heap->tmp_class_creation_2__prepared;
            tmp_expression_value_28 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_28 == NULL));
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[10]);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 31;
                generator_heap->type_description_1 = "ooNooooooooooooo";
                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 31;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_5;
        }
        generator_heap->exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        generator_heap->exception_value = tmp_raise_value_2;
        generator_heap->exception_lineno = 31;
        RAISE_EXCEPTION_IMPLICIT(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "ooNooooooooooooo";
        goto try_except_handler_5;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_DICT_EMPTY();
        assert(generator_heap->tmp_class_creation_2__prepared == NULL);
        generator_heap->tmp_class_creation_2__prepared = tmp_assign_source_17;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(generator_heap->tmp_class_creation_2__prepared);
            tmp_set_locals_2 = generator_heap->tmp_class_creation_2__prepared;
            generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        generator_heap->tmp_dictset_value = mod_consts[12];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31, mod_consts[13], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 31;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_7;
        }
        generator_heap->tmp_dictset_value = mod_consts[37];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31, mod_consts[15], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 31;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_7;
        }
        if (isFrameUnusable(cache_frame_c68f6e570314c9d793932f6c337cb7cb_3)) {
            Py_XDECREF(cache_frame_c68f6e570314c9d793932f6c337cb7cb_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c68f6e570314c9d793932f6c337cb7cb_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c68f6e570314c9d793932f6c337cb7cb_3 = MAKE_CLASS_FRAME(tstate, codeobj_c68f6e570314c9d793932f6c337cb7cb, module_screeninfo$enumerators$xrandr, NULL, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_c68f6e570314c9d793932f6c337cb7cb_3->m_type_description == NULL);
        generator_heap->frame_c68f6e570314c9d793932f6c337cb7cb_3 = cache_frame_c68f6e570314c9d793932f6c337cb7cb_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, generator_heap->frame_c68f6e570314c9d793932f6c337cb7cb_3);
        assert(Py_REFCNT(generator_heap->frame_c68f6e570314c9d793932f6c337cb7cb_3) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_tuple_element_20;
            tmp_tuple_element_20 = mod_consts[16];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_29;
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_20);
                tmp_expression_value_29 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31, mod_consts[17]);

                if (tmp_expression_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        CHECK_OBJECT(generator_heap->var_ctypes);
                        tmp_expression_value_29 = generator_heap->var_ctypes;
                        Py_INCREF(tmp_expression_value_29);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[18]);
                Py_DECREF(tmp_expression_value_29);
                if (tmp_tuple_element_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 33;
                    generator_heap->type_description_2 = "oo";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_20);
            }
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_list_element_2);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            generator_heap->tmp_dictset_value = MAKE_LIST_EMPTY(8);
            {
                PyObject *tmp_tuple_element_21;
                PyObject *tmp_tuple_element_22;
                PyObject *tmp_tuple_element_23;
                PyObject *tmp_tuple_element_24;
                PyObject *tmp_tuple_element_25;
                PyObject *tmp_tuple_element_26;
                PyObject *tmp_tuple_element_27;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 0, tmp_list_element_2);
                tmp_tuple_element_21 = mod_consts[38];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_30;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_21);
                    tmp_expression_value_30 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31, mod_consts[17]);

                    if (tmp_expression_value_30 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_30 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_30);
                        } else {
                            goto tuple_build_exception_16;
                        }
                    }

                    tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[18]);
                    Py_DECREF(tmp_expression_value_30);
                    if (tmp_tuple_element_21 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 34;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_16;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_21);
                }
                goto tuple_build_noexception_16;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_16:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_16:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 1, tmp_list_element_2);
                tmp_tuple_element_22 = mod_consts[39];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_31;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_22);
                    tmp_expression_value_31 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31, mod_consts[17]);

                    if (tmp_expression_value_31 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_31 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_31);
                        } else {
                            goto tuple_build_exception_17;
                        }
                    }

                    tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[20]);
                    Py_DECREF(tmp_expression_value_31);
                    if (tmp_tuple_element_22 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 35;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_17;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_22);
                }
                goto tuple_build_noexception_17;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_17:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_17:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 2, tmp_list_element_2);
                tmp_tuple_element_23 = mod_consts[40];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_6;
                    PyObject *tmp_expression_value_32;
                    PyObject *tmp_args_element_value_3;
                    PyObject *tmp_expression_value_33;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_23);
                    tmp_expression_value_32 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31, mod_consts[17]);

                    if (tmp_expression_value_32 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_32 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_32);
                        } else {
                            goto tuple_build_exception_18;
                        }
                    }

                    tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[29]);
                    Py_DECREF(tmp_expression_value_32);
                    if (tmp_called_value_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 36;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_18;
                    }
                    tmp_expression_value_33 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31, mod_consts[17]);

                    if (tmp_expression_value_33 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_33 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_33);
                        } else {
                            goto tuple_build_exception_18;
                        }
                    }

                    tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[18]);
                    Py_DECREF(tmp_expression_value_33);
                    if (tmp_args_element_value_3 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                        Py_DECREF(tmp_called_value_6);

                        generator_heap->exception_lineno = 36;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_18;
                    }
                    generator_heap->frame_c68f6e570314c9d793932f6c337cb7cb_3->m_frame.f_lineno = 36;
                    tmp_tuple_element_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
                    Py_DECREF(tmp_called_value_6);
                    Py_DECREF(tmp_args_element_value_3);
                    if (tmp_tuple_element_23 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 36;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_18;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_23);
                }
                goto tuple_build_noexception_18;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_18:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_18:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 3, tmp_list_element_2);
                tmp_tuple_element_24 = mod_consts[27];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_34;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_24);
                    tmp_expression_value_34 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31, mod_consts[17]);

                    if (tmp_expression_value_34 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_34 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_34);
                        } else {
                            goto tuple_build_exception_19;
                        }
                    }

                    tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[20]);
                    Py_DECREF(tmp_expression_value_34);
                    if (tmp_tuple_element_24 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 37;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_19;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_24);
                }
                goto tuple_build_noexception_19;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_19:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_19:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 4, tmp_list_element_2);
                tmp_tuple_element_25 = mod_consts[28];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_7;
                    PyObject *tmp_expression_value_35;
                    PyObject *tmp_args_element_value_4;
                    PyObject *tmp_expression_value_36;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_25);
                    tmp_expression_value_35 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31, mod_consts[17]);

                    if (tmp_expression_value_35 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_35 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_35);
                        } else {
                            goto tuple_build_exception_20;
                        }
                    }

                    tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[29]);
                    Py_DECREF(tmp_expression_value_35);
                    if (tmp_called_value_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 38;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_20;
                    }
                    tmp_expression_value_36 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31, mod_consts[17]);

                    if (tmp_expression_value_36 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_36 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_36);
                        } else {
                            goto tuple_build_exception_20;
                        }
                    }

                    tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[18]);
                    Py_DECREF(tmp_expression_value_36);
                    if (tmp_args_element_value_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                        Py_DECREF(tmp_called_value_7);

                        generator_heap->exception_lineno = 38;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_20;
                    }
                    generator_heap->frame_c68f6e570314c9d793932f6c337cb7cb_3->m_frame.f_lineno = 38;
                    tmp_tuple_element_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
                    Py_DECREF(tmp_called_value_7);
                    Py_DECREF(tmp_args_element_value_4);
                    if (tmp_tuple_element_25 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 38;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_20;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_25);
                }
                goto tuple_build_noexception_20;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_20:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_20:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 5, tmp_list_element_2);
                tmp_tuple_element_26 = mod_consts[41];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_37;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_26);
                    tmp_expression_value_37 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31, mod_consts[17]);

                    if (tmp_expression_value_37 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_37 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_37);
                        } else {
                            goto tuple_build_exception_21;
                        }
                    }

                    tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[20]);
                    Py_DECREF(tmp_expression_value_37);
                    if (tmp_tuple_element_26 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 39;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_21;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_26);
                }
                goto tuple_build_noexception_21;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_21:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_21:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 6, tmp_list_element_2);
                tmp_tuple_element_27 = mod_consts[42];
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_38;
                    PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_27);
                    tmp_expression_value_38 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31, mod_consts[17]);

                    if (tmp_expression_value_38 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_38 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_38);
                        } else {
                            goto tuple_build_exception_22;
                        }
                    }

                    tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[43]);
                    Py_DECREF(tmp_expression_value_38);
                    if (tmp_tuple_element_27 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 40;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_22;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_27);
                }
                goto tuple_build_noexception_22;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_22:;
                Py_DECREF(tmp_list_element_2);
                goto list_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_22:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 7, tmp_list_element_2);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(generator_heap->tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31, mod_consts[34], generator_heap->tmp_dictset_value);
            Py_DECREF(generator_heap->tmp_dictset_value);
            if (generator_heap->tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 32;
                generator_heap->type_description_2 = "oo";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator_heap->frame_c68f6e570314c9d793932f6c337cb7cb_3, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator_heap->frame_c68f6e570314c9d793932f6c337cb7cb_3->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator_heap->frame_c68f6e570314c9d793932f6c337cb7cb_3, generator_heap->exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            generator_heap->frame_c68f6e570314c9d793932f6c337cb7cb_3,
            generator_heap->type_description_2,
            generator_heap->outline_1_var___class__,
            generator_heap->var_ctypes
        );


        // Release cached frame if used for exception.
        if (generator_heap->frame_c68f6e570314c9d793932f6c337cb7cb_3 == cache_frame_c68f6e570314c9d793932f6c337cb7cb_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_c68f6e570314c9d793932f6c337cb7cb_3);
            cache_frame_c68f6e570314c9d793932f6c337cb7cb_3 = NULL;
        }

        assertFrameObject(generator_heap->frame_c68f6e570314c9d793932f6c337cb7cb_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        generator_heap->type_description_1 = "ooNooooooooooooo";
        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = generator_heap->tmp_class_creation_2__bases;
            CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = generator_heap->tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 31;
                generator_heap->type_description_1 = "ooNooooooooooooo";
                goto try_except_handler_7;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases_orig);
        generator_heap->tmp_dictset_value = generator_heap->tmp_class_creation_2__bases_orig;
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31, mod_consts[35], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 31;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_7;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(generator_heap->tmp_class_creation_2__metaclass);
            tmp_called_value_8 = generator_heap->tmp_class_creation_2__metaclass;
            tmp_tuple_element_28 = mod_consts[36];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_28);
            CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases);
            tmp_tuple_element_28 = generator_heap->tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_28);
            tmp_tuple_element_28 = generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_28);
            CHECK_OBJECT(generator_heap->tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = generator_heap->tmp_class_creation_2__class_decl_dict;
            generator->m_frame->m_frame.f_lineno = 31;
            tmp_assign_source_19 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 31;
                generator_heap->type_description_1 = "ooNooooooooooooo";
                goto try_except_handler_7;
            }
            assert(generator_heap->outline_1_var___class__ == NULL);
            generator_heap->outline_1_var___class__ = tmp_assign_source_19;
        }
        CHECK_OBJECT(generator_heap->outline_1_var___class__);
        tmp_assign_source_18 = generator_heap->outline_1_var___class__;
        Py_INCREF(tmp_assign_source_18);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31);
        generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_DECREF(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31);
        generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_4;
        generator_heap->exception_value = generator_heap->exception_keeper_value_4;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(generator_heap->outline_1_var___class__);
        Py_DECREF(generator_heap->outline_1_var___class__);
        generator_heap->outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_5;
        generator_heap->exception_value = generator_heap->exception_keeper_value_5;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        generator_heap->exception_lineno = 31;
        goto try_except_handler_5;
        outline_result_2:;
        assert(generator_heap->var_XRRScreenResources == NULL);
        generator_heap->var_XRRScreenResources = tmp_assign_source_18;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_class_creation_2__bases_orig);
    generator_heap->tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_2__bases);
    generator_heap->tmp_class_creation_2__bases = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_2__class_decl_dict);
    generator_heap->tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_2__metaclass);
    generator_heap->tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_2__prepared);
    generator_heap->tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_6;
    generator_heap->exception_value = generator_heap->exception_keeper_value_6;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_6;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases_orig);
    Py_DECREF(generator_heap->tmp_class_creation_2__bases_orig);
    generator_heap->tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_2__bases);
    Py_DECREF(generator_heap->tmp_class_creation_2__bases);
    generator_heap->tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_2__class_decl_dict);
    Py_DECREF(generator_heap->tmp_class_creation_2__class_decl_dict);
    generator_heap->tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_2__metaclass);
    Py_DECREF(generator_heap->tmp_class_creation_2__metaclass);
    generator_heap->tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_2__prepared);
    Py_DECREF(generator_heap->tmp_class_creation_2__prepared);
    generator_heap->tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_expression_value_39;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_39 = generator_heap->var_ctypes;
        tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[5]);
        if (tmp_tuple_element_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_20 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_20, 0, tmp_tuple_element_29);
        assert(generator_heap->tmp_class_creation_3__bases_orig == NULL);
        generator_heap->tmp_class_creation_3__bases_orig = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = generator_heap->tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_21 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_8;
        }
        assert(generator_heap->tmp_class_creation_3__bases == NULL);
        generator_heap->tmp_class_creation_3__bases = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(generator_heap->tmp_class_creation_3__class_decl_dict == NULL);
        generator_heap->tmp_class_creation_3__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(generator_heap->tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases);
        tmp_expression_value_40 = generator_heap->tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[1];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_40, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_8;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases);
        tmp_bases_value_3 = generator_heap->tmp_class_creation_3__bases;
        tmp_assign_source_23 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_8;
        }
        assert(generator_heap->tmp_class_creation_3__metaclass == NULL);
        generator_heap->tmp_class_creation_3__metaclass = tmp_assign_source_23;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_expression_value_41;
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__metaclass);
        tmp_expression_value_41 = generator_heap->tmp_class_creation_3__metaclass;
        generator_heap->tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_41, mod_consts[6]);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_10 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__metaclass);
        tmp_expression_value_42 = generator_heap->tmp_class_creation_3__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[6]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_tuple_element_30 = mod_consts[44];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_30);
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases);
        tmp_tuple_element_30 = generator_heap->tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_30);
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = generator_heap->tmp_class_creation_3__class_decl_dict;
        generator->m_frame->m_frame.f_lineno = 43;
        tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_8;
        }
        assert(generator_heap->tmp_class_creation_3__prepared == NULL);
        generator_heap->tmp_class_creation_3__prepared = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_43;
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__prepared);
        tmp_expression_value_43 = generator_heap->tmp_class_creation_3__prepared;
        generator_heap->tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_43, mod_consts[8]);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_operand_value_3 = (generator_heap->tmp_res != 0) ? Py_True : Py_False;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_11 = (generator_heap->tmp_res == 0) ? true : false;
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
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[9];
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__metaclass);
        tmp_expression_value_44 = generator_heap->tmp_class_creation_3__metaclass;
        tmp_name_value_5 = mod_consts[10];
        tmp_default_value_3 = mod_consts[11];
        tmp_tuple_element_31 = BUILTIN_GETATTR(tstate, tmp_expression_value_44, tmp_name_value_5, tmp_default_value_3);
        if (tmp_tuple_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_45;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_31);
            CHECK_OBJECT(generator_heap->tmp_class_creation_3__prepared);
            tmp_type_arg_6 = generator_heap->tmp_class_creation_3__prepared;
            tmp_expression_value_45 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_45 == NULL));
            tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[10]);
            Py_DECREF(tmp_expression_value_45);
            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 43;
                generator_heap->type_description_1 = "ooNooooooooooooo";
                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_31);
        }
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_23:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_8;
        }
        generator_heap->exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        generator_heap->exception_value = tmp_raise_value_3;
        generator_heap->exception_lineno = 43;
        RAISE_EXCEPTION_IMPLICIT(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "ooNooooooooooooo";
        goto try_except_handler_8;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_DICT_EMPTY();
        assert(generator_heap->tmp_class_creation_3__prepared == NULL);
        generator_heap->tmp_class_creation_3__prepared = tmp_assign_source_25;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_26;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(generator_heap->tmp_class_creation_3__prepared);
            tmp_set_locals_3 = generator_heap->tmp_class_creation_3__prepared;
            generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        generator_heap->tmp_dictset_value = mod_consts[12];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43, mod_consts[13], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_10;
        }
        generator_heap->tmp_dictset_value = mod_consts[45];
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43, mod_consts[15], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_10;
        }
        if (isFrameUnusable(cache_frame_f7c6412b5cf56c74ec5425e6bc10463e_4)) {
            Py_XDECREF(cache_frame_f7c6412b5cf56c74ec5425e6bc10463e_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_f7c6412b5cf56c74ec5425e6bc10463e_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_f7c6412b5cf56c74ec5425e6bc10463e_4 = MAKE_CLASS_FRAME(tstate, codeobj_f7c6412b5cf56c74ec5425e6bc10463e, module_screeninfo$enumerators$xrandr, NULL, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_f7c6412b5cf56c74ec5425e6bc10463e_4->m_type_description == NULL);
        generator_heap->frame_f7c6412b5cf56c74ec5425e6bc10463e_4 = cache_frame_f7c6412b5cf56c74ec5425e6bc10463e_4;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, generator_heap->frame_f7c6412b5cf56c74ec5425e6bc10463e_4);
        assert(Py_REFCNT(generator_heap->frame_f7c6412b5cf56c74ec5425e6bc10463e_4) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_tuple_element_32;
            tmp_tuple_element_32 = mod_consts[16];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_46;
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_32);
                tmp_expression_value_46 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43, mod_consts[17]);

                if (tmp_expression_value_46 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        CHECK_OBJECT(generator_heap->var_ctypes);
                        tmp_expression_value_46 = generator_heap->var_ctypes;
                        Py_INCREF(tmp_expression_value_46);
                    } else {
                        goto tuple_build_exception_24;
                    }
                }

                tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[18]);
                Py_DECREF(tmp_expression_value_46);
                if (tmp_tuple_element_32 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 45;
                    generator_heap->type_description_2 = "oo";
                    goto tuple_build_exception_24;
                }
                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_32);
            }
            goto tuple_build_noexception_24;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_24:;
            Py_DECREF(tmp_list_element_3);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_24:;
            generator_heap->tmp_dictset_value = MAKE_LIST_EMPTY(15);
            {
                PyObject *tmp_tuple_element_33;
                PyObject *tmp_tuple_element_34;
                PyObject *tmp_tuple_element_35;
                PyObject *tmp_tuple_element_36;
                PyObject *tmp_tuple_element_37;
                PyObject *tmp_tuple_element_38;
                PyObject *tmp_tuple_element_39;
                PyObject *tmp_tuple_element_40;
                PyObject *tmp_tuple_element_41;
                PyObject *tmp_tuple_element_42;
                PyObject *tmp_tuple_element_43;
                PyObject *tmp_tuple_element_44;
                PyObject *tmp_tuple_element_45;
                PyObject *tmp_tuple_element_46;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 0, tmp_list_element_3);
                tmp_tuple_element_33 = mod_consts[46];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_47;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_33);
                    tmp_expression_value_47 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43, mod_consts[17]);

                    if (tmp_expression_value_47 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_47 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_47);
                        } else {
                            goto tuple_build_exception_25;
                        }
                    }

                    tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[18]);
                    Py_DECREF(tmp_expression_value_47);
                    if (tmp_tuple_element_33 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 46;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_25;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_33);
                }
                goto tuple_build_noexception_25;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_25:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_25:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 1, tmp_list_element_3);
                tmp_tuple_element_34 = mod_consts[47];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_48;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_34);
                    tmp_expression_value_48 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43, mod_consts[17]);

                    if (tmp_expression_value_48 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_48 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_48);
                        } else {
                            goto tuple_build_exception_26;
                        }
                    }

                    tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[48]);
                    Py_DECREF(tmp_expression_value_48);
                    if (tmp_tuple_element_34 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 47;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_26;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_34);
                }
                goto tuple_build_noexception_26;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_26:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_26:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 2, tmp_list_element_3);
                tmp_tuple_element_35 = mod_consts[49];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_49;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_35);
                    tmp_expression_value_49 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43, mod_consts[17]);

                    if (tmp_expression_value_49 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_49 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_49);
                        } else {
                            goto tuple_build_exception_27;
                        }
                    }

                    tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[20]);
                    Py_DECREF(tmp_expression_value_49);
                    if (tmp_tuple_element_35 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 48;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_27;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_35);
                }
                goto tuple_build_noexception_27;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_27:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_27:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 3, tmp_list_element_3);
                tmp_tuple_element_36 = mod_consts[50];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_50;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_36);
                    tmp_expression_value_50 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43, mod_consts[17]);

                    if (tmp_expression_value_50 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_50 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_50);
                        } else {
                            goto tuple_build_exception_28;
                        }
                    }

                    tmp_tuple_element_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[18]);
                    Py_DECREF(tmp_expression_value_50);
                    if (tmp_tuple_element_36 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 49;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_28;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_36);
                }
                goto tuple_build_noexception_28;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_28:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_28:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 4, tmp_list_element_3);
                tmp_tuple_element_37 = mod_consts[51];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_51;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_37);
                    tmp_expression_value_51 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43, mod_consts[17]);

                    if (tmp_expression_value_51 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_51 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_51);
                        } else {
                            goto tuple_build_exception_29;
                        }
                    }

                    tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[18]);
                    Py_DECREF(tmp_expression_value_51);
                    if (tmp_tuple_element_37 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 50;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_29;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_37);
                }
                goto tuple_build_noexception_29;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_29:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_29:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 5, tmp_list_element_3);
                tmp_tuple_element_38 = mod_consts[52];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_52;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_38);
                    tmp_expression_value_52 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43, mod_consts[17]);

                    if (tmp_expression_value_52 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_52 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_52);
                        } else {
                            goto tuple_build_exception_30;
                        }
                    }

                    tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[31]);
                    Py_DECREF(tmp_expression_value_52);
                    if (tmp_tuple_element_38 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 51;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_30;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_38);
                }
                goto tuple_build_noexception_30;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_30:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_30:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 6, tmp_list_element_3);
                tmp_tuple_element_39 = mod_consts[53];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_53;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_39);
                    tmp_expression_value_53 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43, mod_consts[17]);

                    if (tmp_expression_value_53 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_53 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_53);
                        } else {
                            goto tuple_build_exception_31;
                        }
                    }

                    tmp_tuple_element_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[31]);
                    Py_DECREF(tmp_expression_value_53);
                    if (tmp_tuple_element_39 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 52;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_31;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_39);
                }
                goto tuple_build_noexception_31;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_31:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_31:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 7, tmp_list_element_3);
                tmp_tuple_element_40 = mod_consts[39];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_54;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_40);
                    tmp_expression_value_54 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43, mod_consts[17]);

                    if (tmp_expression_value_54 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_54 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_54);
                        } else {
                            goto tuple_build_exception_32;
                        }
                    }

                    tmp_tuple_element_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[20]);
                    Py_DECREF(tmp_expression_value_54);
                    if (tmp_tuple_element_40 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 53;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_32;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_40);
                }
                goto tuple_build_noexception_32;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_32:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_32:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 8, tmp_list_element_3);
                tmp_tuple_element_41 = mod_consts[40];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_10;
                    PyObject *tmp_expression_value_55;
                    PyObject *tmp_args_element_value_5;
                    PyObject *tmp_expression_value_56;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_41);
                    tmp_expression_value_55 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43, mod_consts[17]);

                    if (tmp_expression_value_55 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_55 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_55);
                        } else {
                            goto tuple_build_exception_33;
                        }
                    }

                    tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[29]);
                    Py_DECREF(tmp_expression_value_55);
                    if (tmp_called_value_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 54;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_33;
                    }
                    tmp_expression_value_56 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43, mod_consts[17]);

                    if (tmp_expression_value_56 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_56 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_56);
                        } else {
                            goto tuple_build_exception_33;
                        }
                    }

                    tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[18]);
                    Py_DECREF(tmp_expression_value_56);
                    if (tmp_args_element_value_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                        Py_DECREF(tmp_called_value_10);

                        generator_heap->exception_lineno = 54;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_33;
                    }
                    generator_heap->frame_f7c6412b5cf56c74ec5425e6bc10463e_4->m_frame.f_lineno = 54;
                    tmp_tuple_element_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_5);
                    Py_DECREF(tmp_called_value_10);
                    Py_DECREF(tmp_args_element_value_5);
                    if (tmp_tuple_element_41 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 54;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_33;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_41);
                }
                goto tuple_build_noexception_33;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_33:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_33:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 9, tmp_list_element_3);
                tmp_tuple_element_42 = mod_consts[54];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_57;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_42);
                    tmp_expression_value_57 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43, mod_consts[17]);

                    if (tmp_expression_value_57 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_57 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_57);
                        } else {
                            goto tuple_build_exception_34;
                        }
                    }

                    tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[20]);
                    Py_DECREF(tmp_expression_value_57);
                    if (tmp_tuple_element_42 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 55;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_34;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_42);
                }
                goto tuple_build_noexception_34;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_34:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_34:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 10, tmp_list_element_3);
                tmp_tuple_element_43 = mod_consts[55];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_11;
                    PyObject *tmp_expression_value_58;
                    PyObject *tmp_args_element_value_6;
                    PyObject *tmp_expression_value_59;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_43);
                    tmp_expression_value_58 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43, mod_consts[17]);

                    if (tmp_expression_value_58 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_58 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_58);
                        } else {
                            goto tuple_build_exception_35;
                        }
                    }

                    tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[29]);
                    Py_DECREF(tmp_expression_value_58);
                    if (tmp_called_value_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 56;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_35;
                    }
                    tmp_expression_value_59 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43, mod_consts[17]);

                    if (tmp_expression_value_59 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_59 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_59);
                        } else {
                            goto tuple_build_exception_35;
                        }
                    }

                    tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[18]);
                    Py_DECREF(tmp_expression_value_59);
                    if (tmp_args_element_value_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                        Py_DECREF(tmp_called_value_11);

                        generator_heap->exception_lineno = 56;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_35;
                    }
                    generator_heap->frame_f7c6412b5cf56c74ec5425e6bc10463e_4->m_frame.f_lineno = 56;
                    tmp_tuple_element_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_6);
                    Py_DECREF(tmp_called_value_11);
                    Py_DECREF(tmp_args_element_value_6);
                    if (tmp_tuple_element_43 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 56;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_35;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_43);
                }
                goto tuple_build_noexception_35;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_35:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_35:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 11, tmp_list_element_3);
                tmp_tuple_element_44 = mod_consts[41];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_60;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_44);
                    tmp_expression_value_60 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43, mod_consts[17]);

                    if (tmp_expression_value_60 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_60 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_60);
                        } else {
                            goto tuple_build_exception_36;
                        }
                    }

                    tmp_tuple_element_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[20]);
                    Py_DECREF(tmp_expression_value_60);
                    if (tmp_tuple_element_44 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 57;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_36;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_44);
                }
                goto tuple_build_noexception_36;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_36:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_36:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 12, tmp_list_element_3);
                tmp_tuple_element_45 = mod_consts[56];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_61;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_45);
                    tmp_expression_value_61 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43, mod_consts[17]);

                    if (tmp_expression_value_61 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_61 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_61);
                        } else {
                            goto tuple_build_exception_37;
                        }
                    }

                    tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[20]);
                    Py_DECREF(tmp_expression_value_61);
                    if (tmp_tuple_element_45 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 58;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_37;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_45);
                }
                goto tuple_build_noexception_37;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_37:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_37:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 13, tmp_list_element_3);
                tmp_tuple_element_46 = mod_consts[42];
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_called_value_12;
                    PyObject *tmp_expression_value_62;
                    PyObject *tmp_args_element_value_7;
                    PyObject *tmp_expression_value_63;
                    PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_46);
                    tmp_expression_value_62 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43, mod_consts[17]);

                    if (tmp_expression_value_62 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_62 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_62);
                        } else {
                            goto tuple_build_exception_38;
                        }
                    }

                    tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[29]);
                    Py_DECREF(tmp_expression_value_62);
                    if (tmp_called_value_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 59;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_38;
                    }
                    tmp_expression_value_63 = PyObject_GetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43, mod_consts[17]);

                    if (tmp_expression_value_63 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            CHECK_OBJECT(generator_heap->var_ctypes);
                            tmp_expression_value_63 = generator_heap->var_ctypes;
                            Py_INCREF(tmp_expression_value_63);
                        } else {
                            goto tuple_build_exception_38;
                        }
                    }

                    tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[18]);
                    Py_DECREF(tmp_expression_value_63);
                    if (tmp_args_element_value_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                        Py_DECREF(tmp_called_value_12);

                        generator_heap->exception_lineno = 59;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_38;
                    }
                    generator_heap->frame_f7c6412b5cf56c74ec5425e6bc10463e_4->m_frame.f_lineno = 59;
                    tmp_tuple_element_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_7);
                    Py_DECREF(tmp_called_value_12);
                    Py_DECREF(tmp_args_element_value_7);
                    if (tmp_tuple_element_46 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 59;
                        generator_heap->type_description_2 = "oo";
                        goto tuple_build_exception_38;
                    }
                    PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_46);
                }
                goto tuple_build_noexception_38;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_38:;
                Py_DECREF(tmp_list_element_3);
                goto list_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_38:;
                PyList_SET_ITEM(generator_heap->tmp_dictset_value, 14, tmp_list_element_3);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(generator_heap->tmp_dictset_value);
            goto frame_exception_exit_4;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43, mod_consts[34], generator_heap->tmp_dictset_value);
            Py_DECREF(generator_heap->tmp_dictset_value);
            if (generator_heap->tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 44;
                generator_heap->type_description_2 = "oo";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator_heap->frame_f7c6412b5cf56c74ec5425e6bc10463e_4, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator_heap->frame_f7c6412b5cf56c74ec5425e6bc10463e_4->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator_heap->frame_f7c6412b5cf56c74ec5425e6bc10463e_4, generator_heap->exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            generator_heap->frame_f7c6412b5cf56c74ec5425e6bc10463e_4,
            generator_heap->type_description_2,
            generator_heap->outline_2_var___class__,
            generator_heap->var_ctypes
        );


        // Release cached frame if used for exception.
        if (generator_heap->frame_f7c6412b5cf56c74ec5425e6bc10463e_4 == cache_frame_f7c6412b5cf56c74ec5425e6bc10463e_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_f7c6412b5cf56c74ec5425e6bc10463e_4);
            cache_frame_f7c6412b5cf56c74ec5425e6bc10463e_4 = NULL;
        }

        assertFrameObject(generator_heap->frame_f7c6412b5cf56c74ec5425e6bc10463e_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;
        generator_heap->type_description_1 = "ooNooooooooooooo";
        goto try_except_handler_10;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = generator_heap->tmp_class_creation_3__bases;
            CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = generator_heap->tmp_class_creation_3__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 43;
                generator_heap->type_description_1 = "ooNooooooooooooo";
                goto try_except_handler_10;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases_orig);
        generator_heap->tmp_dictset_value = generator_heap->tmp_class_creation_3__bases_orig;
        generator_heap->tmp_res = PyObject_SetItem(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43, mod_consts[35], generator_heap->tmp_dictset_value);
        if (generator_heap->tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_10;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_47;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(generator_heap->tmp_class_creation_3__metaclass);
            tmp_called_value_13 = generator_heap->tmp_class_creation_3__metaclass;
            tmp_tuple_element_47 = mod_consts[44];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_47);
            CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases);
            tmp_tuple_element_47 = generator_heap->tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_47);
            tmp_tuple_element_47 = generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_47);
            CHECK_OBJECT(generator_heap->tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = generator_heap->tmp_class_creation_3__class_decl_dict;
            generator->m_frame->m_frame.f_lineno = 43;
            tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 43;
                generator_heap->type_description_1 = "ooNooooooooooooo";
                goto try_except_handler_10;
            }
            assert(generator_heap->outline_2_var___class__ == NULL);
            generator_heap->outline_2_var___class__ = tmp_assign_source_27;
        }
        CHECK_OBJECT(generator_heap->outline_2_var___class__);
        tmp_assign_source_26 = generator_heap->outline_2_var___class__;
        Py_INCREF(tmp_assign_source_26);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43);
        generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        generator_heap->exception_keeper_type_7 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_7 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_7 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_DECREF(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43);
        generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_7;
        generator_heap->exception_value = generator_heap->exception_keeper_value_7;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_7;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(generator_heap->outline_2_var___class__);
        Py_DECREF(generator_heap->outline_2_var___class__);
        generator_heap->outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        generator_heap->exception_keeper_type_8 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_8 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_8 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_8;
        generator_heap->exception_value = generator_heap->exception_keeper_value_8;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_8;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        generator_heap->exception_lineno = 43;
        goto try_except_handler_8;
        outline_result_3:;
        assert(generator_heap->var_XRROutputInfo == NULL);
        generator_heap->var_XRROutputInfo = tmp_assign_source_26;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_8:;
    generator_heap->exception_keeper_type_9 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_9 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_9 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_class_creation_3__bases_orig);
    generator_heap->tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_3__bases);
    generator_heap->tmp_class_creation_3__bases = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_3__class_decl_dict);
    generator_heap->tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_3__metaclass);
    generator_heap->tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(generator_heap->tmp_class_creation_3__prepared);
    generator_heap->tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_9;
    generator_heap->exception_value = generator_heap->exception_keeper_value_9;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_9;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases_orig);
    Py_DECREF(generator_heap->tmp_class_creation_3__bases_orig);
    generator_heap->tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_3__bases);
    Py_DECREF(generator_heap->tmp_class_creation_3__bases);
    generator_heap->tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_3__class_decl_dict);
    Py_DECREF(generator_heap->tmp_class_creation_3__class_decl_dict);
    generator_heap->tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_3__metaclass);
    Py_DECREF(generator_heap->tmp_class_creation_3__metaclass);
    generator_heap->tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(generator_heap->tmp_class_creation_3__prepared);
    Py_DECREF(generator_heap->tmp_class_creation_3__prepared);
    generator_heap->tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[57];
        tmp_dict_value_1 = (PyObject *)&PyLong_Type;
        tmp_annotations_1 = _PyDict_NewPresized( 3 );
        generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(generator_heap->tmp_res != 0));
        tmp_dict_key_1 = mod_consts[46];
        CHECK_OBJECT(generator_heap->var_XRRCrtcInfo);
        tmp_dict_value_1 = generator_heap->var_XRRCrtcInfo;
        generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(generator_heap->tmp_res != 0));
        tmp_dict_key_1 = mod_consts[58];
        tmp_dict_value_1 = (PyObject *)&PyBool_Type;
        generator_heap->tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(generator_heap->tmp_res != 0));


        tmp_assign_source_28 = MAKE_FUNCTION_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__1_check_primary(tmp_annotations_1);

        assert(generator_heap->var_check_primary == NULL);
        generator_heap->var_check_primary = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_14;
        CHECK_OBJECT(generator_heap->var_load_library);
        tmp_called_value_14 = generator_heap->var_load_library;
        generator->m_frame->m_frame.f_lineno = 65;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_14, mod_consts[61]);

        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 65;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_xlib == NULL);
        generator_heap->var_xlib = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_list_element_4;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_65;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_64 = generator_heap->var_ctypes;
        tmp_list_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[48]);
        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 66;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_1, 0, tmp_list_element_4);
        CHECK_OBJECT(generator_heap->var_xlib);
        tmp_expression_value_65 = generator_heap->var_xlib;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[62]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_assattr_value_1);

            generator_heap->exception_lineno = 66;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[63], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 66;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_expression_value_68;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_66 = generator_heap->var_ctypes;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[29]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 67;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_expression_value_67 = generator_heap->var_ctypes;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[43]);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_15);

            generator_heap->exception_lineno = 67;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 67;
        tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 67;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_xlib);
        tmp_expression_value_68 = generator_heap->var_xlib;
        tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[62]);
        if (tmp_assattr_target_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_assattr_value_2);

            generator_heap->exception_lineno = 67;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[64], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_target_2);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 67;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_16;
        CHECK_OBJECT(generator_heap->var_load_library);
        tmp_called_value_16 = generator_heap->var_load_library;
        generator->m_frame->m_frame.f_lineno = 69;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_16, mod_consts[65]);

        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 69;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_xrandr == NULL);
        generator_heap->var_xrandr = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_value_69;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_called_instance_1 = generator_heap->var_ctypes;
        CHECK_OBJECT(generator_heap->var_XRRScreenResources);
        tmp_args_element_value_9 = generator_heap->var_XRRScreenResources;
        generator->m_frame->m_frame.f_lineno = 70;
        tmp_assattr_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[29], tmp_args_element_value_9);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 70;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_xrandr);
        tmp_expression_value_69 = generator_heap->var_xrandr;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[66]);
        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            generator_heap->exception_lineno = 70;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[64], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 70;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_value_70;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_called_instance_2 = generator_heap->var_ctypes;
        CHECK_OBJECT(generator_heap->var_XRROutputInfo);
        tmp_args_element_value_10 = generator_heap->var_XRROutputInfo;
        generator->m_frame->m_frame.f_lineno = 73;
        tmp_assattr_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[29], tmp_args_element_value_10);
        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 73;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_xrandr);
        tmp_expression_value_70 = generator_heap->var_xrandr;
        tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[67]);
        if (tmp_assattr_target_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            generator_heap->exception_lineno = 73;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[64], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 73;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_expression_value_71;
        CHECK_OBJECT(generator_heap->var_ctypes);
        tmp_called_instance_3 = generator_heap->var_ctypes;
        CHECK_OBJECT(generator_heap->var_XRRCrtcInfo);
        tmp_args_element_value_11 = generator_heap->var_XRRCrtcInfo;
        generator->m_frame->m_frame.f_lineno = 74;
        tmp_assattr_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[29], tmp_args_element_value_11);
        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 74;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_xrandr);
        tmp_expression_value_71 = generator_heap->var_xrandr;
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[68]);
        if (tmp_assattr_target_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            generator_heap->exception_lineno = 74;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[64], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_target_5);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 74;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(generator_heap->var_xlib);
        tmp_called_instance_4 = generator_heap->var_xlib;
        generator->m_frame->m_frame.f_lineno = 76;
        tmp_assign_source_31 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_4,
            mod_consts[62],
            PyTuple_GET_ITEM(mod_consts[69], 0)
        );

        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 76;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_display == NULL);
        generator_heap->var_display = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_operand_value_4;
        CHECK_OBJECT(generator_heap->var_display);
        tmp_operand_value_4 = generator_heap->var_display;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 77;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_called_value_17;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 78;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 78;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_17, mod_consts[71]);

        if (tmp_raise_type_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 78;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator_heap->exception_type = tmp_raise_type_4;
        generator_heap->exception_lineno = 78;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "ooNooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_10:;
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(generator_heap->var_xlib);
        tmp_called_instance_5 = generator_heap->var_xlib;
        CHECK_OBJECT(generator_heap->var_display);
        tmp_args_element_value_12 = generator_heap->var_display;
        generator->m_frame->m_frame.f_lineno = 81;
        tmp_assign_source_32 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[72], tmp_args_element_value_12);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 81;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_11;
        }
        assert(generator_heap->var_root_window == NULL);
        generator_heap->var_root_window = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        CHECK_OBJECT(generator_heap->var_xrandr);
        tmp_called_instance_6 = generator_heap->var_xrandr;
        CHECK_OBJECT(generator_heap->var_display);
        tmp_args_element_value_13 = generator_heap->var_display;
        CHECK_OBJECT(generator_heap->var_root_window);
        tmp_args_element_value_14 = generator_heap->var_root_window;
        generator->m_frame->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_33 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_6,
                mod_consts[66],
                call_args
            );
        }

        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 82;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_11;
        }
        assert(generator_heap->var_screen_resources == NULL);
        generator_heap->var_screen_resources = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_expression_value_73;
        CHECK_OBJECT(generator_heap->var_screen_resources);
        tmp_expression_value_73 = generator_heap->var_screen_resources;
        tmp_expression_value_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[73]);
        if (tmp_expression_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 86;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_xrange_low_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[27]);
        Py_DECREF(tmp_expression_value_72);
        if (tmp_xrange_low_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 86;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 86;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_assign_source_34 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 86;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_11;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_34;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_35 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_35 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ooNooooooooooooo";
                generator_heap->exception_lineno = 86;
                goto try_except_handler_12;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_36 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_i;
            generator_heap->var_i = tmp_assign_source_36;
            Py_INCREF(generator_heap->var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_subscript_value_4;
        if (generator_heap->var_xrandr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[74]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 87;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_74 = generator_heap->var_xrandr;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[67]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 87;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_12;
        }
        if (generator_heap->var_display == NULL) {
            Py_DECREF(tmp_called_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[75]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 88;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_args_element_value_15 = generator_heap->var_display;
        if (generator_heap->var_screen_resources == NULL) {
            Py_DECREF(tmp_called_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[76]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 88;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_args_element_value_16 = generator_heap->var_screen_resources;
        if (generator_heap->var_screen_resources == NULL) {
            Py_DECREF(tmp_called_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[76]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 88;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_77 = generator_heap->var_screen_resources;
        tmp_expression_value_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[73]);
        if (tmp_expression_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_18);

            generator_heap->exception_lineno = 88;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_expression_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[28]);
        Py_DECREF(tmp_expression_value_76);
        if (tmp_expression_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_18);

            generator_heap->exception_lineno = 88;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(generator_heap->var_i);
        tmp_subscript_value_4 = generator_heap->var_i;
        tmp_args_element_value_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_75, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_75);
        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_18);

            generator_heap->exception_lineno = 88;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_12;
        }
        generator->m_frame->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_18, call_args);
        }

        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 87;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = generator_heap->var_output_info;
            generator_heap->var_output_info = tmp_assign_source_37;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_expression_value_79;
        CHECK_OBJECT(generator_heap->var_output_info);
        tmp_expression_value_79 = generator_heap->var_output_info;
        tmp_expression_value_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[73]);
        if (tmp_expression_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 91;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[52]);
        Py_DECREF(tmp_expression_value_78);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 91;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_cmp_expr_right_4 = mod_consts[1];
        tmp_condition_result_14 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 13;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_12;
        }
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    goto loop_start_1;
    branch_no_11:;
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_expression_value_81;
        CHECK_OBJECT(generator_heap->var_output_info);
        tmp_expression_value_81 = generator_heap->var_output_info;
        tmp_expression_value_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[73]);
        if (tmp_expression_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 94;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_operand_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[46]);
        Py_DECREF(tmp_expression_value_80);
        if (tmp_operand_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 94;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_12;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 94;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_condition_result_15 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    goto loop_start_1;
    branch_no_12:;
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_expression_value_84;
        if (generator_heap->var_xrandr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[74]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 98;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_expression_value_82 = generator_heap->var_xrandr;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[68]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 98;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_13;
        }
        if (generator_heap->var_display == NULL) {
            Py_DECREF(tmp_called_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[75]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 99;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_args_element_value_18 = generator_heap->var_display;
        if (generator_heap->var_ctypes == NULL) {
            Py_DECREF(tmp_called_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[17]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 100;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_called_instance_7 = generator_heap->var_ctypes;
        CHECK_OBJECT(generator_heap->var_output_info);
        tmp_args_element_value_20 = generator_heap->var_output_info;
        generator->m_frame->m_frame.f_lineno = 100;
        tmp_args_element_value_19 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts[77], tmp_args_element_value_20);
        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_19);

            generator_heap->exception_lineno = 100;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_13;
        }
        CHECK_OBJECT(generator_heap->var_output_info);
        tmp_expression_value_84 = generator_heap->var_output_info;
        tmp_expression_value_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[73]);
        if (tmp_expression_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_19);

            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[46]);
        Py_DECREF(tmp_expression_value_83);
        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_19);

            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_13;
        }
        generator->m_frame->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_21};
            tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_19, call_args);
        }

        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 98;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = generator_heap->var_crtc_info;
            generator_heap->var_crtc_info = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        if (generator_heap->var_xrandr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[74]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 104;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_expression_value_85 = generator_heap->var_xrandr;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[78]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 104;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_13;
        }
        if (generator_heap->var_display == NULL) {
            Py_DECREF(tmp_called_value_20);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[75]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 104;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_args_element_value_22 = generator_heap->var_display;
        if (generator_heap->var_root_window == NULL) {
            Py_DECREF(tmp_called_value_20);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[79]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 104;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_args_element_value_23 = generator_heap->var_root_window;
        generator->m_frame->m_frame.f_lineno = 104;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
        }

        Py_DECREF(tmp_called_value_20);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 104;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = generator_heap->var_primary_id;
            generator_heap->var_primary_id = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_expression_value_86;
        PyObject *tmp_called_value_21;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 107;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }
        CHECK_OBJECT(generator_heap->var_crtc_info);
        tmp_expression_value_88 = generator_heap->var_crtc_info;
        tmp_expression_value_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[73]);
        if (tmp_expression_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 108;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[19]);
        Py_DECREF(tmp_expression_value_87);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 108;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }
        CHECK_OBJECT(generator_heap->var_crtc_info);
        tmp_expression_value_90 = generator_heap->var_crtc_info;
        tmp_expression_value_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[73]);
        if (tmp_expression_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            generator_heap->exception_lineno = 109;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[21]);
        Py_DECREF(tmp_expression_value_89);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            generator_heap->exception_lineno = 109;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }
        CHECK_OBJECT(generator_heap->var_crtc_info);
        tmp_expression_value_92 = generator_heap->var_crtc_info;
        tmp_expression_value_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[73]);
        if (tmp_expression_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            generator_heap->exception_lineno = 110;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[22]);
        Py_DECREF(tmp_expression_value_91);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            generator_heap->exception_lineno = 110;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }
        CHECK_OBJECT(generator_heap->var_crtc_info);
        tmp_expression_value_94 = generator_heap->var_crtc_info;
        tmp_expression_value_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[73]);
        if (tmp_expression_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            generator_heap->exception_lineno = 111;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[23]);
        Py_DECREF(tmp_expression_value_93);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            generator_heap->exception_lineno = 111;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }
        CHECK_OBJECT(generator_heap->var_output_info);
        tmp_expression_value_96 = generator_heap->var_output_info;
        tmp_expression_value_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[73]);
        if (tmp_expression_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);

            generator_heap->exception_lineno = 112;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_kw_call_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[50]);
        Py_DECREF(tmp_expression_value_95);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);

            generator_heap->exception_lineno = 112;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }
        CHECK_OBJECT(generator_heap->var_output_info);
        tmp_expression_value_98 = generator_heap->var_output_info;
        tmp_expression_value_97 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[73]);
        if (tmp_expression_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);

            generator_heap->exception_lineno = 113;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_kw_call_value_5_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[51]);
        Py_DECREF(tmp_expression_value_97);
        if (tmp_kw_call_value_5_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);

            generator_heap->exception_lineno = 113;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }
        CHECK_OBJECT(generator_heap->var_output_info);
        tmp_expression_value_101 = generator_heap->var_output_info;
        tmp_expression_value_100 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[73]);
        if (tmp_expression_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);

            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_expression_value_99 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[47]);
        Py_DECREF(tmp_expression_value_100);
        if (tmp_expression_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);

            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[81]);
        Py_DECREF(tmp_expression_value_99);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);

            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_called_value_22);

            generator_heap->exception_lineno = 115;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }
        generator->m_frame->m_frame.f_lineno = 115;
        tmp_args_element_value_24 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts[83]);
        if (tmp_args_element_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_called_value_22);

            generator_heap->exception_lineno = 115;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }
        generator->m_frame->m_frame.f_lineno = 114;
        tmp_kw_call_value_6_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_kw_call_value_6_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);

            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }
        if (generator_heap->var_check_primary == NULL) {
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[59]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 117;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_called_value_23 = generator_heap->var_check_primary;
        CHECK_OBJECT(generator_heap->var_primary_id);
        tmp_args_element_value_25 = generator_heap->var_primary_id;
        CHECK_OBJECT(generator_heap->var_crtc_info);
        tmp_args_element_value_26 = generator_heap->var_crtc_info;
        generator->m_frame->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_kw_call_value_7_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_23, call_args);
        }

        if (tmp_kw_call_value_7_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);

            generator_heap->exception_lineno = 117;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }
        generator->m_frame->m_frame.f_lineno = 107;
        {
            PyObject *kw_values[8] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1};

            tmp_expression_value_86 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_21, kw_values, mod_consts[84]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        Py_DECREF(tmp_kw_call_value_5_1);
        Py_DECREF(tmp_kw_call_value_6_1);
        Py_DECREF(tmp_kw_call_value_7_1);
        if (tmp_expression_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 107;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_21, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_expression_value_87, sizeof(PyObject *), &tmp_expression_value_88, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_expression_value_89, sizeof(PyObject *), &tmp_expression_value_90, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_expression_value_91, sizeof(PyObject *), &tmp_expression_value_92, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_expression_value_93, sizeof(PyObject *), &tmp_expression_value_94, sizeof(PyObject *), &tmp_kw_call_value_4_1, sizeof(PyObject *), &tmp_expression_value_95, sizeof(PyObject *), &tmp_expression_value_96, sizeof(PyObject *), &tmp_kw_call_value_5_1, sizeof(PyObject *), &tmp_expression_value_97, sizeof(PyObject *), &tmp_expression_value_98, sizeof(PyObject *), &tmp_kw_call_value_6_1, sizeof(PyObject *), &tmp_called_value_22, sizeof(PyObject *), &tmp_expression_value_99, sizeof(PyObject *), &tmp_expression_value_100, sizeof(PyObject *), &tmp_expression_value_101, sizeof(PyObject *), &tmp_args_element_value_24, sizeof(PyObject *), &tmp_called_instance_8, sizeof(PyObject *), &tmp_kw_call_value_7_1, sizeof(PyObject *), &tmp_called_value_23, sizeof(PyObject *), &tmp_args_element_value_25, sizeof(PyObject *), &tmp_args_element_value_26, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_86;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_21, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_expression_value_87, sizeof(PyObject *), &tmp_expression_value_88, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), &tmp_expression_value_89, sizeof(PyObject *), &tmp_expression_value_90, sizeof(PyObject *), &tmp_kw_call_value_2_1, sizeof(PyObject *), &tmp_expression_value_91, sizeof(PyObject *), &tmp_expression_value_92, sizeof(PyObject *), &tmp_kw_call_value_3_1, sizeof(PyObject *), &tmp_expression_value_93, sizeof(PyObject *), &tmp_expression_value_94, sizeof(PyObject *), &tmp_kw_call_value_4_1, sizeof(PyObject *), &tmp_expression_value_95, sizeof(PyObject *), &tmp_expression_value_96, sizeof(PyObject *), &tmp_kw_call_value_5_1, sizeof(PyObject *), &tmp_expression_value_97, sizeof(PyObject *), &tmp_expression_value_98, sizeof(PyObject *), &tmp_kw_call_value_6_1, sizeof(PyObject *), &tmp_called_value_22, sizeof(PyObject *), &tmp_expression_value_99, sizeof(PyObject *), &tmp_expression_value_100, sizeof(PyObject *), &tmp_expression_value_101, sizeof(PyObject *), &tmp_args_element_value_24, sizeof(PyObject *), &tmp_called_instance_8, sizeof(PyObject *), &tmp_kw_call_value_7_1, sizeof(PyObject *), &tmp_called_value_23, sizeof(PyObject *), &tmp_args_element_value_25, sizeof(PyObject *), &tmp_args_element_value_26, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 107;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_14:;
    generator_heap->exception_keeper_type_10 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_10 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_10 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_10 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (generator_heap->exception_keeper_tb_10 == NULL) {
        generator_heap->exception_keeper_tb_10 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_10);
    } else if (generator_heap->exception_keeper_lineno_10 != 0) {
        generator_heap->exception_keeper_tb_10 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_10, generator->m_frame, generator_heap->exception_keeper_lineno_10);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_type_10, &generator_heap->exception_keeper_value_10, &generator_heap->exception_keeper_tb_10);
    // Tried code:
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_27;
        if (generator_heap->var_xrandr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[74]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 121;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_called_instance_9 = generator_heap->var_xrandr;
        CHECK_OBJECT(generator_heap->var_crtc_info);
        tmp_args_element_value_27 = generator_heap->var_crtc_info;
        generator->m_frame->m_frame.f_lineno = 121;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts[85], tmp_args_element_value_27);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 121;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_15;
        }
        Py_DECREF(tmp_call_result_1);
    }
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 106;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ooNooooooooooooo";
    goto try_except_handler_15;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_15:;
    generator_heap->exception_keeper_type_11 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_11 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_11 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_11 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_11;
    generator_heap->exception_value = generator_heap->exception_keeper_value_11;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_11;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_11;

    goto try_except_handler_13;
    // End of try:
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_28;
        if (generator_heap->var_xrandr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[74]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 121;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_called_instance_10 = generator_heap->var_xrandr;
        CHECK_OBJECT(generator_heap->var_crtc_info);
        tmp_args_element_value_28 = generator_heap->var_crtc_info;
        generator->m_frame->m_frame.f_lineno = 121;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_10, mod_consts[85], tmp_args_element_value_28);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 121;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    generator_heap->exception_keeper_type_12 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_12 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_12 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_12 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 2.
    generator_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

    if (generator_heap->exception_keeper_tb_12 == NULL) {
        generator_heap->exception_keeper_tb_12 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_12);
    } else if (generator_heap->exception_keeper_lineno_12 != 0) {
        generator_heap->exception_keeper_tb_12 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_12, generator->m_frame, generator_heap->exception_keeper_lineno_12);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_type_12, &generator_heap->exception_keeper_value_12, &generator_heap->exception_keeper_tb_12);
    // Tried code:
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_29;
        if (generator_heap->var_xrandr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[74]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 124;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_called_instance_11 = generator_heap->var_xrandr;
        CHECK_OBJECT(generator_heap->var_output_info);
        tmp_args_element_value_29 = generator_heap->var_output_info;
        generator->m_frame->m_frame.f_lineno = 124;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_11, mod_consts[86], tmp_args_element_value_29);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 124;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_16;
        }
        Py_DECREF(tmp_call_result_3);
    }
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 97;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ooNooooooooooooo";
    goto try_except_handler_16;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_16:;
    generator_heap->exception_keeper_type_13 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_13 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_13 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_13 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_13;
    generator_heap->exception_value = generator_heap->exception_keeper_value_13;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_13;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_13;

    goto try_except_handler_12;
    // End of try:
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_30;
        if (generator_heap->var_xrandr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[74]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 124;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_called_instance_12 = generator_heap->var_xrandr;
        CHECK_OBJECT(generator_heap->var_output_info);
        tmp_args_element_value_30 = generator_heap->var_output_info;
        generator->m_frame->m_frame.f_lineno = 124;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_12, mod_consts[86], tmp_args_element_value_30);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 124;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_4);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 86;
        generator_heap->type_description_1 = "ooNooooooooooooo";
        goto try_except_handler_12;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_12:;
    generator_heap->exception_keeper_type_14 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_14 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_14 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_14 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_14;
    generator_heap->exception_value = generator_heap->exception_keeper_value_14;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_14;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_14;

    goto try_except_handler_11;
    // End of try:
    try_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_11:;
    generator_heap->exception_keeper_type_15 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_15 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_15 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_15 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 3.
    generator_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

    if (generator_heap->exception_keeper_tb_15 == NULL) {
        generator_heap->exception_keeper_tb_15 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_15);
    } else if (generator_heap->exception_keeper_lineno_15 != 0) {
        generator_heap->exception_keeper_tb_15 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_15, generator->m_frame, generator_heap->exception_keeper_lineno_15);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_type_15, &generator_heap->exception_keeper_value_15, &generator_heap->exception_keeper_tb_15);
    // Tried code:
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_31;
        CHECK_OBJECT(generator_heap->var_xlib);
        tmp_expression_value_102 = generator_heap->var_xlib;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[87]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 127;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_17;
        }
        if (generator_heap->var_display == NULL) {
            Py_DECREF(tmp_called_value_24);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[75]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 127;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_args_element_value_31 = generator_heap->var_display;
        generator->m_frame->m_frame.f_lineno = 127;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_31);
        Py_DECREF(tmp_called_value_24);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 127;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto try_except_handler_17;
        }
        Py_DECREF(tmp_call_result_5);
    }
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 80;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ooNooooooooooooo";
    goto try_except_handler_17;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_17:;
    generator_heap->exception_keeper_type_16 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_16 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_16 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_16 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_3);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_16;
    generator_heap->exception_value = generator_heap->exception_keeper_value_16;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_16;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_7:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_32;
        CHECK_OBJECT(generator_heap->var_xlib);
        tmp_expression_value_103 = generator_heap->var_xlib;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[87]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 127;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (generator_heap->var_display == NULL) {
            Py_DECREF(tmp_called_value_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[75]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 127;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_32 = generator_heap->var_display;
        generator->m_frame->m_frame.f_lineno = 127;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_32);
        Py_DECREF(tmp_called_value_25);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 127;
            generator_heap->type_description_1 = "ooNooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_4;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator_heap->var_ctypes,
            generator_heap->var_load_library,
            NULL,
            generator_heap->var_XRRCrtcInfo,
            generator_heap->var_XRRScreenResources,
            generator_heap->var_XRROutputInfo,
            generator_heap->var_check_primary,
            generator_heap->var_xlib,
            generator_heap->var_xrandr,
            generator_heap->var_display,
            generator_heap->var_root_window,
            generator_heap->var_screen_resources,
            generator_heap->var_i,
            generator_heap->var_output_info,
            generator_heap->var_crtc_info,
            generator_heap->var_primary_id
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_4:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_17 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_17 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_17 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_17 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_ctypes);
    generator_heap->var_ctypes = NULL;
    Py_XDECREF(generator_heap->var_load_library);
    generator_heap->var_load_library = NULL;
    Py_XDECREF(generator_heap->var_XRRCrtcInfo);
    generator_heap->var_XRRCrtcInfo = NULL;
    Py_XDECREF(generator_heap->var_XRRScreenResources);
    generator_heap->var_XRRScreenResources = NULL;
    Py_XDECREF(generator_heap->var_XRROutputInfo);
    generator_heap->var_XRROutputInfo = NULL;
    Py_XDECREF(generator_heap->var_check_primary);
    generator_heap->var_check_primary = NULL;
    Py_XDECREF(generator_heap->var_xlib);
    generator_heap->var_xlib = NULL;
    Py_XDECREF(generator_heap->var_xrandr);
    generator_heap->var_xrandr = NULL;
    Py_XDECREF(generator_heap->var_display);
    generator_heap->var_display = NULL;
    Py_XDECREF(generator_heap->var_root_window);
    generator_heap->var_root_window = NULL;
    Py_XDECREF(generator_heap->var_screen_resources);
    generator_heap->var_screen_resources = NULL;
    Py_XDECREF(generator_heap->var_i);
    generator_heap->var_i = NULL;
    Py_XDECREF(generator_heap->var_output_info);
    generator_heap->var_output_info = NULL;
    Py_XDECREF(generator_heap->var_crtc_info);
    generator_heap->var_crtc_info = NULL;
    Py_XDECREF(generator_heap->var_primary_id);
    generator_heap->var_primary_id = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_17;
    generator_heap->exception_value = generator_heap->exception_keeper_value_17;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_17;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_17;

    goto function_exception_exit;
    // End of try:
    try_end_8:;
    Py_XDECREF(generator_heap->var_ctypes);
    generator_heap->var_ctypes = NULL;
    CHECK_OBJECT(generator_heap->var_load_library);
    Py_DECREF(generator_heap->var_load_library);
    generator_heap->var_load_library = NULL;
    CHECK_OBJECT(generator_heap->var_XRRCrtcInfo);
    Py_DECREF(generator_heap->var_XRRCrtcInfo);
    generator_heap->var_XRRCrtcInfo = NULL;
    CHECK_OBJECT(generator_heap->var_XRRScreenResources);
    Py_DECREF(generator_heap->var_XRRScreenResources);
    generator_heap->var_XRRScreenResources = NULL;
    CHECK_OBJECT(generator_heap->var_XRROutputInfo);
    Py_DECREF(generator_heap->var_XRROutputInfo);
    generator_heap->var_XRROutputInfo = NULL;
    Py_XDECREF(generator_heap->var_check_primary);
    generator_heap->var_check_primary = NULL;
    CHECK_OBJECT(generator_heap->var_xlib);
    Py_DECREF(generator_heap->var_xlib);
    generator_heap->var_xlib = NULL;
    Py_XDECREF(generator_heap->var_xrandr);
    generator_heap->var_xrandr = NULL;
    Py_XDECREF(generator_heap->var_display);
    generator_heap->var_display = NULL;
    Py_XDECREF(generator_heap->var_root_window);
    generator_heap->var_root_window = NULL;
    Py_XDECREF(generator_heap->var_screen_resources);
    generator_heap->var_screen_resources = NULL;
    Py_XDECREF(generator_heap->var_i);
    generator_heap->var_i = NULL;
    Py_XDECREF(generator_heap->var_output_info);
    generator_heap->var_output_info = NULL;
    Py_XDECREF(generator_heap->var_crtc_info);
    generator_heap->var_crtc_info = NULL;
    Py_XDECREF(generator_heap->var_primary_id);
    generator_heap->var_primary_id = NULL;

    Py_XDECREF(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15);

    Py_XDECREF(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31);

    Py_XDECREF(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43);

    return NULL;

    function_exception_exit:
    Py_XDECREF(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__1_XRRCrtcInfo_15);

    Py_XDECREF(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__2_XRRScreenResources_31);

    Py_XDECREF(generator_heap->locals_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$class__3_XRROutputInfo_43);

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors() {
    return Nuitka_Generator_New(
        screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors_context,
        module_screeninfo$enumerators$xrandr,
        mod_consts[88],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_eb10bdfe204bba21b526fa4f17170a04,
        NULL,
        0,
#if 1
        sizeof(struct screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors_locals)
#else
        0
#endif
    );
}


static PyObject *impl_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__1_check_primary(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_display_id = python_pars[0];
    PyObject *par_crtc = python_pars[1];
    struct Nuitka_FrameObject *frame_274531fd51a6c5b67098679a5d02e9ff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_274531fd51a6c5b67098679a5d02e9ff = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_274531fd51a6c5b67098679a5d02e9ff)) {
        Py_XDECREF(cache_frame_274531fd51a6c5b67098679a5d02e9ff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_274531fd51a6c5b67098679a5d02e9ff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_274531fd51a6c5b67098679a5d02e9ff = MAKE_FUNCTION_FRAME(tstate, codeobj_274531fd51a6c5b67098679a5d02e9ff, module_screeninfo$enumerators$xrandr, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_274531fd51a6c5b67098679a5d02e9ff->m_type_description == NULL);
    frame_274531fd51a6c5b67098679a5d02e9ff = cache_frame_274531fd51a6c5b67098679a5d02e9ff;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_274531fd51a6c5b67098679a5d02e9ff);
    assert(Py_REFCNT(frame_274531fd51a6c5b67098679a5d02e9ff) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_display_id);
        tmp_cmp_expr_left_1 = par_display_id;
        CHECK_OBJECT(par_crtc);
        tmp_expression_value_4 = par_crtc;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[73]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[28]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[73]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[89]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_274531fd51a6c5b67098679a5d02e9ff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_274531fd51a6c5b67098679a5d02e9ff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_274531fd51a6c5b67098679a5d02e9ff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_274531fd51a6c5b67098679a5d02e9ff,
        type_description_1,
        par_display_id,
        par_crtc
    );


    // Release cached frame if used for exception.
    if (frame_274531fd51a6c5b67098679a5d02e9ff == cache_frame_274531fd51a6c5b67098679a5d02e9ff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_274531fd51a6c5b67098679a5d02e9ff);
        cache_frame_274531fd51a6c5b67098679a5d02e9ff = NULL;
    }

    assertFrameObject(frame_274531fd51a6c5b67098679a5d02e9ff);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_display_id);
    Py_DECREF(par_display_id);
    CHECK_OBJECT(par_crtc);
    Py_DECREF(par_crtc);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_display_id);
    Py_DECREF(par_display_id);
    CHECK_OBJECT(par_crtc);
    Py_DECREF(par_crtc);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_eb10bdfe204bba21b526fa4f17170a04,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_screeninfo$enumerators$xrandr,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__1_check_primary(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__1_check_primary,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[60],
#endif
        codeobj_274531fd51a6c5b67098679a5d02e9ff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_screeninfo$enumerators$xrandr,
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

function_impl_code functable_screeninfo$enumerators$xrandr[] = {
    impl_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors$$$genobj__1_enumerate_monitors$$$function__1_check_primary,
    impl_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors,
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

    function_impl_code *current = functable_screeninfo$enumerators$xrandr;
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

    if (offset > sizeof(functable_screeninfo$enumerators$xrandr) || offset < 0) {
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
        functable_screeninfo$enumerators$xrandr[offset],
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
        module_screeninfo$enumerators$xrandr,
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
PyObject *modulecode_screeninfo$enumerators$xrandr(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("screeninfo.enumerators.xrandr");

    // Store the module for future use.
    module_screeninfo$enumerators$xrandr = module;

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
        PRINT_STRING("screeninfo.enumerators.xrandr: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("screeninfo.enumerators.xrandr: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initscreeninfo$enumerators$xrandr\n");

    moduledict_screeninfo$enumerators$xrandr = MODULE_DICT(module_screeninfo$enumerators$xrandr);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_screeninfo$enumerators$xrandr,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_screeninfo$enumerators$xrandr,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[105]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_screeninfo$enumerators$xrandr,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_screeninfo$enumerators$xrandr,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_screeninfo$enumerators$xrandr,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_screeninfo$enumerators$xrandr);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_screeninfo$enumerators$xrandr);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_ad4b74d8062c818796e9a8f740826433;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_2);
    }
    frame_ad4b74d8062c818796e9a8f740826433 = MAKE_MODULE_FRAME(codeobj_ad4b74d8062c818796e9a8f740826433, module_screeninfo$enumerators$xrandr);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ad4b74d8062c818796e9a8f740826433);
    assert(Py_REFCNT(frame_ad4b74d8062c818796e9a8f740826433) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[93], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[94], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[97];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_screeninfo$enumerators$xrandr;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[98];
        tmp_level_value_1 = mod_consts[1];
        frame_ad4b74d8062c818796e9a8f740826433->m_frame.f_lineno = 4;
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
                (PyObject *)moduledict_screeninfo$enumerators$xrandr,
                mod_consts[80],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[80]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_7);
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
                (PyObject *)moduledict_screeninfo$enumerators$xrandr,
                mod_consts[70],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[70]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_8);
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_dict_key_1 = mod_consts[58];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[99]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_subscript_value_1 == NULL)) {
            tmp_subscript_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_subscript_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_assign_source_9 = MAKE_FUNCTION_screeninfo$enumerators$xrandr$$$function__1_enumerate_monitors(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_9);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ad4b74d8062c818796e9a8f740826433, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ad4b74d8062c818796e9a8f740826433->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad4b74d8062c818796e9a8f740826433, exception_lineno);
    }



    assertFrameObject(frame_ad4b74d8062c818796e9a8f740826433);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("screeninfo.enumerators.xrandr", false);

    Py_INCREF(module_screeninfo$enumerators$xrandr);
    return module_screeninfo$enumerators$xrandr;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_screeninfo$enumerators$xrandr, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("screeninfo$enumerators$xrandr", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
