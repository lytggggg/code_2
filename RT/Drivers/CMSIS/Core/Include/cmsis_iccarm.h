??/ * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / / * *  
   *   @ f i l e           c m s i s _ i c c a r m . h  
   *   @ b r i e f         C M S I S   c o m p i l e r   I C C A R M   ( I A R   C o m p i l e r   f o r   A r m )   h e a d e r   f i l e  
   *   @ v e r s i o n     V 5 . 0 . 7  
   *   @ d a t e           1 9 .   J u n e   2 0 1 8  
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
  
 / / - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 / /  
 / /   C o p y r i g h t   ( c )   2 0 1 7 - 2 0 1 8   I A R   S y s t e m s  
 / /  
 / /   L i c e n s e d   u n d e r   t h e   A p a c h e   L i c e n s e ,   V e r s i o n   2 . 0   ( t h e   " L i c e n s e " )  
 / /   y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e   L i c e n s e .  
 / /   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t  
 / /           h t t p : / / w w w . a p a c h e . o r g / l i c e n s e s / L I C E N S E - 2 . 0  
 / /  
 / /   U n l e s s   r e q u i r e d   b y   a p p l i c a b l e   l a w   o r   a g r e e d   t o   i n   w r i t i n g ,   s o f t w a r e  
 / /   d i s t r i b u t e d   u n d e r   t h e   L i c e n s e   i s   d i s t r i b u t e d   o n   a n   " A S   I S "   B A S I S ,  
 / /   W I T H O U T   W A R R A N T I E S   O R   C O N D I T I O N S   O F   A N Y   K I N D ,   e i t h e r   e x p r e s s   o r   i m p l i e d .  
 / /   S e e   t h e   L i c e n s e   f o r   t h e   s p e c i f i c   l a n g u a g e   g o v e r n i n g   p e r m i s s i o n s   a n d  
 / /   l i m i t a t i o n s   u n d e r   t h e   L i c e n s e .  
 / /  
 / / - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
  
  
 # i f n d e f   _ _ C M S I S _ I C C A R M _ H _ _  
 # d e f i n e   _ _ C M S I S _ I C C A R M _ H _ _  
  
 # i f n d e f   _ _ I C C A R M _ _  
     # e r r o r   T h i s   f i l e   s h o u l d   o n l y   b e   c o m p i l e d   b y   I C C A R M  
 # e n d i f  
  
 # p r a g m a   s y s t e m _ i n c l u d e  
  
 # d e f i n e   _ _ I A R _ F T   _ P r a g m a ( " i n l i n e = f o r c e d " )   _ _ i n t r i n s i c  
  
 # i f   ( _ _ V E R _ _   > =   8 0 0 0 0 0 0 )  
     # d e f i n e   _ _ I C C A R M _ V 8   1  
 # e l s e  
     # d e f i n e   _ _ I C C A R M _ V 8   0  
 # e n d i f  
  
 # i f n d e f   _ _ A L I G N E D  
     # i f   _ _ I C C A R M _ V 8  
         # d e f i n e   _ _ A L I G N E D ( x )   _ _ a t t r i b u t e _ _ ( ( a l i g n e d ( x ) ) )  
     # e l i f   ( _ _ V E R _ _   > =   7 0 8 0 0 0 0 )  
         / *   N e e d s   I A R   l a n g u a g e   e x t e n s i o n s   * /  
         # d e f i n e   _ _ A L I G N E D ( x )   _ _ a t t r i b u t e _ _ ( ( a l i g n e d ( x ) ) )  
     # e l s e  
         # w a r n i n g   N o   c o m p i l e r   s p e c i f i c   s o l u t i o n   f o r   _ _ A L I G N E D . _ _ A L I G N E D   i s   i g n o r e d .  
         # d e f i n e   _ _ A L I G N E D ( x )  
     # e n d i f  
 # e n d i f  
  
  
 / *   D e f i n e   c o m p i l e r   m a c r o s   f o r   C P U   a r c h i t e c t u r e ,   u s e d   i n   C M S I S   5 .  
   * /  
 # i f   _ _ A R M _ A R C H _ 6 M _ _   | |   _ _ A R M _ A R C H _ 7 M _ _   | |   _ _ A R M _ A R C H _ 7 E M _ _   | |   _ _ A R M _ A R C H _ 8 M _ B A S E _ _   | |   _ _ A R M _ A R C H _ 8 M _ M A I N _ _  
 / *   M a c r o s   a l r e a d y   d e f i n e d   * /  
 # e l s e  
     # i f   d e f i n e d ( _ _ A R M 8 M _ M A I N L I N E _ _ )   | |   d e f i n e d ( _ _ A R M 8 E M _ M A I N L I N E _ _ )  
         # d e f i n e   _ _ A R M _ A R C H _ 8 M _ M A I N _ _   1  
     # e l i f   d e f i n e d ( _ _ A R M 8 M _ B A S E L I N E _ _ )  
         # d e f i n e   _ _ A R M _ A R C H _ 8 M _ B A S E _ _   1  
     # e l i f   d e f i n e d ( _ _ A R M _ A R C H _ P R O F I L E )   & &   _ _ A R M _ A R C H _ P R O F I L E   = =   ' M '  
         # i f   _ _ A R M _ A R C H   = =   6  
             # d e f i n e   _ _ A R M _ A R C H _ 6 M _ _   1  
         # e l i f   _ _ A R M _ A R C H   = =   7  
             # i f   _ _ A R M _ F E A T U R E _ D S P  
                 # d e f i n e   _ _ A R M _ A R C H _ 7 E M _ _   1  
             # e l s e  
                 # d e f i n e   _ _ A R M _ A R C H _ 7 M _ _   1  
             # e n d i f  
         # e n d i f   / *   _ _ A R M _ A R C H   * /  
     # e n d i f   / *   _ _ A R M _ A R C H _ P R O F I L E   = =   ' M '   * /  
 # e n d i f  
  
 / *   A l t e r n a t i v   c o r e   d e d u c t i o n   f o r   o l d e r   I C C A R M ' s   * /  
 # i f   ! d e f i n e d ( _ _ A R M _ A R C H _ 6 M _ _ )   & &   ! d e f i n e d ( _ _ A R M _ A R C H _ 7 M _ _ )   & &   ! d e f i n e d ( _ _ A R M _ A R C H _ 7 E M _ _ )   & &   \  
         ! d e f i n e d ( _ _ A R M _ A R C H _ 8 M _ B A S E _ _ )   & &   ! d e f i n e d ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _ )  
     # i f   d e f i n e d ( _ _ A R M 6 M _ _ )   & &   ( _ _ C O R E _ _   = =   _ _ A R M 6 M _ _ )  
         # d e f i n e   _ _ A R M _ A R C H _ 6 M _ _   1  
     # e l i f   d e f i n e d ( _ _ A R M 7 M _ _ )   & &   ( _ _ C O R E _ _   = =   _ _ A R M 7 M _ _ )  
         # d e f i n e   _ _ A R M _ A R C H _ 7 M _ _   1  
     # e l i f   d e f i n e d ( _ _ A R M 7 E M _ _ )   & &   ( _ _ C O R E _ _   = =   _ _ A R M 7 E M _ _ )  
         # d e f i n e   _ _ A R M _ A R C H _ 7 E M _ _     1  
     # e l i f   d e f i n e d ( _ _ A R M 8 M _ B A S E L I N E _ _ )   & &   ( _ _ C O R E   = =   _ _ A R M 8 M _ B A S E L I N E _ _ )  
         # d e f i n e   _ _ A R M _ A R C H _ 8 M _ B A S E _ _   1  
     # e l i f   d e f i n e d ( _ _ A R M 8 M _ M A I N L I N E _ _ )   & &   ( _ _ C O R E   = =   _ _ A R M 8 M _ M A I N L I N E _ _ )  
         # d e f i n e   _ _ A R M _ A R C H _ 8 M _ M A I N _ _   1  
     # e l i f   d e f i n e d ( _ _ A R M 8 E M _ M A I N L I N E _ _ )   & &   ( _ _ C O R E   = =   _ _ A R M 8 E M _ M A I N L I N E _ _ )  
         # d e f i n e   _ _ A R M _ A R C H _ 8 M _ M A I N _ _   1  
     # e l s e  
         # e r r o r   " U n k n o w n   t a r g e t . "  
     # e n d i f  
 # e n d i f  
  
  
  
 # i f   d e f i n e d ( _ _ A R M _ A R C H _ 6 M _ _ )   & &   _ _ A R M _ A R C H _ 6 M _ _ = = 1  
     # d e f i n e   _ _ I A R _ M 0 _ F A M I L Y     1  
 # e l i f   d e f i n e d ( _ _ A R M _ A R C H _ 8 M _ B A S E _ _ )   & &   _ _ A R M _ A R C H _ 8 M _ B A S E _ _ = = 1  
     # d e f i n e   _ _ I A R _ M 0 _ F A M I L Y     1  
 # e l s e  
     # d e f i n e   _ _ I A R _ M 0 _ F A M I L Y     0  
 # e n d i f  
  
  
 # i f n d e f   _ _ A S M  
     # d e f i n e   _ _ A S M   _ _ a s m  
 # e n d i f  
  
 # i f n d e f   _ _ I N L I N E  
     # d e f i n e   _ _ I N L I N E   i n l i n e  
 # e n d i f  
  
 # i f n d e f       _ _ N O _ R E T U R N  
     # i f   _ _ I C C A R M _ V 8  
         # d e f i n e   _ _ N O _ R E T U R N   _ _ a t t r i b u t e _ _ ( ( _ _ n o r e t u r n _ _ ) )  
     # e l s e  
         # d e f i n e   _ _ N O _ R E T U R N   _ P r a g m a ( " o b j e c t _ a t t r i b u t e = _ _ n o r e t u r n " )  
     # e n d i f  
 # e n d i f  
  
 # i f n d e f       _ _ P A C K E D  
     # i f   _ _ I C C A R M _ V 8  
         # d e f i n e   _ _ P A C K E D   _ _ a t t r i b u t e _ _ ( ( p a c k e d ,   a l i g n e d ( 1 ) ) )  
     # e l s e  
         / *   N e e d s   I A R   l a n g u a g e   e x t e n s i o n s   * /  
         # d e f i n e   _ _ P A C K E D   _ _ p a c k e d  
     # e n d i f  
 # e n d i f  
  
 # i f n d e f       _ _ P A C K E D _ S T R U C T  
     # i f   _ _ I C C A R M _ V 8  
         # d e f i n e   _ _ P A C K E D _ S T R U C T   s t r u c t   _ _ a t t r i b u t e _ _ ( ( p a c k e d ,   a l i g n e d ( 1 ) ) )  
     # e l s e  
         / *   N e e d s   I A R   l a n g u a g e   e x t e n s i o n s   * /  
         # d e f i n e   _ _ P A C K E D _ S T R U C T   _ _ p a c k e d   s t r u c t  
     # e n d i f  
 # e n d i f  
  
 # i f n d e f       _ _ P A C K E D _ U N I O N  
     # i f   _ _ I C C A R M _ V 8  
         # d e f i n e   _ _ P A C K E D _ U N I O N   u n i o n   _ _ a t t r i b u t e _ _ ( ( p a c k e d ,   a l i g n e d ( 1 ) ) )  
     # e l s e  
         / *   N e e d s   I A R   l a n g u a g e   e x t e n s i o n s   * /  
         # d e f i n e   _ _ P A C K E D _ U N I O N   _ _ p a c k e d   u n i o n  
     # e n d i f  
 # e n d i f  
  
 # i f n d e f       _ _ R E S T R I C T  
     # d e f i n e   _ _ R E S T R I C T                         _ _ r e s t r i c t  
 # e n d i f  
  
 # i f n d e f       _ _ S T A T I C _ I N L I N E  
     # d e f i n e   _ _ S T A T I C _ I N L I N E               s t a t i c   i n l i n e  
 # e n d i f  
  
 # i f n d e f       _ _ F O R C E I N L I N E  
     # d e f i n e   _ _ F O R C E I N L I N E                   _ P r a g m a ( " i n l i n e = f o r c e d " )  
 # e n d i f  
  
 # i f n d e f       _ _ S T A T I C _ F O R C E I N L I N E  
     # d e f i n e   _ _ S T A T I C _ F O R C E I N L I N E     _ _ F O R C E I N L I N E   _ _ S T A T I C _ I N L I N E  
 # e n d i f  
  
 # i f n d e f   _ _ U N A L I G N E D _ U I N T 1 6 _ R E A D  
 # p r a g m a   l a n g u a g e = s a v e  
 # p r a g m a   l a n g u a g e = e x t e n d e d  
 _ _ I A R _ F T   u i n t 1 6 _ t   _ _ i a r _ u i n t 1 6 _ r e a d ( v o i d   c o n s t   * p t r )  
 {  
     r e t u r n   * ( _ _ p a c k e d   u i n t 1 6 _ t * ) ( p t r ) ;  
 }  
 # p r a g m a   l a n g u a g e = r e s t o r e  
 # d e f i n e   _ _ U N A L I G N E D _ U I N T 1 6 _ R E A D ( P T R )   _ _ i a r _ u i n t 1 6 _ r e a d ( P T R )  
 # e n d i f  
  
  
 # i f n d e f   _ _ U N A L I G N E D _ U I N T 1 6 _ W R I T E  
 # p r a g m a   l a n g u a g e = s a v e  
 # p r a g m a   l a n g u a g e = e x t e n d e d  
 _ _ I A R _ F T   v o i d   _ _ i a r _ u i n t 1 6 _ w r i t e ( v o i d   c o n s t   * p t r ,   u i n t 1 6 _ t   v a l )  
 {  
     * ( _ _ p a c k e d   u i n t 1 6 _ t * ) ( p t r )   =   v a l ; ;  
 }  
 # p r a g m a   l a n g u a g e = r e s t o r e  
 # d e f i n e   _ _ U N A L I G N E D _ U I N T 1 6 _ W R I T E ( P T R , V A L )   _ _ i a r _ u i n t 1 6 _ w r i t e ( P T R , V A L )  
 # e n d i f  
  
 # i f n d e f   _ _ U N A L I G N E D _ U I N T 3 2 _ R E A D  
 # p r a g m a   l a n g u a g e = s a v e  
 # p r a g m a   l a n g u a g e = e x t e n d e d  
 _ _ I A R _ F T   u i n t 3 2 _ t   _ _ i a r _ u i n t 3 2 _ r e a d ( v o i d   c o n s t   * p t r )  
 {  
     r e t u r n   * ( _ _ p a c k e d   u i n t 3 2 _ t * ) ( p t r ) ;  
 }  
 # p r a g m a   l a n g u a g e = r e s t o r e  
 # d e f i n e   _ _ U N A L I G N E D _ U I N T 3 2 _ R E A D ( P T R )   _ _ i a r _ u i n t 3 2 _ r e a d ( P T R )  
 # e n d i f  
  
 # i f n d e f   _ _ U N A L I G N E D _ U I N T 3 2 _ W R I T E  
 # p r a g m a   l a n g u a g e = s a v e  
 # p r a g m a   l a n g u a g e = e x t e n d e d  
 _ _ I A R _ F T   v o i d   _ _ i a r _ u i n t 3 2 _ w r i t e ( v o i d   c o n s t   * p t r ,   u i n t 3 2 _ t   v a l )  
 {  
     * ( _ _ p a c k e d   u i n t 3 2 _ t * ) ( p t r )   =   v a l ; ;  
 }  
 # p r a g m a   l a n g u a g e = r e s t o r e  
 # d e f i n e   _ _ U N A L I G N E D _ U I N T 3 2 _ W R I T E ( P T R , V A L )   _ _ i a r _ u i n t 3 2 _ w r i t e ( P T R , V A L )  
 # e n d i f  
  
 # i f n d e f   _ _ U N A L I G N E D _ U I N T 3 2       / *   d e p r e c a t e d   * /  
 # p r a g m a   l a n g u a g e = s a v e  
 # p r a g m a   l a n g u a g e = e x t e n d e d  
 _ _ p a c k e d   s t r u c t     _ _ i a r _ u 3 2   {   u i n t 3 2 _ t   v ;   } ;  
 # p r a g m a   l a n g u a g e = r e s t o r e  
 # d e f i n e   _ _ U N A L I G N E D _ U I N T 3 2 ( P T R )   ( ( ( s t r u c t   _ _ i a r _ u 3 2   * ) ( P T R ) ) - > v )  
 # e n d i f  
  
 # i f n d e f       _ _ U S E D  
     # i f   _ _ I C C A R M _ V 8  
         # d e f i n e   _ _ U S E D   _ _ a t t r i b u t e _ _ ( ( u s e d ) )  
     # e l s e  
         # d e f i n e   _ _ U S E D   _ P r a g m a ( " _ _ r o o t " )  
     # e n d i f  
 # e n d i f  
  
 # i f n d e f       _ _ W E A K  
     # i f   _ _ I C C A R M _ V 8  
         # d e f i n e   _ _ W E A K   _ _ a t t r i b u t e _ _ ( ( w e a k ) )  
     # e l s e  
         # d e f i n e   _ _ W E A K   _ P r a g m a ( " _ _ w e a k " )  
     # e n d i f  
 # e n d i f  
  
  
 # i f n d e f   _ _ I C C A R M _ I N T R I N S I C S _ V E R S I O N _ _  
     # d e f i n e   _ _ I C C A R M _ I N T R I N S I C S _ V E R S I O N _ _     0  
 # e n d i f  
  
 # i f   _ _ I C C A R M _ I N T R I N S I C S _ V E R S I O N _ _   = =   2  
  
     # i f   d e f i n e d ( _ _ C L Z )  
         # u n d e f   _ _ C L Z  
     # e n d i f  
     # i f   d e f i n e d ( _ _ R E V S H )  
         # u n d e f   _ _ R E V S H  
     # e n d i f  
     # i f   d e f i n e d ( _ _ R B I T )  
         # u n d e f   _ _ R B I T  
     # e n d i f  
     # i f   d e f i n e d ( _ _ S S A T )  
         # u n d e f   _ _ S S A T  
     # e n d i f  
     # i f   d e f i n e d ( _ _ U S A T )  
         # u n d e f   _ _ U S A T  
     # e n d i f  
  
     # i n c l u d e   " i c c a r m _ b u i l t i n . h "  
  
     # d e f i n e   _ _ d i s a b l e _ f a u l t _ i r q   _ _ i a r _ b u i l t i n _ d i s a b l e _ f i q  
     # d e f i n e   _ _ d i s a b l e _ i r q               _ _ i a r _ b u i l t i n _ d i s a b l e _ i n t e r r u p t  
     # d e f i n e   _ _ e n a b l e _ f a u l t _ i r q     _ _ i a r _ b u i l t i n _ e n a b l e _ f i q  
     # d e f i n e   _ _ e n a b l e _ i r q                 _ _ i a r _ b u i l t i n _ e n a b l e _ i n t e r r u p t  
     # d e f i n e   _ _ a r m _ r s r                       _ _ i a r _ b u i l t i n _ r s r  
     # d e f i n e   _ _ a r m _ w s r                       _ _ i a r _ b u i l t i n _ w s r  
  
  
     # d e f i n e   _ _ g e t _ A P S R ( )                                 ( _ _ a r m _ r s r ( " A P S R " ) )  
     # d e f i n e   _ _ g e t _ B A S E P R I ( )                           ( _ _ a r m _ r s r ( " B A S E P R I " ) )  
     # d e f i n e   _ _ g e t _ C O N T R O L ( )                           ( _ _ a r m _ r s r ( " C O N T R O L " ) )  
     # d e f i n e   _ _ g e t _ F A U L T M A S K ( )                       ( _ _ a r m _ r s r ( " F A U L T M A S K " ) )  
  
     # i f   ( ( d e f i n e d   ( _ _ F P U _ P R E S E N T )   & &   ( _ _ F P U _ P R E S E N T   = =   1 U ) )   & &   \  
               ( d e f i n e d   ( _ _ F P U _ U S E D       )   & &   ( _ _ F P U _ U S E D         = =   1 U ) )           )  
         # d e f i n e   _ _ g e t _ F P S C R ( )                           ( _ _ a r m _ r s r ( " F P S C R " ) )  
         # d e f i n e   _ _ s e t _ F P S C R ( V A L U E )                 ( _ _ a r m _ w s r ( " F P S C R " ,   ( V A L U E ) ) )  
     # e l s e  
         # d e f i n e   _ _ g e t _ F P S C R ( )                           (   0   )  
         # d e f i n e   _ _ s e t _ F P S C R ( V A L U E )                 ( ( v o i d ) V A L U E )  
     # e n d i f  
  
     # d e f i n e   _ _ g e t _ I P S R ( )                                 ( _ _ a r m _ r s r ( " I P S R " ) )  
     # d e f i n e   _ _ g e t _ M S P ( )                                   ( _ _ a r m _ r s r ( " M S P " ) )  
     # i f   ( ! ( d e f i n e d   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   )   & &   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   = =   1 ) )   & &   \  
               ( ! d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E )   | |   ( _ _ A R M _ F E A T U R E _ C M S E   <   3 ) ) )  
         / /   w i t h o u t   m a i n   e x t e n s i o n s ,   t h e   n o n - s e c u r e   M S P L I M   i s   R A Z / W I  
         # d e f i n e   _ _ g e t _ M S P L I M ( )                         ( 0 U )  
     # e l s e  
         # d e f i n e   _ _ g e t _ M S P L I M ( )                         ( _ _ a r m _ r s r ( " M S P L I M " ) )  
     # e n d i f  
     # d e f i n e   _ _ g e t _ P R I M A S K ( )                           ( _ _ a r m _ r s r ( " P R I M A S K " ) )  
     # d e f i n e   _ _ g e t _ P S P ( )                                   ( _ _ a r m _ r s r ( " P S P " ) )  
  
     # i f   ( ! ( d e f i n e d   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   )   & &   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   = =   1 ) )   & &   \  
               ( ! d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E )   | |   ( _ _ A R M _ F E A T U R E _ C M S E   <   3 ) ) )  
         / /   w i t h o u t   m a i n   e x t e n s i o n s ,   t h e   n o n - s e c u r e   P S P L I M   i s   R A Z / W I  
         # d e f i n e   _ _ g e t _ P S P L I M ( )                         ( 0 U )  
     # e l s e  
         # d e f i n e   _ _ g e t _ P S P L I M ( )                         ( _ _ a r m _ r s r ( " P S P L I M " ) )  
     # e n d i f  
  
     # d e f i n e   _ _ g e t _ x P S R ( )                                 ( _ _ a r m _ r s r ( " x P S R " ) )  
  
     # d e f i n e   _ _ s e t _ B A S E P R I ( V A L U E )                 ( _ _ a r m _ w s r ( " B A S E P R I " ,   ( V A L U E ) ) )  
     # d e f i n e   _ _ s e t _ B A S E P R I _ M A X ( V A L U E )         ( _ _ a r m _ w s r ( " B A S E P R I _ M A X " ,   ( V A L U E ) ) )  
     # d e f i n e   _ _ s e t _ C O N T R O L ( V A L U E )                 ( _ _ a r m _ w s r ( " C O N T R O L " ,   ( V A L U E ) ) )  
     # d e f i n e   _ _ s e t _ F A U L T M A S K ( V A L U E )             ( _ _ a r m _ w s r ( " F A U L T M A S K " ,   ( V A L U E ) ) )  
     # d e f i n e   _ _ s e t _ M S P ( V A L U E )                         ( _ _ a r m _ w s r ( " M S P " ,   ( V A L U E ) ) )  
  
     # i f   ( ! ( d e f i n e d   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   )   & &   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   = =   1 ) )   & &   \  
               ( ! d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E )   | |   ( _ _ A R M _ F E A T U R E _ C M S E   <   3 ) ) )  
         / /   w i t h o u t   m a i n   e x t e n s i o n s ,   t h e   n o n - s e c u r e   M S P L I M   i s   R A Z / W I  
         # d e f i n e   _ _ s e t _ M S P L I M ( V A L U E )               ( ( v o i d ) ( V A L U E ) )  
     # e l s e  
         # d e f i n e   _ _ s e t _ M S P L I M ( V A L U E )               ( _ _ a r m _ w s r ( " M S P L I M " ,   ( V A L U E ) ) )  
     # e n d i f  
     # d e f i n e   _ _ s e t _ P R I M A S K ( V A L U E )                 ( _ _ a r m _ w s r ( " P R I M A S K " ,   ( V A L U E ) ) )  
     # d e f i n e   _ _ s e t _ P S P ( V A L U E )                         ( _ _ a r m _ w s r ( " P S P " ,   ( V A L U E ) ) )  
     # i f   ( ! ( d e f i n e d   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   )   & &   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   = =   1 ) )   & &   \  
               ( ! d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E )   | |   ( _ _ A R M _ F E A T U R E _ C M S E   <   3 ) ) )  
         / /   w i t h o u t   m a i n   e x t e n s i o n s ,   t h e   n o n - s e c u r e   P S P L I M   i s   R A Z / W I  
         # d e f i n e   _ _ s e t _ P S P L I M ( V A L U E )               ( ( v o i d ) ( V A L U E ) )  
     # e l s e  
         # d e f i n e   _ _ s e t _ P S P L I M ( V A L U E )               ( _ _ a r m _ w s r ( " P S P L I M " ,   ( V A L U E ) ) )  
     # e n d i f  
  
     # d e f i n e   _ _ T Z _ g e t _ C O N T R O L _ N S ( )               ( _ _ a r m _ r s r ( " C O N T R O L _ N S " ) )  
     # d e f i n e   _ _ T Z _ s e t _ C O N T R O L _ N S ( V A L U E )     ( _ _ a r m _ w s r ( " C O N T R O L _ N S " ,   ( V A L U E ) ) )  
     # d e f i n e   _ _ T Z _ g e t _ P S P _ N S ( )                       ( _ _ a r m _ r s r ( " P S P _ N S " ) )  
     # d e f i n e   _ _ T Z _ s e t _ P S P _ N S ( V A L U E )             ( _ _ a r m _ w s r ( " P S P _ N S " ,   ( V A L U E ) ) )  
     # d e f i n e   _ _ T Z _ g e t _ M S P _ N S ( )                       ( _ _ a r m _ r s r ( " M S P _ N S " ) )  
     # d e f i n e   _ _ T Z _ s e t _ M S P _ N S ( V A L U E )             ( _ _ a r m _ w s r ( " M S P _ N S " ,   ( V A L U E ) ) )  
     # d e f i n e   _ _ T Z _ g e t _ S P _ N S ( )                         ( _ _ a r m _ r s r ( " S P _ N S " ) )  
     # d e f i n e   _ _ T Z _ s e t _ S P _ N S ( V A L U E )               ( _ _ a r m _ w s r ( " S P _ N S " ,   ( V A L U E ) ) )  
     # d e f i n e   _ _ T Z _ g e t _ P R I M A S K _ N S ( )               ( _ _ a r m _ r s r ( " P R I M A S K _ N S " ) )  
     # d e f i n e   _ _ T Z _ s e t _ P R I M A S K _ N S ( V A L U E )     ( _ _ a r m _ w s r ( " P R I M A S K _ N S " ,   ( V A L U E ) ) )  
     # d e f i n e   _ _ T Z _ g e t _ B A S E P R I _ N S ( )               ( _ _ a r m _ r s r ( " B A S E P R I _ N S " ) )  
     # d e f i n e   _ _ T Z _ s e t _ B A S E P R I _ N S ( V A L U E )     ( _ _ a r m _ w s r ( " B A S E P R I _ N S " ,   ( V A L U E ) ) )  
     # d e f i n e   _ _ T Z _ g e t _ F A U L T M A S K _ N S ( )           ( _ _ a r m _ r s r ( " F A U L T M A S K _ N S " ) )  
     # d e f i n e   _ _ T Z _ s e t _ F A U L T M A S K _ N S ( V A L U E ) ( _ _ a r m _ w s r ( " F A U L T M A S K _ N S " ,   ( V A L U E ) ) )  
  
     # i f   ( ! ( d e f i n e d   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   )   & &   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   = =   1 ) )   & &   \  
               ( ! d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E )   | |   ( _ _ A R M _ F E A T U R E _ C M S E   <   3 ) ) )  
         / /   w i t h o u t   m a i n   e x t e n s i o n s ,   t h e   n o n - s e c u r e   P S P L I M   i s   R A Z / W I  
         # d e f i n e   _ _ T Z _ g e t _ P S P L I M _ N S ( )             ( 0 U )  
         # d e f i n e   _ _ T Z _ s e t _ P S P L I M _ N S ( V A L U E )   ( ( v o i d ) ( V A L U E ) )  
     # e l s e  
         # d e f i n e   _ _ T Z _ g e t _ P S P L I M _ N S ( )             ( _ _ a r m _ r s r ( " P S P L I M _ N S " ) )  
         # d e f i n e   _ _ T Z _ s e t _ P S P L I M _ N S ( V A L U E )   ( _ _ a r m _ w s r ( " P S P L I M _ N S " ,   ( V A L U E ) ) )  
     # e n d i f  
  
     # d e f i n e   _ _ T Z _ g e t _ M S P L I M _ N S ( )                 ( _ _ a r m _ r s r ( " M S P L I M _ N S " ) )  
     # d e f i n e   _ _ T Z _ s e t _ M S P L I M _ N S ( V A L U E )       ( _ _ a r m _ w s r ( " M S P L I M _ N S " ,   ( V A L U E ) ) )  
  
     # d e f i n e   _ _ N O P           _ _ i a r _ b u i l t i n _ n o _ o p e r a t i o n  
  
     # d e f i n e   _ _ C L Z           _ _ i a r _ b u i l t i n _ C L Z  
     # d e f i n e   _ _ C L R E X       _ _ i a r _ b u i l t i n _ C L R E X  
  
     # d e f i n e   _ _ D M B           _ _ i a r _ b u i l t i n _ D M B  
     # d e f i n e   _ _ D S B           _ _ i a r _ b u i l t i n _ D S B  
     # d e f i n e   _ _ I S B           _ _ i a r _ b u i l t i n _ I S B  
  
     # d e f i n e   _ _ L D R E X B     _ _ i a r _ b u i l t i n _ L D R E X B  
     # d e f i n e   _ _ L D R E X H     _ _ i a r _ b u i l t i n _ L D R E X H  
     # d e f i n e   _ _ L D R E X W     _ _ i a r _ b u i l t i n _ L D R E X  
  
     # d e f i n e   _ _ R B I T         _ _ i a r _ b u i l t i n _ R B I T  
     # d e f i n e   _ _ R E V           _ _ i a r _ b u i l t i n _ R E V  
     # d e f i n e   _ _ R E V 1 6       _ _ i a r _ b u i l t i n _ R E V 1 6  
  
     _ _ I A R _ F T   i n t 1 6 _ t   _ _ R E V S H ( i n t 1 6 _ t   v a l )  
     {  
         r e t u r n   ( i n t 1 6 _ t )   _ _ i a r _ b u i l t i n _ R E V S H ( v a l ) ;  
     }  
  
     # d e f i n e   _ _ R O R           _ _ i a r _ b u i l t i n _ R O R  
     # d e f i n e   _ _ R R X           _ _ i a r _ b u i l t i n _ R R X  
  
     # d e f i n e   _ _ S E V           _ _ i a r _ b u i l t i n _ S E V  
  
     # i f   ! _ _ I A R _ M 0 _ F A M I L Y  
         # d e f i n e   _ _ S S A T         _ _ i a r _ b u i l t i n _ S S A T  
     # e n d i f  
  
     # d e f i n e   _ _ S T R E X B     _ _ i a r _ b u i l t i n _ S T R E X B  
     # d e f i n e   _ _ S T R E X H     _ _ i a r _ b u i l t i n _ S T R E X H  
     # d e f i n e   _ _ S T R E X W     _ _ i a r _ b u i l t i n _ S T R E X  
  
     # i f   ! _ _ I A R _ M 0 _ F A M I L Y  
         # d e f i n e   _ _ U S A T         _ _ i a r _ b u i l t i n _ U S A T  
     # e n d i f  
  
     # d e f i n e   _ _ W F E           _ _ i a r _ b u i l t i n _ W F E  
     # d e f i n e   _ _ W F I           _ _ i a r _ b u i l t i n _ W F I  
  
     # i f   _ _ A R M _ M E D I A _ _  
         # d e f i n e   _ _ S A D D 8       _ _ i a r _ b u i l t i n _ S A D D 8  
         # d e f i n e   _ _ Q A D D 8       _ _ i a r _ b u i l t i n _ Q A D D 8  
         # d e f i n e   _ _ S H A D D 8     _ _ i a r _ b u i l t i n _ S H A D D 8  
         # d e f i n e   _ _ U A D D 8       _ _ i a r _ b u i l t i n _ U A D D 8  
         # d e f i n e   _ _ U Q A D D 8     _ _ i a r _ b u i l t i n _ U Q A D D 8  
         # d e f i n e   _ _ U H A D D 8     _ _ i a r _ b u i l t i n _ U H A D D 8  
         # d e f i n e   _ _ S S U B 8       _ _ i a r _ b u i l t i n _ S S U B 8  
         # d e f i n e   _ _ Q S U B 8       _ _ i a r _ b u i l t i n _ Q S U B 8  
         # d e f i n e   _ _ S H S U B 8     _ _ i a r _ b u i l t i n _ S H S U B 8  
         # d e f i n e   _ _ U S U B 8       _ _ i a r _ b u i l t i n _ U S U B 8  
         # d e f i n e   _ _ U Q S U B 8     _ _ i a r _ b u i l t i n _ U Q S U B 8  
         # d e f i n e   _ _ U H S U B 8     _ _ i a r _ b u i l t i n _ U H S U B 8  
         # d e f i n e   _ _ S A D D 1 6     _ _ i a r _ b u i l t i n _ S A D D 1 6  
         # d e f i n e   _ _ Q A D D 1 6     _ _ i a r _ b u i l t i n _ Q A D D 1 6  
         # d e f i n e   _ _ S H A D D 1 6   _ _ i a r _ b u i l t i n _ S H A D D 1 6  
         # d e f i n e   _ _ U A D D 1 6     _ _ i a r _ b u i l t i n _ U A D D 1 6  
         # d e f i n e   _ _ U Q A D D 1 6   _ _ i a r _ b u i l t i n _ U Q A D D 1 6  
         # d e f i n e   _ _ U H A D D 1 6   _ _ i a r _ b u i l t i n _ U H A D D 1 6  
         # d e f i n e   _ _ S S U B 1 6     _ _ i a r _ b u i l t i n _ S S U B 1 6  
         # d e f i n e   _ _ Q S U B 1 6     _ _ i a r _ b u i l t i n _ Q S U B 1 6  
         # d e f i n e   _ _ S H S U B 1 6   _ _ i a r _ b u i l t i n _ S H S U B 1 6  
         # d e f i n e   _ _ U S U B 1 6     _ _ i a r _ b u i l t i n _ U S U B 1 6  
         # d e f i n e   _ _ U Q S U B 1 6   _ _ i a r _ b u i l t i n _ U Q S U B 1 6  
         # d e f i n e   _ _ U H S U B 1 6   _ _ i a r _ b u i l t i n _ U H S U B 1 6  
         # d e f i n e   _ _ S A S X         _ _ i a r _ b u i l t i n _ S A S X  
         # d e f i n e   _ _ Q A S X         _ _ i a r _ b u i l t i n _ Q A S X  
         # d e f i n e   _ _ S H A S X       _ _ i a r _ b u i l t i n _ S H A S X  
         # d e f i n e   _ _ U A S X         _ _ i a r _ b u i l t i n _ U A S X  
         # d e f i n e   _ _ U Q A S X       _ _ i a r _ b u i l t i n _ U Q A S X  
         # d e f i n e   _ _ U H A S X       _ _ i a r _ b u i l t i n _ U H A S X  
         # d e f i n e   _ _ S S A X         _ _ i a r _ b u i l t i n _ S S A X  
         # d e f i n e   _ _ Q S A X         _ _ i a r _ b u i l t i n _ Q S A X  
         # d e f i n e   _ _ S H S A X       _ _ i a r _ b u i l t i n _ S H S A X  
         # d e f i n e   _ _ U S A X         _ _ i a r _ b u i l t i n _ U S A X  
         # d e f i n e   _ _ U Q S A X       _ _ i a r _ b u i l t i n _ U Q S A X  
         # d e f i n e   _ _ U H S A X       _ _ i a r _ b u i l t i n _ U H S A X  
         # d e f i n e   _ _ U S A D 8       _ _ i a r _ b u i l t i n _ U S A D 8  
         # d e f i n e   _ _ U S A D A 8     _ _ i a r _ b u i l t i n _ U S A D A 8  
         # d e f i n e   _ _ S S A T 1 6     _ _ i a r _ b u i l t i n _ S S A T 1 6  
         # d e f i n e   _ _ U S A T 1 6     _ _ i a r _ b u i l t i n _ U S A T 1 6  
         # d e f i n e   _ _ U X T B 1 6     _ _ i a r _ b u i l t i n _ U X T B 1 6  
         # d e f i n e   _ _ U X T A B 1 6   _ _ i a r _ b u i l t i n _ U X T A B 1 6  
         # d e f i n e   _ _ S X T B 1 6     _ _ i a r _ b u i l t i n _ S X T B 1 6  
         # d e f i n e   _ _ S X T A B 1 6   _ _ i a r _ b u i l t i n _ S X T A B 1 6  
         # d e f i n e   _ _ S M U A D       _ _ i a r _ b u i l t i n _ S M U A D  
         # d e f i n e   _ _ S M U A D X     _ _ i a r _ b u i l t i n _ S M U A D X  
         # d e f i n e   _ _ S M M L A       _ _ i a r _ b u i l t i n _ S M M L A  
         # d e f i n e   _ _ S M L A D       _ _ i a r _ b u i l t i n _ S M L A D  
         # d e f i n e   _ _ S M L A D X     _ _ i a r _ b u i l t i n _ S M L A D X  
         # d e f i n e   _ _ S M L A L D     _ _ i a r _ b u i l t i n _ S M L A L D  
         # d e f i n e   _ _ S M L A L D X   _ _ i a r _ b u i l t i n _ S M L A L D X  
         # d e f i n e   _ _ S M U S D       _ _ i a r _ b u i l t i n _ S M U S D  
         # d e f i n e   _ _ S M U S D X     _ _ i a r _ b u i l t i n _ S M U S D X  
         # d e f i n e   _ _ S M L S D       _ _ i a r _ b u i l t i n _ S M L S D  
         # d e f i n e   _ _ S M L S D X     _ _ i a r _ b u i l t i n _ S M L S D X  
         # d e f i n e   _ _ S M L S L D     _ _ i a r _ b u i l t i n _ S M L S L D  
         # d e f i n e   _ _ S M L S L D X   _ _ i a r _ b u i l t i n _ S M L S L D X  
         # d e f i n e   _ _ S E L           _ _ i a r _ b u i l t i n _ S E L  
         # d e f i n e   _ _ Q A D D         _ _ i a r _ b u i l t i n _ Q A D D  
         # d e f i n e   _ _ Q S U B         _ _ i a r _ b u i l t i n _ Q S U B  
         # d e f i n e   _ _ P K H B T       _ _ i a r _ b u i l t i n _ P K H B T  
         # d e f i n e   _ _ P K H T B       _ _ i a r _ b u i l t i n _ P K H T B  
     # e n d i f  
  
 # e l s e   / *   _ _ I C C A R M _ I N T R I N S I C S _ V E R S I O N _ _   = =   2   * /  
  
     # i f   _ _ I A R _ M 0 _ F A M I L Y  
       / *   A v o i d   c l a s h   b e t w e e n   i n t r i n s i c s . h   a n d   a r m _ m a t h . h   w h e n   c o m p i l i n g   f o r   C o r t e x - M 0 .   * /  
         # d e f i n e   _ _ C L Z     _ _ c m s i s _ i a r _ c l z _ n o t _ a c t i v e  
         # d e f i n e   _ _ S S A T   _ _ c m s i s _ i a r _ s s a t _ n o t _ a c t i v e  
         # d e f i n e   _ _ U S A T   _ _ c m s i s _ i a r _ u s a t _ n o t _ a c t i v e  
         # d e f i n e   _ _ R B I T   _ _ c m s i s _ i a r _ r b i t _ n o t _ a c t i v e  
         # d e f i n e   _ _ g e t _ A P S R     _ _ c m s i s _ i a r _ g e t _ A P S R _ n o t _ a c t i v e  
     # e n d i f  
  
  
     # i f   ( ! ( ( d e f i n e d   ( _ _ F P U _ P R E S E N T )   & &   ( _ _ F P U _ P R E S E N T   = =   1 U ) )   & &   \  
                   ( d e f i n e d   ( _ _ F P U _ U S E D       )   & &   ( _ _ F P U _ U S E D         = =   1 U ) )           ) )  
         # d e f i n e   _ _ g e t _ F P S C R   _ _ c m s i s _ i a r _ g e t _ F P S R _ n o t _ a c t i v e  
         # d e f i n e   _ _ s e t _ F P S C R   _ _ c m s i s _ i a r _ s e t _ F P S R _ n o t _ a c t i v e  
     # e n d i f  
  
     # i f d e f   _ _ I N T R I N S I C S _ I N C L U D E D  
     # e r r o r   i n t r i n s i c s . h   i s   a l r e a d y   i n c l u d e d   p r e v i o u s l y !  
     # e n d i f  
  
     # i n c l u d e   < i n t r i n s i c s . h >  
  
     # i f   _ _ I A R _ M 0 _ F A M I L Y  
       / *   A v o i d   c l a s h   b e t w e e n   i n t r i n s i c s . h   a n d   a r m _ m a t h . h   w h e n   c o m p i l i n g   f o r   C o r t e x - M 0 .   * /  
         # u n d e f   _ _ C L Z  
         # u n d e f   _ _ S S A T  
         # u n d e f   _ _ U S A T  
         # u n d e f   _ _ R B I T  
         # u n d e f   _ _ g e t _ A P S R  
  
         _ _ S T A T I C _ I N L I N E   u i n t 8 _ t   _ _ C L Z ( u i n t 3 2 _ t   d a t a )  
         {  
             i f   ( d a t a   = =   0 U )   {   r e t u r n   3 2 U ;   }  
  
             u i n t 3 2 _ t   c o u n t   =   0 U ;  
             u i n t 3 2 _ t   m a s k   =   0 x 8 0 0 0 0 0 0 0 U ;  
  
             w h i l e   ( ( d a t a   &   m a s k )   = =   0 U )  
             {  
                 c o u n t   + =   1 U ;  
                 m a s k   =   m a s k   > >   1 U ;  
             }  
             r e t u r n   c o u n t ;  
         }  
  
         _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ R B I T ( u i n t 3 2 _ t   v )  
         {  
             u i n t 8 _ t   s c   =   3 1 U ;  
             u i n t 3 2 _ t   r   =   v ;  
             f o r   ( v   > > =   1 U ;   v ;   v   > > =   1 U )  
             {  
                 r   < < =   1 U ;  
                 r   | =   v   &   1 U ;  
                 s c - - ;  
             }  
             r e t u r n   ( r   < <   s c ) ;  
         }  
  
         _ _ S T A T I C _ I N L I N E     u i n t 3 2 _ t   _ _ g e t _ A P S R ( v o i d )  
         {  
             u i n t 3 2 _ t   r e s ;  
             _ _ a s m ( " M R S             % 0 , A P S R "   :   " = r "   ( r e s ) ) ;  
             r e t u r n   r e s ;  
         }  
  
     # e n d i f  
  
     # i f   ( ! ( ( d e f i n e d   ( _ _ F P U _ P R E S E N T )   & &   ( _ _ F P U _ P R E S E N T   = =   1 U ) )   & &   \  
                   ( d e f i n e d   ( _ _ F P U _ U S E D       )   & &   ( _ _ F P U _ U S E D         = =   1 U ) )           ) )  
         # u n d e f   _ _ g e t _ F P S C R  
         # u n d e f   _ _ s e t _ F P S C R  
         # d e f i n e   _ _ g e t _ F P S C R ( )               ( 0 )  
         # d e f i n e   _ _ s e t _ F P S C R ( V A L U E )     ( ( v o i d ) V A L U E )  
     # e n d i f  
  
     # p r a g m a   d i a g _ s u p p r e s s = P e 9 4 0  
     # p r a g m a   d i a g _ s u p p r e s s = P e 1 7 7  
  
     # d e f i n e   _ _ e n a b l e _ i r q         _ _ e n a b l e _ i n t e r r u p t  
     # d e f i n e   _ _ d i s a b l e _ i r q       _ _ d i s a b l e _ i n t e r r u p t  
     # d e f i n e   _ _ N O P                       _ _ n o _ o p e r a t i o n  
  
     # d e f i n e   _ _ g e t _ x P S R             _ _ g e t _ P S R  
  
     # i f   ( ! d e f i n e d ( _ _ A R M _ A R C H _ 6 M _ _ )   | |   _ _ A R M _ A R C H _ 6 M _ _ = = 0 )  
  
         _ _ I A R _ F T   u i n t 3 2 _ t   _ _ L D R E X W ( u i n t 3 2 _ t   v o l a t i l e   * p t r )  
         {  
             r e t u r n   _ _ L D R E X ( ( u n s i g n e d   l o n g   * ) p t r ) ;  
         }  
  
         _ _ I A R _ F T   u i n t 3 2 _ t   _ _ S T R E X W ( u i n t 3 2 _ t   v a l u e ,   u i n t 3 2 _ t   v o l a t i l e   * p t r )  
         {  
             r e t u r n   _ _ S T R E X ( v a l u e ,   ( u n s i g n e d   l o n g   * ) p t r ) ;  
         }  
     # e n d i f  
  
  
     / *   _ _ C O R T E X _ M   i s   d e f i n e d   i n   c o r e _ c m 0 . h ,   c o r e _ c m 3 . h   a n d   c o r e _ c m 4 . h .   * /  
     # i f   ( _ _ C O R T E X _ M   > =   0 x 0 3 )  
  
         _ _ I A R _ F T   u i n t 3 2 _ t   _ _ R R X ( u i n t 3 2 _ t   v a l u e )  
         {  
             u i n t 3 2 _ t   r e s u l t ;  
             _ _ A S M ( " R R X             % 0 ,   % 1 "   :   " = r " ( r e s u l t )   :   " r "   ( v a l u e )   :   " c c " ) ;  
             r e t u r n ( r e s u l t ) ;  
         }  
  
         _ _ I A R _ F T   v o i d   _ _ s e t _ B A S E P R I _ M A X ( u i n t 3 2 _ t   v a l u e )  
         {  
             _ _ a s m   v o l a t i l e ( " M S R             B A S E P R I _ M A X , % 0 " : : " r "   ( v a l u e ) ) ;  
         }  
  
  
         # d e f i n e   _ _ e n a b l e _ f a u l t _ i r q     _ _ e n a b l e _ f i q  
         # d e f i n e   _ _ d i s a b l e _ f a u l t _ i r q   _ _ d i s a b l e _ f i q  
  
  
     # e n d i f   / *   ( _ _ C O R T E X _ M   > =   0 x 0 3 )   * /  
  
     _ _ I A R _ F T   u i n t 3 2 _ t   _ _ R O R ( u i n t 3 2 _ t   o p 1 ,   u i n t 3 2 _ t   o p 2 )  
     {  
         r e t u r n   ( o p 1   > >   o p 2 )   |   ( o p 1   < <   ( ( s i z e o f ( o p 1 ) * 8 ) - o p 2 ) ) ;  
     }  
  
     # i f   ( ( d e f i n e d   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   )   & &   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   = =   1 ) )   | |   \  
               ( d e f i n e d   ( _ _ A R M _ A R C H _ 8 M _ B A S E _ _   )   & &   ( _ _ A R M _ A R C H _ 8 M _ B A S E _ _   = =   1 ) )         )  
  
       _ _ I A R _ F T   u i n t 3 2 _ t   _ _ g e t _ M S P L I M ( v o i d )  
         {  
             u i n t 3 2 _ t   r e s ;  
         # i f   ( ! ( d e f i n e d   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   )   & &   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   = =   1 ) )   & &   \  
                   ( ! d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E     )   | |   ( _ _ A R M _ F E A T U R E _ C M S E       <   3 ) ) )  
             / /   w i t h o u t   m a i n   e x t e n s i o n s ,   t h e   n o n - s e c u r e   M S P L I M   i s   R A Z / W I  
             r e s   =   0 U ;  
         # e l s e  
             _ _ a s m   v o l a t i l e ( " M R S             % 0 , M S P L I M "   :   " = r "   ( r e s ) ) ;  
         # e n d i f  
             r e t u r n   r e s ;  
         }  
  
         _ _ I A R _ F T   v o i d       _ _ s e t _ M S P L I M ( u i n t 3 2 _ t   v a l u e )  
         {  
         # i f   ( ! ( d e f i n e d   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   )   & &   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   = =   1 ) )   & &   \  
                   ( ! d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E     )   | |   ( _ _ A R M _ F E A T U R E _ C M S E       <   3 ) ) )  
             / /   w i t h o u t   m a i n   e x t e n s i o n s ,   t h e   n o n - s e c u r e   M S P L I M   i s   R A Z / W I  
             ( v o i d ) v a l u e ;  
         # e l s e  
             _ _ a s m   v o l a t i l e ( " M S R             M S P L I M , % 0 "   : :   " r "   ( v a l u e ) ) ;  
         # e n d i f  
         }  
  
         _ _ I A R _ F T   u i n t 3 2 _ t   _ _ g e t _ P S P L I M ( v o i d )  
         {  
             u i n t 3 2 _ t   r e s ;  
         # i f   ( ! ( d e f i n e d   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   )   & &   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   = =   1 ) )   & &   \  
                   ( ! d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E     )   | |   ( _ _ A R M _ F E A T U R E _ C M S E       <   3 ) ) )  
             / /   w i t h o u t   m a i n   e x t e n s i o n s ,   t h e   n o n - s e c u r e   P S P L I M   i s   R A Z / W I  
             r e s   =   0 U ;  
         # e l s e  
             _ _ a s m   v o l a t i l e ( " M R S             % 0 , P S P L I M "   :   " = r "   ( r e s ) ) ;  
         # e n d i f  
             r e t u r n   r e s ;  
         }  
  
         _ _ I A R _ F T   v o i d       _ _ s e t _ P S P L I M ( u i n t 3 2 _ t   v a l u e )  
         {  
         # i f   ( ! ( d e f i n e d   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   )   & &   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   = =   1 ) )   & &   \  
                   ( ! d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E     )   | |   ( _ _ A R M _ F E A T U R E _ C M S E       <   3 ) ) )  
             / /   w i t h o u t   m a i n   e x t e n s i o n s ,   t h e   n o n - s e c u r e   P S P L I M   i s   R A Z / W I  
             ( v o i d ) v a l u e ;  
         # e l s e  
             _ _ a s m   v o l a t i l e ( " M S R             P S P L I M , % 0 "   : :   " r "   ( v a l u e ) ) ;  
         # e n d i f  
         }  
  
         _ _ I A R _ F T   u i n t 3 2 _ t   _ _ T Z _ g e t _ C O N T R O L _ N S ( v o i d )  
         {  
             u i n t 3 2 _ t   r e s ;  
             _ _ a s m   v o l a t i l e ( " M R S             % 0 , C O N T R O L _ N S "   :   " = r "   ( r e s ) ) ;  
             r e t u r n   r e s ;  
         }  
  
         _ _ I A R _ F T   v o i d       _ _ T Z _ s e t _ C O N T R O L _ N S ( u i n t 3 2 _ t   v a l u e )  
         {  
             _ _ a s m   v o l a t i l e ( " M S R             C O N T R O L _ N S , % 0 "   : :   " r "   ( v a l u e ) ) ;  
         }  
  
         _ _ I A R _ F T   u i n t 3 2 _ t       _ _ T Z _ g e t _ P S P _ N S ( v o i d )  
         {  
             u i n t 3 2 _ t   r e s ;  
             _ _ a s m   v o l a t i l e ( " M R S             % 0 , P S P _ N S "   :   " = r "   ( r e s ) ) ;  
             r e t u r n   r e s ;  
         }  
  
         _ _ I A R _ F T   v o i d       _ _ T Z _ s e t _ P S P _ N S ( u i n t 3 2 _ t   v a l u e )  
         {  
             _ _ a s m   v o l a t i l e ( " M S R             P S P _ N S , % 0 "   : :   " r "   ( v a l u e ) ) ;  
         }  
  
         _ _ I A R _ F T   u i n t 3 2 _ t       _ _ T Z _ g e t _ M S P _ N S ( v o i d )  
         {  
             u i n t 3 2 _ t   r e s ;  
             _ _ a s m   v o l a t i l e ( " M R S             % 0 , M S P _ N S "   :   " = r "   ( r e s ) ) ;  
             r e t u r n   r e s ;  
         }  
  
         _ _ I A R _ F T   v o i d       _ _ T Z _ s e t _ M S P _ N S ( u i n t 3 2 _ t   v a l u e )  
         {  
             _ _ a s m   v o l a t i l e ( " M S R             M S P _ N S , % 0 "   : :   " r "   ( v a l u e ) ) ;  
         }  
  
         _ _ I A R _ F T   u i n t 3 2 _ t       _ _ T Z _ g e t _ S P _ N S ( v o i d )  
         {  
             u i n t 3 2 _ t   r e s ;  
             _ _ a s m   v o l a t i l e ( " M R S             % 0 , S P _ N S "   :   " = r "   ( r e s ) ) ;  
             r e t u r n   r e s ;  
         }  
         _ _ I A R _ F T   v o i d       _ _ T Z _ s e t _ S P _ N S ( u i n t 3 2 _ t   v a l u e )  
         {  
             _ _ a s m   v o l a t i l e ( " M S R             S P _ N S , % 0 "   : :   " r "   ( v a l u e ) ) ;  
         }  
  
         _ _ I A R _ F T   u i n t 3 2 _ t       _ _ T Z _ g e t _ P R I M A S K _ N S ( v o i d )  
         {  
             u i n t 3 2 _ t   r e s ;  
             _ _ a s m   v o l a t i l e ( " M R S             % 0 , P R I M A S K _ N S "   :   " = r "   ( r e s ) ) ;  
             r e t u r n   r e s ;  
         }  
  
         _ _ I A R _ F T   v o i d       _ _ T Z _ s e t _ P R I M A S K _ N S ( u i n t 3 2 _ t   v a l u e )  
         {  
             _ _ a s m   v o l a t i l e ( " M S R             P R I M A S K _ N S , % 0 "   : :   " r "   ( v a l u e ) ) ;  
         }  
  
         _ _ I A R _ F T   u i n t 3 2 _ t       _ _ T Z _ g e t _ B A S E P R I _ N S ( v o i d )  
         {  
             u i n t 3 2 _ t   r e s ;  
             _ _ a s m   v o l a t i l e ( " M R S             % 0 , B A S E P R I _ N S "   :   " = r "   ( r e s ) ) ;  
             r e t u r n   r e s ;  
         }  
  
         _ _ I A R _ F T   v o i d       _ _ T Z _ s e t _ B A S E P R I _ N S ( u i n t 3 2 _ t   v a l u e )  
         {  
             _ _ a s m   v o l a t i l e ( " M S R             B A S E P R I _ N S , % 0 "   : :   " r "   ( v a l u e ) ) ;  
         }  
  
         _ _ I A R _ F T   u i n t 3 2 _ t       _ _ T Z _ g e t _ F A U L T M A S K _ N S ( v o i d )  
         {  
             u i n t 3 2 _ t   r e s ;  
             _ _ a s m   v o l a t i l e ( " M R S             % 0 , F A U L T M A S K _ N S "   :   " = r "   ( r e s ) ) ;  
             r e t u r n   r e s ;  
         }  
  
         _ _ I A R _ F T   v o i d       _ _ T Z _ s e t _ F A U L T M A S K _ N S ( u i n t 3 2 _ t   v a l u e )  
         {  
             _ _ a s m   v o l a t i l e ( " M S R             F A U L T M A S K _ N S , % 0 "   : :   " r "   ( v a l u e ) ) ;  
         }  
  
         _ _ I A R _ F T   u i n t 3 2 _ t       _ _ T Z _ g e t _ P S P L I M _ N S ( v o i d )  
         {  
             u i n t 3 2 _ t   r e s ;  
         # i f   ( ! ( d e f i n e d   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   )   & &   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   = =   1 ) )   & &   \  
                   ( ! d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E     )   | |   ( _ _ A R M _ F E A T U R E _ C M S E       <   3 ) ) )  
             / /   w i t h o u t   m a i n   e x t e n s i o n s ,   t h e   n o n - s e c u r e   P S P L I M   i s   R A Z / W I  
             r e s   =   0 U ;  
         # e l s e  
             _ _ a s m   v o l a t i l e ( " M R S             % 0 , P S P L I M _ N S "   :   " = r "   ( r e s ) ) ;  
         # e n d i f  
             r e t u r n   r e s ;  
         }  
  
         _ _ I A R _ F T   v o i d       _ _ T Z _ s e t _ P S P L I M _ N S ( u i n t 3 2 _ t   v a l u e )  
         {  
         # i f   ( ! ( d e f i n e d   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   )   & &   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   = =   1 ) )   & &   \  
                   ( ! d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E     )   | |   ( _ _ A R M _ F E A T U R E _ C M S E       <   3 ) ) )  
             / /   w i t h o u t   m a i n   e x t e n s i o n s ,   t h e   n o n - s e c u r e   P S P L I M   i s   R A Z / W I  
             ( v o i d ) v a l u e ;  
         # e l s e  
             _ _ a s m   v o l a t i l e ( " M S R             P S P L I M _ N S , % 0 "   : :   " r "   ( v a l u e ) ) ;  
         # e n d i f  
         }  
  
         _ _ I A R _ F T   u i n t 3 2 _ t       _ _ T Z _ g e t _ M S P L I M _ N S ( v o i d )  
         {  
             u i n t 3 2 _ t   r e s ;  
             _ _ a s m   v o l a t i l e ( " M R S             % 0 , M S P L I M _ N S "   :   " = r "   ( r e s ) ) ;  
             r e t u r n   r e s ;  
         }  
  
         _ _ I A R _ F T   v o i d       _ _ T Z _ s e t _ M S P L I M _ N S ( u i n t 3 2 _ t   v a l u e )  
         {  
             _ _ a s m   v o l a t i l e ( " M S R             M S P L I M _ N S , % 0 "   : :   " r "   ( v a l u e ) ) ;  
         }  
  
     # e n d i f   / *   _ _ A R M _ A R C H _ 8 M _ M A I N _ _   o r   _ _ A R M _ A R C H _ 8 M _ B A S E _ _   * /  
  
 # e n d i f       / *   _ _ I C C A R M _ I N T R I N S I C S _ V E R S I O N _ _   = =   2   * /  
  
 # d e f i n e   _ _ B K P T ( v a l u e )         _ _ a s m   v o l a t i l e   ( " B K P T           % 0 "   :   :   " i " ( v a l u e ) )  
  
 # i f   _ _ I A R _ M 0 _ F A M I L Y  
     _ _ S T A T I C _ I N L I N E   i n t 3 2 _ t   _ _ S S A T ( i n t 3 2 _ t   v a l ,   u i n t 3 2 _ t   s a t )  
     {  
         i f   ( ( s a t   > =   1 U )   & &   ( s a t   < =   3 2 U ) )  
         {  
             c o n s t   i n t 3 2 _ t   m a x   =   ( i n t 3 2 _ t ) ( ( 1 U   < <   ( s a t   -   1 U ) )   -   1 U ) ;  
             c o n s t   i n t 3 2 _ t   m i n   =   - 1   -   m a x   ;  
             i f   ( v a l   >   m a x )  
             {  
                 r e t u r n   m a x ;  
             }  
             e l s e   i f   ( v a l   <   m i n )  
             {  
                 r e t u r n   m i n ;  
             }  
         }  
         r e t u r n   v a l ;  
     }  
  
     _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ U S A T ( i n t 3 2 _ t   v a l ,   u i n t 3 2 _ t   s a t )  
     {  
         i f   ( s a t   < =   3 1 U )  
         {  
             c o n s t   u i n t 3 2 _ t   m a x   =   ( ( 1 U   < <   s a t )   -   1 U ) ;  
             i f   ( v a l   >   ( i n t 3 2 _ t ) m a x )  
             {  
                 r e t u r n   m a x ;  
             }  
             e l s e   i f   ( v a l   <   0 )  
             {  
                 r e t u r n   0 U ;  
             }  
         }  
         r e t u r n   ( u i n t 3 2 _ t ) v a l ;  
     }  
 # e n d i f  
  
 # i f   ( _ _ C O R T E X _ M   > =   0 x 0 3 )       / *   _ _ C O R T E X _ M   i s   d e f i n e d   i n   c o r e _ c m 0 . h ,   c o r e _ c m 3 . h   a n d   c o r e _ c m 4 . h .   * /  
  
     _ _ I A R _ F T   u i n t 8 _ t   _ _ L D R B T ( v o l a t i l e   u i n t 8 _ t   * a d d r )  
     {  
         u i n t 3 2 _ t   r e s ;  
         _ _ A S M ( " L D R B T   % 0 ,   [ % 1 ] "   :   " = r "   ( r e s )   :   " r "   ( a d d r )   :   " m e m o r y " ) ;  
         r e t u r n   ( ( u i n t 8 _ t ) r e s ) ;  
     }  
  
     _ _ I A R _ F T   u i n t 1 6 _ t   _ _ L D R H T ( v o l a t i l e   u i n t 1 6 _ t   * a d d r )  
     {  
         u i n t 3 2 _ t   r e s ;  
         _ _ A S M ( " L D R H T   % 0 ,   [ % 1 ] "   :   " = r "   ( r e s )   :   " r "   ( a d d r )   :   " m e m o r y " ) ;  
         r e t u r n   ( ( u i n t 1 6 _ t ) r e s ) ;  
     }  
  
     _ _ I A R _ F T   u i n t 3 2 _ t   _ _ L D R T ( v o l a t i l e   u i n t 3 2 _ t   * a d d r )  
     {  
         u i n t 3 2 _ t   r e s ;  
         _ _ A S M ( " L D R T   % 0 ,   [ % 1 ] "   :   " = r "   ( r e s )   :   " r "   ( a d d r )   :   " m e m o r y " ) ;  
         r e t u r n   r e s ;  
     }  
  
     _ _ I A R _ F T   v o i d   _ _ S T R B T ( u i n t 8 _ t   v a l u e ,   v o l a t i l e   u i n t 8 _ t   * a d d r )  
     {  
         _ _ A S M ( " S T R B T   % 1 ,   [ % 0 ] "   :   :   " r "   ( a d d r ) ,   " r "   ( ( u i n t 3 2 _ t ) v a l u e )   :   " m e m o r y " ) ;  
     }  
  
     _ _ I A R _ F T   v o i d   _ _ S T R H T ( u i n t 1 6 _ t   v a l u e ,   v o l a t i l e   u i n t 1 6 _ t   * a d d r )  
     {  
         _ _ A S M ( " S T R H T   % 1 ,   [ % 0 ] "   :   :   " r "   ( a d d r ) ,   " r "   ( ( u i n t 3 2 _ t ) v a l u e )   :   " m e m o r y " ) ;  
     }  
  
     _ _ I A R _ F T   v o i d   _ _ S T R T ( u i n t 3 2 _ t   v a l u e ,   v o l a t i l e   u i n t 3 2 _ t   * a d d r )  
     {  
         _ _ A S M ( " S T R T   % 1 ,   [ % 0 ] "   :   :   " r "   ( a d d r ) ,   " r "   ( v a l u e )   :   " m e m o r y " ) ;  
     }  
  
 # e n d i f   / *   ( _ _ C O R T E X _ M   > =   0 x 0 3 )   * /  
  
 # i f   ( ( d e f i n e d   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   )   & &   ( _ _ A R M _ A R C H _ 8 M _ M A I N _ _   = =   1 ) )   | |   \  
           ( d e f i n e d   ( _ _ A R M _ A R C H _ 8 M _ B A S E _ _   )   & &   ( _ _ A R M _ A R C H _ 8 M _ B A S E _ _   = =   1 ) )         )  
  
  
     _ _ I A R _ F T   u i n t 8 _ t   _ _ L D A B ( v o l a t i l e   u i n t 8 _ t   * p t r )  
     {  
         u i n t 3 2 _ t   r e s ;  
         _ _ A S M   v o l a t i l e   ( " L D A B   % 0 ,   [ % 1 ] "   :   " = r "   ( r e s )   :   " r "   ( p t r )   :   " m e m o r y " ) ;  
         r e t u r n   ( ( u i n t 8 _ t ) r e s ) ;  
     }  
  
     _ _ I A R _ F T   u i n t 1 6 _ t   _ _ L D A H ( v o l a t i l e   u i n t 1 6 _ t   * p t r )  
     {  
         u i n t 3 2 _ t   r e s ;  
         _ _ A S M   v o l a t i l e   ( " L D A H   % 0 ,   [ % 1 ] "   :   " = r "   ( r e s )   :   " r "   ( p t r )   :   " m e m o r y " ) ;  
         r e t u r n   ( ( u i n t 1 6 _ t ) r e s ) ;  
     }  
  
     _ _ I A R _ F T   u i n t 3 2 _ t   _ _ L D A ( v o l a t i l e   u i n t 3 2 _ t   * p t r )  
     {  
         u i n t 3 2 _ t   r e s ;  
         _ _ A S M   v o l a t i l e   ( " L D A   % 0 ,   [ % 1 ] "   :   " = r "   ( r e s )   :   " r "   ( p t r )   :   " m e m o r y " ) ;  
         r e t u r n   r e s ;  
     }  
  
     _ _ I A R _ F T   v o i d   _ _ S T L B ( u i n t 8 _ t   v a l u e ,   v o l a t i l e   u i n t 8 _ t   * p t r )  
     {  
         _ _ A S M   v o l a t i l e   ( " S T L B   % 1 ,   [ % 0 ] "   : :   " r "   ( p t r ) ,   " r "   ( v a l u e )   :   " m e m o r y " ) ;  
     }  
  
     _ _ I A R _ F T   v o i d   _ _ S T L H ( u i n t 1 6 _ t   v a l u e ,   v o l a t i l e   u i n t 1 6 _ t   * p t r )  
     {  
         _ _ A S M   v o l a t i l e   ( " S T L H   % 1 ,   [ % 0 ] "   : :   " r "   ( p t r ) ,   " r "   ( v a l u e )   :   " m e m o r y " ) ;  
     }  
  
     _ _ I A R _ F T   v o i d   _ _ S T L ( u i n t 3 2 _ t   v a l u e ,   v o l a t i l e   u i n t 3 2 _ t   * p t r )  
     {  
         _ _ A S M   v o l a t i l e   ( " S T L   % 1 ,   [ % 0 ] "   : :   " r "   ( p t r ) ,   " r "   ( v a l u e )   :   " m e m o r y " ) ;  
     }  
  
     _ _ I A R _ F T   u i n t 8 _ t   _ _ L D A E X B ( v o l a t i l e   u i n t 8 _ t   * p t r )  
     {  
         u i n t 3 2 _ t   r e s ;  
         _ _ A S M   v o l a t i l e   ( " L D A E X B   % 0 ,   [ % 1 ] "   :   " = r "   ( r e s )   :   " r "   ( p t r )   :   " m e m o r y " ) ;  
         r e t u r n   ( ( u i n t 8 _ t ) r e s ) ;  
     }  
  
     _ _ I A R _ F T   u i n t 1 6 _ t   _ _ L D A E X H ( v o l a t i l e   u i n t 1 6 _ t   * p t r )  
     {  
         u i n t 3 2 _ t   r e s ;  
         _ _ A S M   v o l a t i l e   ( " L D A E X H   % 0 ,   [ % 1 ] "   :   " = r "   ( r e s )   :   " r "   ( p t r )   :   " m e m o r y " ) ;  
         r e t u r n   ( ( u i n t 1 6 _ t ) r e s ) ;  
     }  
  
     _ _ I A R _ F T   u i n t 3 2 _ t   _ _ L D A E X ( v o l a t i l e   u i n t 3 2 _ t   * p t r )  
     {  
         u i n t 3 2 _ t   r e s ;  
         _ _ A S M   v o l a t i l e   ( " L D A E X   % 0 ,   [ % 1 ] "   :   " = r "   ( r e s )   :   " r "   ( p t r )   :   " m e m o r y " ) ;  
         r e t u r n   r e s ;  
     }  
  
     _ _ I A R _ F T   u i n t 3 2 _ t   _ _ S T L E X B ( u i n t 8 _ t   v a l u e ,   v o l a t i l e   u i n t 8 _ t   * p t r )  
     {  
         u i n t 3 2 _ t   r e s ;  
         _ _ A S M   v o l a t i l e   ( " S T L E X B   % 0 ,   % 2 ,   [ % 1 ] "   :   " = r "   ( r e s )   :   " r "   ( p t r ) ,   " r "   ( v a l u e )   :   " m e m o r y " ) ;  
         r e t u r n   r e s ;  
     }  
  
     _ _ I A R _ F T   u i n t 3 2 _ t   _ _ S T L E X H ( u i n t 1 6 _ t   v a l u e ,   v o l a t i l e   u i n t 1 6 _ t   * p t r )  
     {  
         u i n t 3 2 _ t   r e s ;  
         _ _ A S M   v o l a t i l e   ( " S T L E X H   % 0 ,   % 2 ,   [ % 1 ] "   :   " = r "   ( r e s )   :   " r "   ( p t r ) ,   " r "   ( v a l u e )   :   " m e m o r y " ) ;  
         r e t u r n   r e s ;  
     }  
  
     _ _ I A R _ F T   u i n t 3 2 _ t   _ _ S T L E X ( u i n t 3 2 _ t   v a l u e ,   v o l a t i l e   u i n t 3 2 _ t   * p t r )  
     {  
         u i n t 3 2 _ t   r e s ;  
         _ _ A S M   v o l a t i l e   ( " S T L E X   % 0 ,   % 2 ,   [ % 1 ] "   :   " = r "   ( r e s )   :   " r "   ( p t r ) ,   " r "   ( v a l u e )   :   " m e m o r y " ) ;  
         r e t u r n   r e s ;  
     }  
  
 # e n d i f   / *   _ _ A R M _ A R C H _ 8 M _ M A I N _ _   o r   _ _ A R M _ A R C H _ 8 M _ B A S E _ _   * /  
  
 # u n d e f   _ _ I A R _ F T  
 # u n d e f   _ _ I A R _ M 0 _ F A M I L Y  
 # u n d e f   _ _ I C C A R M _ V 8  
  
 # p r a g m a   d i a g _ d e f a u l t = P e 9 4 0  
 # p r a g m a   d i a g _ d e f a u l t = P e 1 7 7  
  
 # e n d i f   / *   _ _ C M S I S _ I C C A R M _ H _ _   * /  