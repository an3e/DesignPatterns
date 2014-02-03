#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
    public:

        /** \brief method to get an instance of our singleton class
         *
         * \param  void
         * \return pointer to the singleton object
         *
         */
        static Singleton* getInstance(void);

        /**<  holds the only instance of the singleton class*/
        static Singleton* s_pInstance;

        virtual ~Singleton();

    protected:

    private:

        /** \brief constructor
         *
         * \param  void
         * \return void
         *
         */
        Singleton();
};

#endif // SINGLETON_H
