class
 	 ETF_TYPE_CONSTRAINTS
feature -- list of enumeratd constants
	enum_items : HASH_TABLE[INTEGER, STRING]
		do
			create Result.make (10)
		end

	enum_items_inverse : HASH_TABLE[STRING, INTEGER]
		do
			create Result.make (10)
		end
feature -- query on declarations of event parameters
	evt_param_types : HASH_TABLE[HASH_TABLE[ETF_PARAM_TYPE, STRING], STRING]
		local
			type_check_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			evaluate_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			reset_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_boolean_constant_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_integer_constant_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_addition_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_subtraction_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_multiplication_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_division_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_conjunction_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_disjunction_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_implication_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_equality_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_greater_than_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_less_than_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_union_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_intersection_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_difference_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_negative_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_negation_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_sum_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_generalized_and_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			add_generalized_or_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			start_set_enumeration_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			end_set_enumeration_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
		do
			create Result.make (10)
			Result.compare_objects
			create type_check_param_types.make (10)
			type_check_param_types.compare_objects
			Result.extend (type_check_param_types, "type_check")
			create evaluate_param_types.make (10)
			evaluate_param_types.compare_objects
			Result.extend (evaluate_param_types, "evaluate")
			create reset_param_types.make (10)
			reset_param_types.compare_objects
			Result.extend (reset_param_types, "reset")
			create add_boolean_constant_param_types.make (10)
			add_boolean_constant_param_types.compare_objects
			add_boolean_constant_param_types.extend (create {ETF_BOOL_PARAM}, "c")
			Result.extend (add_boolean_constant_param_types, "add_boolean_constant")
			create add_integer_constant_param_types.make (10)
			add_integer_constant_param_types.compare_objects
			add_integer_constant_param_types.extend (create {ETF_INT_PARAM}, "c")
			Result.extend (add_integer_constant_param_types, "add_integer_constant")
			create add_addition_param_types.make (10)
			add_addition_param_types.compare_objects
			Result.extend (add_addition_param_types, "add_addition")
			create add_subtraction_param_types.make (10)
			add_subtraction_param_types.compare_objects
			Result.extend (add_subtraction_param_types, "add_subtraction")
			create add_multiplication_param_types.make (10)
			add_multiplication_param_types.compare_objects
			Result.extend (add_multiplication_param_types, "add_multiplication")
			create add_division_param_types.make (10)
			add_division_param_types.compare_objects
			Result.extend (add_division_param_types, "add_division")
			create add_conjunction_param_types.make (10)
			add_conjunction_param_types.compare_objects
			Result.extend (add_conjunction_param_types, "add_conjunction")
			create add_disjunction_param_types.make (10)
			add_disjunction_param_types.compare_objects
			Result.extend (add_disjunction_param_types, "add_disjunction")
			create add_implication_param_types.make (10)
			add_implication_param_types.compare_objects
			Result.extend (add_implication_param_types, "add_implication")
			create add_equality_param_types.make (10)
			add_equality_param_types.compare_objects
			Result.extend (add_equality_param_types, "add_equality")
			create add_greater_than_param_types.make (10)
			add_greater_than_param_types.compare_objects
			Result.extend (add_greater_than_param_types, "add_greater_than")
			create add_less_than_param_types.make (10)
			add_less_than_param_types.compare_objects
			Result.extend (add_less_than_param_types, "add_less_than")
			create add_union_param_types.make (10)
			add_union_param_types.compare_objects
			Result.extend (add_union_param_types, "add_union")
			create add_intersection_param_types.make (10)
			add_intersection_param_types.compare_objects
			Result.extend (add_intersection_param_types, "add_intersection")
			create add_difference_param_types.make (10)
			add_difference_param_types.compare_objects
			Result.extend (add_difference_param_types, "add_difference")
			create add_negative_param_types.make (10)
			add_negative_param_types.compare_objects
			Result.extend (add_negative_param_types, "add_negative")
			create add_negation_param_types.make (10)
			add_negation_param_types.compare_objects
			Result.extend (add_negation_param_types, "add_negation")
			create add_sum_param_types.make (10)
			add_sum_param_types.compare_objects
			Result.extend (add_sum_param_types, "add_sum")
			create add_generalized_and_param_types.make (10)
			add_generalized_and_param_types.compare_objects
			Result.extend (add_generalized_and_param_types, "add_generalized_and")
			create add_generalized_or_param_types.make (10)
			add_generalized_or_param_types.compare_objects
			Result.extend (add_generalized_or_param_types, "add_generalized_or")
			create start_set_enumeration_param_types.make (10)
			start_set_enumeration_param_types.compare_objects
			Result.extend (start_set_enumeration_param_types, "start_set_enumeration")
			create end_set_enumeration_param_types.make (10)
			end_set_enumeration_param_types.compare_objects
			Result.extend (end_set_enumeration_param_types, "end_set_enumeration")
		end
feature -- comments for contracts
	comment(s: STRING): BOOLEAN
		do
			Result := TRUE
		end
end