�?# i n c l u d e   " j t e s t . h "  
 # i n c l u d e   " s t a t i s t i c s _ t e s t _ d a t a . h "  
 # i n c l u d e   " a r r _ d e s c . h "  
 # i n c l u d e   " a r m _ m a t h . h "                       / *   F U T s   * /  
 # i n c l u d e   " r e f . h "                                 / *   R e f e r e n c e   F u n c t i o n s   * /  
 # i n c l u d e   " t e s t _ t e m p l a t e s . h "  
 # i n c l u d e   " s t a t i s t i c s _ t e m p l a t e s . h "  
 # i n c l u d e   " t y p e _ a b b r e v . h "  
  
 # d e f i n e   J T E S T _ A R M _ M A X _ T E S T ( s u f f i x )                             \  
         S T A T I S T I C S _ D E F I N E _ T E S T _ T E M P L A T E _ B U F 1 _ B L K (       \  
                 m a x ,                                                                         \  
                 s u f f i x ,                                                                   \  
                 T Y P E _ F R O M _ A B B R E V ( s u f f i x ) ,                               \  
                 T Y P E _ F R O M _ A B B R E V ( s u f f i x ) ,                               \  
                 S T A T I S T I C S _ C O M P A R E _ I N T E R F A C E )  
  
 J T E S T _ A R M _ M A X _ T E S T ( f 3 2 ) ;  
 J T E S T _ A R M _ M A X _ T E S T ( q 3 1 ) ;  
 J T E S T _ A R M _ M A X _ T E S T ( q 1 5 ) ;  
 J T E S T _ A R M _ M A X _ T E S T ( q 7 ) ;  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   C o l l e c t   a l l   t e s t s   i n   a   g r o u p .   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 J T E S T _ D E F I N E _ G R O U P ( m a x _ t e s t s )  
 {  
         / *  
             T o   s k i p   a   t e s t ,   c o m m e n t   i t   o u t .  
         * /  
         J T E S T _ T E S T _ C A L L ( a r m _ m a x _ f 3 2 _ t e s t ) ;  
         J T E S T _ T E S T _ C A L L ( a r m _ m a x _ q 3 1 _ t e s t ) ;  
         J T E S T _ T E S T _ C A L L ( a r m _ m a x _ q 1 5 _ t e s t ) ;  
         J T E S T _ T E S T _ C A L L ( a r m _ m a x _ q 7 _ t e s t ) ;  
 }  