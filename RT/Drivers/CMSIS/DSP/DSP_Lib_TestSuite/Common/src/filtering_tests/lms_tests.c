�?# i n c l u d e   " j t e s t . h "  
 # i n c l u d e   " f i l t e r i n g _ t e s t _ d a t a . h "  
 # i n c l u d e   " a r r _ d e s c . h "  
 # i n c l u d e   " a r m _ m a t h . h "                       / *   F U T s   * /  
 # i n c l u d e   " r e f . h "                                 / *   R e f e r e n c e   F u n c t i o n s   * /  
 # i n c l u d e   " t e s t _ t e m p l a t e s . h "  
 # i n c l u d e   " f i l t e r i n g _ t e m p l a t e s . h "  
 # i n c l u d e   " t y p e _ a b b r e v . h "  
  
 s t a t i c   c o n s t   f l o a t 3 2 _ t   m u _ f 3 2   =   0 . 0 0 8 5 4 f ; / / 1 . 0 f ;  
 s t a t i c   c o n s t   f l o a t 3 2 _ t   m u 2 _ f 3 2   =   1 . 0 f ;  
 s t a t i c   c o n s t   q 3 1 _ t   m u _ q 3 1   =   0 x 7 f f f f f f f ;  
 s t a t i c   c o n s t   q 1 5 _ t   m u _ q 1 5   =   0 x 7 f f f ;  
  
 # d e f i n e   L M S _ D E F I N E _ T E S T ( s u f f i x ,   c o n f i g _ s u f f i x ,   o u t p u t _ t y p e ,   m u )                                                 \  
       J T E S T _ D E F I N E _ T E S T ( a r m _ l m s # # c o n f i g _ s u f f i x # # _ # # s u f f i x # # _ t e s t ,                                                   \  
                   a r m _ l m s # # c o n f i g _ s u f f i x # # _ # # s u f f i x )                                                                                         \  
       {                                                                                                                                                                       \  
             a r m _ l m s # # c o n f i g _ s u f f i x # # _ i n s t a n c e _ # # s u f f i x   l m s _ i n s t _ f u t   =   {   0   } ;                                   \  
             a r m _ l m s # # c o n f i g _ s u f f i x # # _ i n s t a n c e _ # # s u f f i x   l m s _ i n s t _ r e f   =   {   0   } ;                                   \  
             a r m _ f i r _ i n s t a n c e _ # # s u f f i x   f i r _ i n s t   =   {   0   } ;                                                                             \  
             u i n t 3 2 _ t   i ;                                                                                                                                             \  
                                                                                                                                                                               \  
             T E M P L A T E _ D O _ A R R _ D E S C (                                                                                                                         \  
                         b l o c k s i z e _ i d x ,   u i n t 3 2 _ t ,   b l o c k S i z e ,   l m s _ b l o c k s i z e s                                                   \  
                         ,                                                                                                                                                     \  
                   T E M P L A T E _ D O _ A R R _ D E S C (                                                                                                                   \  
                               n u m t a p s _ i d x ,   u i n t 1 6 _ t ,   n u m T a p s ,   f i l t e r i n g _ n u m t a p s                                               \  
                               ,                                                                                                                                               \  
                               / *   I n i t i a l i z e   t h e   F I R   I n s t a n c e s   * /                                                                             \  
                               a r m _ f i r _ i n i t _ # # s u f f i x (                                                                                                     \  
                                           & f i r _ i n s t ,   n u m T a p s ,                                                                                               \  
                                           ( o u t p u t _ t y p e * ) f i l t e r i n g _ c o e f f s _ # # s u f f i x ,                                                     \  
                                           ( v o i d   * )   f i l t e r i n g _ p S t a t e ,   b l o c k S i z e ) ;                                                         \  
                                                                                                                                                                               \  
                               r e f _ f i r _ # # s u f f i x (                                                                                                               \  
                                           & f i r _ i n s t ,                                                                                                                 \  
                                           ( v o i d   * )   f i l t e r i n g _ # # s u f f i x # # _ i n p u t s ,                                                           \  
                                           ( v o i d   * )   f i l t e r i n g _ i n p u t _ l m s ,                                                                           \  
                                           b l o c k S i z e ) ;                                                                                                               \  
                                                                                                                                                                               \  
                               f o r ( i = 0 ; i < n u m T a p s ; i + + )                                                                                                     \  
                               {                                                                                                                                               \  
                                     * ( ( o u t p u t _ t y p e * ) f i l t e r i n g _ c o e f f s _ l m s   +   i )   =   ( o u t p u t _ t y p e ) 0 ;                     \  
                               }                                                                                                                                               \  
                                                                                                                                                                               \  
                               f o r ( i = 0 ; i < b l o c k S i z e ; i + + )                                                                                                 \  
                               {                                                                                                                                               \  
                                     / *   s c a l e d   d o w n   s o   t h a t   l m s   w i l l   c o n v e r g e                       * /                                 \  
                                     / *   s c a l e d   d o w n   b y   a l m o s t   t h e   m a x   o f   t h e   a b s ( i n p u t )   * /                                 \  
                                     * ( ( o u t p u t _ t y p e * ) f i l t e r i n g _ i n p u t _ l m s   +   i )   =                                                       \  
                                                 * ( ( o u t p u t _ t y p e * ) f i l t e r i n g _ i n p u t _ l m s   +   i )   /   2 0 0 . 0 f ;                           \  
                                                                                                                                                                               \  
                                     * ( ( o u t p u t _ t y p e * ) f i l t e r i n g _ o u t p u t _ f 3 2 _ f u t   +   i )   =                                             \  
                                                 * ( ( o u t p u t _ t y p e * ) f i l t e r i n g _ # # s u f f i x # # _ i n p u t s   +   i )   /   2 0 0 . 0 f ;           \  
                               }                                                                                                                                               \  
                                                                                                                                                                               \  
                               / *   D i s p l a y   t e s t   p a r a m e t e r   v a l u e s   * /                                                                           \  
                               J T E S T _ D U M P _ S T R F ( " B l o c k   S i z e :   % d \ n "                                                                             \  
                                                               " N u m b e r   o f   T a p s :   % d \ n " ,                                                                   \  
                                                               ( i n t ) b l o c k S i z e ,                                                                                   \  
                                                               ( i n t ) n u m T a p s ) ;                                                                                     \  
                                                                                                                                                                               \  
                               / *   I n i t i a l i z e   t h e   L M S   I n s t a n c e s   * /                                                                             \  
                               a r m _ l m s # # c o n f i g _ s u f f i x # # _ i n i t _ # # s u f f i x (                                                                   \  
                                           & l m s _ i n s t _ f u t ,   n u m T a p s ,                                                                                       \  
                                           ( o u t p u t _ t y p e * ) f i l t e r i n g _ c o e f f s _ l m s ,                                                               \  
                                           ( v o i d   * )   f i l t e r i n g _ p S t a t e ,   m u ,   b l o c k S i z e ) ;                                                 \  
                                                                                                                                                                               \  
                               J T E S T _ C O U N T _ C Y C L E S (                                                                                                           \  
                                           a r m _ l m s # # c o n f i g _ s u f f i x # # _ # # s u f f i x (                                                                 \  
                                                       & l m s _ i n s t _ f u t ,                                                                                             \  
                                                       ( v o i d   * )   f i l t e r i n g _ o u t p u t _ f 3 2 _ f u t ,                                                     \  
                                                       ( v o i d   * )   f i l t e r i n g _ i n p u t _ l m s ,                                                               \  
                                                       ( v o i d   * )   f i l t e r i n g _ o u t p u t _ f u t ,                                                             \  
                                                       ( v o i d   * )   ( ( o u t p u t _ t y p e * ) f i l t e r i n g _ o u t p u t _ f u t + b l o c k S i z e ) ,         \  
                                                       b l o c k S i z e ) ) ;                                                                                                 \  
                                                                                                                                                                               \  
                               f o r ( i = 0 ; i < n u m T a p s ; i + + )                                                                                                     \  
                               {                                                                                                                                               \  
                                     * ( ( o u t p u t _ t y p e * ) f i l t e r i n g _ c o e f f s _ l m s   +   i )   =   ( o u t p u t _ t y p e ) 0 ;                     \  
                               }                                                                                                                                               \  
                                                                                                                                                                               \  
                               a r m _ l m s # # c o n f i g _ s u f f i x # # _ i n i t _ # # s u f f i x (                                                                   \  
                                           & l m s _ i n s t _ r e f ,   n u m T a p s ,                                                                                       \  
                                           ( o u t p u t _ t y p e * ) f i l t e r i n g _ c o e f f s _ l m s ,                                                               \  
                                           ( v o i d   * )   f i l t e r i n g _ p S t a t e ,   m u ,   b l o c k S i z e ) ;                                                 \  
                                                                                                                                                                               \  
                               r e f _ l m s # # c o n f i g _ s u f f i x # # _ # # s u f f i x (                                                                             \  
                                           & l m s _ i n s t _ r e f ,                                                                                                         \  
                                           ( v o i d   * )   f i l t e r i n g _ o u t p u t _ f 3 2 _ f u t ,                                                                 \  
                                           ( v o i d   * )   f i l t e r i n g _ i n p u t _ l m s ,                                                                           \  
                                           ( v o i d   * )   f i l t e r i n g _ o u t p u t _ r e f ,                                                                         \  
                                           ( v o i d   * )   ( ( o u t p u t _ t y p e * ) f i l t e r i n g _ o u t p u t _ f u t + b l o c k S i z e ) ,                     \  
                                           b l o c k S i z e ) ;                                                                                                               \  
                                                                                                                                                                               \  
                               F I L T E R I N G _ S N R _ C O M P A R E _ I N T E R F A C E (                                                                                 \  
                                           b l o c k S i z e ,                                                                                                                 \  
                                           o u t p u t _ t y p e ) ) ) ;                                                                                                       \  
                                                                                                                                                                               \  
                         r e t u r n   J T E S T _ T E S T _ P A S S E D ;                                                                                                     \  
       }  
  
 # d e f i n e   L M S _ W I T H _ P O S T S H I F T _ D E F I N E _ T E S T ( s u f f i x ,   c o n f i g _ s u f f i x ,   o u t p u t _ t y p e )                           \  
       J T E S T _ D E F I N E _ T E S T ( a r m _ l m s # # c o n f i g _ s u f f i x # # _ # # s u f f i x # # _ t e s t ,                                                   \  
                   a r m _ l m s # # c o n f i g _ s u f f i x # # _ # # s u f f i x )                                                                                         \  
       {                                                                                                                                                                       \  
             a r m _ l m s # # c o n f i g _ s u f f i x # # _ i n s t a n c e _ # # s u f f i x   l m s _ i n s t _ f u t   =   {   0   } ;                                   \  
             a r m _ l m s # # c o n f i g _ s u f f i x # # _ i n s t a n c e _ # # s u f f i x   l m s _ i n s t _ r e f   =   {   0   } ;                                   \  
             a r m _ f i r _ i n s t a n c e _ # # s u f f i x   f i r _ i n s t   =   {   0   } ;                                                                             \  
             u i n t 3 2 _ t   i ;                                                                                                                                             \  
                                                                                                                                                                               \  
             T E M P L A T E _ D O _ A R R _ D E S C (                                                                                                                         \  
                         b l o c k s i z e _ i d x ,   u i n t 3 2 _ t ,   b l o c k S i z e ,   l m s _ b l o c k s i z e s                                                   \  
                         ,                                                                                                                                                     \  
                   T E M P L A T E _ D O _ A R R _ D E S C (                                                                                                                   \  
                               n u m t a p s _ i d x ,   u i n t 1 6 _ t ,   n u m T a p s ,   f i l t e r i n g _ n u m t a p s                                               \  
                               ,                                                                                                                                               \  
                               T E M P L A T E _ D O _ A R R _ D E S C (                                                                                                       \  
                                           p o s t s h i f t s _ i d x ,   u i n t 8 _ t ,   p o s t S h i f t ,   f i l t e r i n g _ p o s t s h i f t s                     \  
                                           ,                                                                                                                                   \  
                                     / *   I n i t i a l i z e   t h e   F I R   I n s t a n c e s   * /                                                                       \  
                                     a r m _ f i r _ i n i t _ # # s u f f i x (                                                                                               \  
                                                 & f i r _ i n s t ,   n u m T a p s ,                                                                                         \  
                                                 ( o u t p u t _ t y p e * ) f i l t e r i n g _ c o e f f s _ # # s u f f i x ,                                               \  
                                                 ( v o i d   * )   f i l t e r i n g _ p S t a t e ,   b l o c k S i z e ) ;                                                   \  
                                                                                                                                                                               \  
                                     r e f _ f i r _ # # s u f f i x (                                                                                                         \  
                                                 & f i r _ i n s t ,                                                                                                           \  
                                                 ( v o i d   * )   f i l t e r i n g _ # # s u f f i x # # _ i n p u t s ,                                                     \  
                                                 ( v o i d   * )   f i l t e r i n g _ i n p u t _ l m s ,                                                                     \  
                                                 b l o c k S i z e ) ;                                                                                                         \  
                                                                                                                                                                               \  
                                     f o r ( i = 0 ; i < n u m T a p s ; i + + )                                                                                               \  
                                     {                                                                                                                                         \  
                                           * ( ( o u t p u t _ t y p e * ) f i l t e r i n g _ c o e f f s _ l m s   +   i )   =   ( o u t p u t _ t y p e ) 0 ;               \  
                                     }                                                                                                                                         \  
                                                                                                                                                                               \  
                                     f o r ( i = 0 ; i < b l o c k S i z e ; i + + )                                                                                           \  
                                     {                                                                                                                                         \  
                                           / *   s c a l e d   d o w n   s o   t h a t   l m s   w i l l   c o n v e r g e   * /                                               \  
                                           / *   s c a l e d   d o w n   b y   l o g 2 ( n u m T a p s )   b i t s           * /                                               \  
                                           * ( ( o u t p u t _ t y p e * ) f i l t e r i n g _ o u t p u t _ f 3 2 _ f u t   +   i )   =                                       \  
                                                       * ( ( o u t p u t _ t y p e * ) f i l t e r i n g _ # # s u f f i x # # _ i n p u t s   +   i )   > >   6 ;             \  
                                     }                                                                                                                                         \  
                                                                                                                                                                               \  
                                     / *   D i s p l a y   t e s t   p a r a m e t e r   v a l u e s   * /                                                                     \  
                                     J T E S T _ D U M P _ S T R F ( " B l o c k   S i z e :   % d \ n "                                                                       \  
                                                                     " N u m b e r   o f   T a p s :   % d \ n "                                                               \  
                                                                     " P o s t   S h i f t :   % d \ n " ,                                                                     \  
                                                                     ( i n t ) b l o c k S i z e ,                                                                             \  
                                                                     ( i n t ) n u m T a p s ,                                                                                 \  
                                                                     ( i n t ) p o s t S h i f t ) ;                                                                           \  
                                                                                                                                                                               \  
                                     / *   I n i t i a l i z e   t h e   L M S   I n s t a n c e s   * /                                                                       \  
                                     a r m _ l m s # # c o n f i g _ s u f f i x # # _ i n i t _ # # s u f f i x (                                                             \  
                                                 & l m s _ i n s t _ f u t ,   n u m T a p s ,                                                                                 \  
                                                 ( o u t p u t _ t y p e * ) f i l t e r i n g _ c o e f f s _ l m s ,                                                         \  
                                                 ( v o i d   * )   f i l t e r i n g _ p S t a t e ,   m u _ # # s u f f i x ,   b l o c k S i z e ,   p o s t S h i f t ) ;   \  
                                                                                                                                                                               \  
                                     J T E S T _ C O U N T _ C Y C L E S (                                                                                                     \  
                                                 a r m _ l m s # # c o n f i g _ s u f f i x # # _ # # s u f f i x (                                                           \  
                                                             & l m s _ i n s t _ f u t ,                                                                                       \  
                                                             ( v o i d   * )   f i l t e r i n g _ o u t p u t _ f 3 2 _ f u t ,                                               \  
                                                             ( v o i d   * )   f i l t e r i n g _ i n p u t _ l m s ,                                                         \  
                                                             ( v o i d   * )   f i l t e r i n g _ o u t p u t _ f u t ,                                                       \  
                                                             ( v o i d   * )   ( ( o u t p u t _ t y p e * ) f i l t e r i n g _ o u t p u t _ f u t + b l o c k S i z e ) ,   \  
                                                             b l o c k S i z e ) ) ;                                                                                           \  
                                                                                                                                                                               \  
                                     f o r ( i = 0 ; i < n u m T a p s ; i + + )                                                                                               \  
                                     {                                                                                                                                         \  
                                           * ( ( o u t p u t _ t y p e * ) f i l t e r i n g _ c o e f f s _ l m s   +   i )   =   ( o u t p u t _ t y p e ) 0 ;               \  
                                     }                                                                                                                                         \  
                                                                                                                                                                               \  
                                     a r m _ l m s # # c o n f i g _ s u f f i x # # _ i n i t _ # # s u f f i x (                                                             \  
                                                 & l m s _ i n s t _ r e f ,   n u m T a p s ,                                                                                 \  
                                                 ( o u t p u t _ t y p e * ) f i l t e r i n g _ c o e f f s _ l m s ,                                                         \  
                                                 ( v o i d   * )   f i l t e r i n g _ p S t a t e ,   m u _ # # s u f f i x ,   b l o c k S i z e ,   p o s t S h i f t ) ;   \  
                                                                                                                                                                               \  
                                     r e f _ l m s # # c o n f i g _ s u f f i x # # _ # # s u f f i x (                                                                       \  
                                                 & l m s _ i n s t _ r e f ,                                                                                                   \  
                                                 ( v o i d   * )   f i l t e r i n g _ o u t p u t _ f 3 2 _ f u t ,                                                           \  
                                                 ( v o i d   * )   f i l t e r i n g _ i n p u t _ l m s ,                                                                     \  
                                                 ( v o i d   * )   f i l t e r i n g _ o u t p u t _ r e f ,                                                                   \  
                                                 ( v o i d   * )   ( ( o u t p u t _ t y p e * ) f i l t e r i n g _ o u t p u t _ r e f + b l o c k S i z e ) ,               \  
                                                 b l o c k S i z e ) ;                                                                                                         \  
                                                                                                                                                                               \  
                                     F I L T E R I N G _ S N R _ C O M P A R E _ I N T E R F A C E (                                                                           \  
                                                 b l o c k S i z e ,                                                                                                           \  
                                                 o u t p u t _ t y p e ) ) ) ) ;                                                                                               \  
                                                                                                                                                                               \  
                         r e t u r n   J T E S T _ T E S T _ P A S S E D ;                                                                                                     \  
       }  
  
 L M S _ D E F I N E _ T E S T ( f 3 2 , , f l o a t 3 2 _ t ,   m u _ f 3 2 ) ;  
 L M S _ W I T H _ P O S T S H I F T _ D E F I N E _ T E S T ( q 3 1 , , q 3 1 _ t ) ;  
 L M S _ W I T H _ P O S T S H I F T _ D E F I N E _ T E S T ( q 1 5 , , q 1 5 _ t ) ;  
  
 L M S _ D E F I N E _ T E S T ( f 3 2 , _ n o r m , f l o a t 3 2 _ t ,   m u 2 _ f 3 2 ) ;  
 L M S _ W I T H _ P O S T S H I F T _ D E F I N E _ T E S T ( q 3 1 , _ n o r m , q 3 1 _ t ) ;  
 L M S _ W I T H _ P O S T S H I F T _ D E F I N E _ T E S T ( q 1 5 , _ n o r m , q 1 5 _ t ) ;  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   C o l l e c t   a l l   t e s t s   i n   a   g r o u p .   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 J T E S T _ D E F I N E _ G R O U P ( l m s _ t e s t s )  
 {  
         / *  
             T o   s k i p   a   t e s t ,   c o m m e n t   i t   o u t .  
         * /  
       J T E S T _ T E S T _ C A L L ( a r m _ l m s _ f 3 2 _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( a r m _ l m s _ q 3 1 _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( a r m _ l m s _ q 1 5 _ t e s t ) ;  
  
       J T E S T _ T E S T _ C A L L ( a r m _ l m s _ n o r m _ f 3 2 _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( a r m _ l m s _ n o r m _ q 3 1 _ t e s t ) ;  
       J T E S T _ T E S T _ C A L L ( a r m _ l m s _ n o r m _ q 1 5 _ t e s t ) ;  
 }  