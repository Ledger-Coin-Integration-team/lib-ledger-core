// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from database.djinni

package co.ledger.core;

/**
 * A wrapper object around prepared SQL statements. lib-ledger-core will use placeholders when it needs to pass
 * parameters to a query. It will then  bind each parameter at a given position to a given value.
 */
public abstract class DatabaseStatement {
    /**
     * Bind the designated parameter to the given 16bit integer value.
     * @param pos The position of the parameter in the query
     * @param value The value to bind
     */
    public abstract void bindShort(int pos, short value);

    /**
     * Bind the designated parameter to the given 32bit integer value.
     * @param pos The position of the parameter in the query
     * @param value The value to bind
     */
    public abstract void bindInt(int pos, int value);

    /**
     * Bind the designated parameter to the given 64bit integer value.
     * @param pos The position of the parameter in the query
     * @param value The value to bind
     */
    public abstract void bindLong(int pos, long value);

    /**
     * Bind the designated parameter to the given 32bit floating point number value.
     * @param pos The position of the parameter in the query
     * @param value The value to bind
     */
    public abstract void bindFloat(int pos, float value);

    /**
     * Bind the designated parameter to the given 64bit floating point number value.
     * @param pos The position of the parameter in the query
     * @param value The value to bind
     */
    public abstract void bindDouble(int pos, double value);

    /**
     * Bind the designated parameter to the given string.
     * @param pos The position of the parameter in the query
     * @param value The value to bind
     */
    public abstract void bindString(int pos, String value);

    /**
     * Bind the designated parameter to the given BLOB.
     * @param pos The position of the parameter in the query
     * @param value The value to bind
     */
    public abstract void bindBlob(int pos, DatabaseBlob value);

    /**
     * Bind the designated parameter to the NULL value in SQL.
     * @param pos The position of the parameter in the query
     * @param value The value to bind
     */
    public abstract void bindNull(int pos);

    /**
     * Describe the metadata attached to the designated column (e.g. data type, column name...)
     * @return Column metadata descriptor
     */
    public abstract DatabaseColumn describeColumn(int colNum);

    /**
     * Get the number of column that will be available into the result row (e.g. "SELECT name, age FROM USERS"
     * would return 2).
     * @return The number of the columns available in the result
     */
    public abstract int getColumnCount();

    /**
     * Execute the statement with the past bound values.
     * @return The result of the execution of the statement on the database.
     */
    public abstract DatabaseResultSet execute();

    /** Reset all bindings. This call is used before reusing a statement instance in order to repeat it multiple time. */
    public abstract void reset();

    /** Close the statement and release all allocated resources. The statement shouldn't be used after this call. */
    public abstract void close();
}
