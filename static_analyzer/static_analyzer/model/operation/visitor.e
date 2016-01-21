note
	description: "Summary description for {VISITOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	VISITOR

feature -- deffered features

	visit_current(e: CURRENT_EXPRESSION)
	deferred
	end

	visit_nil(e: NIL_EXPRESSION)
	deferred
	end

	visit_set_enumeration(e: SET_ENUMERATION)
	deferred
	end

	visit_add(e: ADD)
	deferred
	end

	visit_subtract(e: SUBTRACT)
	deferred
	end

	visit_and(e: A_N_D)
	deferred
	end

	visit_division(e: DIVISION)
	deferred
	end

	visit_difference(e: DIFFERENCE)
	deferred
	end

	visit_equal(e: EQUAL)
	deferred
	end

	visit_GT(e: GT)
	deferred
	end

	visit_implies(e: I_M_P)
	deferred
	end

	visit_intersect(e: INTERSECT)
	deferred
	end

	visit_LT(e: LT)
	deferred
	end

	visit_or(e: O_R)
	deferred
	end

	visit_multiply(e: MULTIPLY)
	deferred
	end

	visit_union(e: UNION)
	deferred
	end

	visit_integer(e: INTEGER_CONSTANT)
	deferred
	end

	visit_exists(e: EXISTS)
	deferred
	end

	visit_forall(e: FORALL)
	deferred
	end

	visit_negation(e: NEGATION)
	deferred
	end

	visit_negative(e: NEGATIVE)
	deferred
	end

	visit_sum(e: SUM)
	deferred
	end

	visit_boolean(e: BOOLEAN_CONSTANT)
	deferred
	end
end
